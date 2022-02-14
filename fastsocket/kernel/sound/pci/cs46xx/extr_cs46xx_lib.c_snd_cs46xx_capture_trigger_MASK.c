
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {unsigned int ctl; } ;
struct snd_cs46xx {int reg_lock; TYPE_1__ capt; } ;


 int VAR_0 ;
 int VAR_1 ;




 unsigned int FUNC_0 (struct snd_cs46xx*,int ) ;
 int FUNC_1 (struct snd_cs46xx*,int ,unsigned int) ;
 struct snd_cs46xx* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
          int VAR_3)
{
 struct snd_cs46xx *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_4->reg_lock);
 switch (VAR_3) {
 case 130:
 case 131:
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  VAR_5 &= 0xffff0000;
  FUNC_1(VAR_4, VAR_0, VAR_4->capt.ctl | VAR_5);
  break;
 case 129:
 case 128:
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  VAR_5 &= 0xffff0000;
  FUNC_1(VAR_4, VAR_0, VAR_5);
  break;
 default:
  VAR_6 = -VAR_1;
  break;
 }
 FUNC_4(&VAR_4->reg_lock);

 return VAR_6;
}
