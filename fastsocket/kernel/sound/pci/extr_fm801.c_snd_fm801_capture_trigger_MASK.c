
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct fm801 {int cap_ctrl; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fm801*,int ) ;
 int VAR_6 ;






 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 struct fm801* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7,
         int VAR_8)
{
 struct fm801 *VAR_9 = FUNC_3(VAR_7);

 FUNC_4(&VAR_9->reg_lock);
 switch (VAR_8) {
 case 130:
  VAR_9->cap_ctrl &= ~(VAR_2 |
         VAR_3 |
         VAR_5);
  VAR_9->cap_ctrl |= VAR_6 |
       VAR_4;
  break;
 case 129:
  VAR_9->cap_ctrl &= ~(VAR_6 | VAR_5);
  break;
 case 133:
 case 128:
  VAR_9->cap_ctrl |= VAR_5;
  break;
 case 132:
 case 131:
  VAR_9->cap_ctrl &= ~VAR_5;
  break;
 default:
  FUNC_5(&VAR_9->reg_lock);
  FUNC_2();
  return -VAR_1;
 }
 FUNC_1(VAR_9->cap_ctrl, FUNC_0(VAR_9, VAR_0));
 FUNC_5(&VAR_9->reg_lock);
 return 0;
}
