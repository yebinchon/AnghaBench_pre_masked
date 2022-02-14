
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_als300_substream_data {unsigned short control_register; int period_flipflop; } ;
struct snd_als300 {int reg_lock; int port; } ;
struct TYPE_2__ {struct snd_als300_substream_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,unsigned short) ;
 int FUNC_4 (int ,unsigned short,int) ;
 struct snd_als300* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_als300 *VAR_5 = FUNC_5(VAR_3);
 u32 VAR_6;
 struct snd_als300_substream_data *VAR_7;
 unsigned short VAR_8;
 int VAR_9 = 0;

 VAR_7 = VAR_3->runtime->private_data;
 VAR_8 = VAR_7->control_register;

 FUNC_0();
 FUNC_6(&VAR_5->reg_lock);
 switch (VAR_4) {
 case 130:
 case 131:
  VAR_6 = FUNC_3(VAR_5->port, VAR_8);
  VAR_7->period_flipflop = 1;
  FUNC_4(VAR_5->port, VAR_8, VAR_6 | VAR_2);
  FUNC_2("TRIGGER START\n");
  break;
 case 129:
 case 128:
  VAR_6 = FUNC_3(VAR_5->port, VAR_8);
  FUNC_4(VAR_5->port, VAR_8, VAR_6 & ~VAR_2);
  FUNC_2("TRIGGER STOP\n");
  break;
 case 133:
  VAR_6 = FUNC_3(VAR_5->port, VAR_8);
  FUNC_4(VAR_5->port, VAR_8, VAR_6 | VAR_1);
  FUNC_2("TRIGGER PAUSE\n");
  break;
 case 132:
  VAR_6 = FUNC_3(VAR_5->port, VAR_8);
  FUNC_4(VAR_5->port, VAR_8, VAR_6 & ~VAR_1);
  FUNC_2("TRIGGER RELEASE\n");
  break;
 default:
  FUNC_2("TRIGGER INVALID\n");
  VAR_9 = -VAR_0;
 }
 FUNC_7(&VAR_5->reg_lock);
 FUNC_1();
 return VAR_9;
}
