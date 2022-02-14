
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int tx_fragsize; scalar_t__ tx_buf; } ;
struct snd_ac97 {int dummy; } ;
struct ac97_frame {int ac97_addr; int ac97_data; int ac97_tag; } ;
typedef int __u16 ;


 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (char*,int,int,...) ;
 struct sport_device* VAR_2 ;
 int FUNC_1 (struct sport_device*,int*,int) ;
 int FUNC_2 (struct sport_device*) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_3, __u16 VAR_4, __u16 VAR_5)
{
 struct sport_device *VAR_6 = VAR_2;
 int VAR_7 = FUNC_2(VAR_6);
 struct ac97_frame *VAR_8;

 FUNC_1(VAR_6, &VAR_7, 1);

 VAR_8 = (struct ac97_frame *)(VAR_6->tx_buf +
   VAR_7 * VAR_6->tx_fragsize);
 FUNC_0("sport->tx_buf:%p, nextfrag:0x%x nextwrite:%p, cmd_count:%d\n",
  VAR_6->tx_buf, VAR_7, VAR_8, VAR_1[VAR_7]);
 VAR_8[VAR_1[VAR_7]].ac97_tag |= VAR_0;
 VAR_8[VAR_1[VAR_7]].ac97_addr = VAR_4;
 VAR_8[VAR_1[VAR_7]].ac97_data = VAR_5;
 ++VAR_1[VAR_7];
 FUNC_0("ac97_sport: Inserting %02x/%04x into fragment %d\n",
   VAR_4 >> 8, VAR_5, VAR_7);
}
