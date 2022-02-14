
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;




 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (struct vnode*) ;

__attribute__((used)) static int
FUNC_1(struct vnode *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = 0;

 switch (VAR_3 & VAR_1) {
 case 129:
  if (FUNC_0(VAR_2) == 130)
   VAR_4 = 128;
  else
   VAR_4 = VAR_0;
  break;
 case 130:
 case 128:
  VAR_4 = VAR_0;
  break;
 case 131:
  VAR_4 = 128;
  break;
 default:
  break;
 }

 return (VAR_4);
}
