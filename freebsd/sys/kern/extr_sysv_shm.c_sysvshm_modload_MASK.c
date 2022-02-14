
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct module *VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 case 130:
  VAR_4 = FUNC_0();
  if (VAR_4 != 0)
   FUNC_1();
  break;
 case 128:
  VAR_4 = FUNC_1();
  break;
 case 129:
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }
 return (VAR_4);
}
