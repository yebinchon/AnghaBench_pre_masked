
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {long long ctrl_register; int period; long long speed; int type; long long settings_register; } ;



 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long long VAR_7 ;
 long long VAR_8 ;

 long long FUNC_0 (int) ;
 int FUNC_1 (struct sc_info*,int ,long long) ;

__attribute__((used)) static int
FUNC_2(struct sc_info *VAR_9)
{
 long long VAR_10;


 VAR_9->ctrl_register |= VAR_8;


 VAR_9->period = 32;
 VAR_9->ctrl_register = FUNC_0(7);


 VAR_9->speed = VAR_7;
 VAR_9->ctrl_register &= ~VAR_3;
 VAR_9->ctrl_register |= VAR_4;
 FUNC_1(VAR_9, VAR_1, VAR_9->ctrl_register);

 switch (VAR_9->type) {
 case 128:
 case 129:
  VAR_10 = VAR_2;
  break;
 default:
  return (VAR_0);
 }


 VAR_10 /= VAR_9->speed;
 FUNC_1(VAR_9, VAR_5, VAR_10);


 VAR_9->settings_register = 0;
 FUNC_1(VAR_9, VAR_6, VAR_9->settings_register);

 return (0);
}
