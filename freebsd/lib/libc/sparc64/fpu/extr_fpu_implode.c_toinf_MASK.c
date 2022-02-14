
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpemu {int fe_fsr; } ;


 int FUNC_0 (int ) ;





__attribute__((used)) static int
FUNC_1(struct fpemu *VAR_0, int VAR_1)
{
 int VAR_2;


 switch (FUNC_0(VAR_0->fe_fsr)) {
 default:
 case 131:
  VAR_2 = 1;
  break;

 case 128:
  VAR_2 = 0;
  break;

 case 129:
  VAR_2 = VAR_1 == 0;
  break;

 case 130:
  VAR_2 = VAR_1;
  break;
 }
 return (VAR_2);
}
