
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;




 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct module*,int,void*) ;

__attribute__((used)) static int
FUNC_3(struct module *VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);

 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_0();
  if (VAR_3 != 0)
   FUNC_1();
  break;
 case 128:
  VAR_3 = FUNC_1();
  break;
 default:
  break;
 }
 return (VAR_3);
}
