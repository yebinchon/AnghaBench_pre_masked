
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int running; int control_register; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_rme9652*) ;
 int FUNC_1 (struct snd_rme9652*) ;
 int FUNC_2 (struct snd_rme9652*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_rme9652 *VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_6->control_register &= ~VAR_3;
 switch (VAR_7) {
 case 131:
  VAR_6->control_register |= VAR_0;
  break;
 case 130:
  VAR_6->control_register |= VAR_1;
  break;
 case 129:
  VAR_6->control_register |= VAR_2;
  break;
 case 128:
  VAR_6->control_register |= VAR_4;
  break;
 }

 if ((VAR_8 = VAR_6->running)) {
  FUNC_1(VAR_6);
 }

 FUNC_2(VAR_6, VAR_5, VAR_6->control_register);

 if (VAR_8) {
  FUNC_0(VAR_6);
 }

 return 0;
}
