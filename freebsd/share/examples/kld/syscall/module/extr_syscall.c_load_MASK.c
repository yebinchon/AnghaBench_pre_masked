
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(struct module *VAR_2, int VAR_3, void *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_3) {
 case 129 :
  FUNC_0("syscall loaded at %d\n", VAR_1);
  break;
 case 128 :
  FUNC_0("syscall unloaded from %d\n", VAR_1);
  break;
 default :
  VAR_5 = VAR_0;
  break;
 }
 return (VAR_5);
}
