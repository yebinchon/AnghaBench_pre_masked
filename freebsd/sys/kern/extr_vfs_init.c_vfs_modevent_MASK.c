
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsconf {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;


 int FUNC_0 (struct vfsconf*) ;
 int FUNC_1 (struct vfsconf*) ;

int
FUNC_2(module_t VAR_1, int VAR_2, void *VAR_3)
{
 struct vfsconf *VAR_4;
 int VAR_5 = 0;

 VAR_4 = (struct vfsconf *)VAR_3;

 switch (VAR_2) {
 case 129:
  if (VAR_4)
   VAR_5 = FUNC_0(VAR_4);
  break;

 case 128:
  if (VAR_4)
   VAR_5 = FUNC_1(VAR_4);
  break;
 default:
  VAR_5 = VAR_0;
  break;
 }
 return (VAR_5);
}
