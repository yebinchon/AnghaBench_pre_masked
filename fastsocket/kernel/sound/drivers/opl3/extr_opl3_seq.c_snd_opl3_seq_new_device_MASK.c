
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_seq_device {int dummy; } ;
struct TYPE_2__ {unsigned long data; int function; } ;
struct snd_opl3 {int seq_client; int hardware; scalar_t__ sys_timer_status; int sys_timer_lock; TYPE_1__ tlist; int seq_dev_num; int card; int voice_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_seq_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct snd_opl3*,char*) ;
 int FUNC_3 (struct snd_opl3*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct snd_seq_device *VAR_3)
{
 struct snd_opl3 *VAR_4;
 int VAR_5, VAR_6;
 char VAR_7[32];
 int VAR_8;

 VAR_4 = *(struct snd_opl3 **)FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_6(&VAR_4->voice_lock);

 VAR_4->seq_client = -1;


 VAR_8 = (VAR_4->hardware & VAR_1) >> 8;
 FUNC_7(VAR_7, "OPL%i FM synth", VAR_8);
 VAR_5 = VAR_4->seq_client =
  FUNC_4(VAR_4->card, VAR_4->seq_dev_num,
          VAR_7);
 if (VAR_5 < 0)
  return VAR_5;

 if ((VAR_6 = FUNC_3(VAR_4)) < 0) {
  FUNC_5(VAR_5);
  VAR_4->seq_client = -1;
  return VAR_6;
 }


 FUNC_1(&VAR_4->tlist);
 VAR_4->tlist.function = VAR_2;
 VAR_4->tlist.data = (unsigned long) VAR_4;
 FUNC_6(&VAR_4->sys_timer_lock);
 VAR_4->sys_timer_status = 0;




 return 0;
}
