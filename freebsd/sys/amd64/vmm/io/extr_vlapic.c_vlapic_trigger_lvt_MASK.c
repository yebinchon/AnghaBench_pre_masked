
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {int vcpuid; int vm; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vlapic*) ;
 int FUNC_1 (struct vlapic*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int) ;

int
FUNC_5(struct vlapic *VAR_2, int VAR_3)
{

 if (FUNC_0(VAR_2) == 0) {





  switch (VAR_3) {
   case 132:
    FUNC_2(VAR_2->vm, VAR_2->vcpuid);
    break;
   case 131:
    FUNC_3(VAR_2->vm, VAR_2->vcpuid);
    break;
   default:
    break;
  }
  return (0);
 }

 switch (VAR_3) {
 case 132:
 case 131:
 case 128:
 case 133:
 case 130:
 case 129:
 case 134:
  if (FUNC_1(VAR_2, VAR_3)) {
   FUNC_4(VAR_2->vm, VAR_2->vcpuid,
       VAR_1, VAR_3, 1);
  }
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
