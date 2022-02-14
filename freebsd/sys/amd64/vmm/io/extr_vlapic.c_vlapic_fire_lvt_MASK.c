
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int ;
struct vlapic {int vcpuid; int vm; int * lvt_last; } ;


 int VAR_0 ;
 int VAR_1 ;



 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct vlapic*,int ,int) ;
 int FUNC_3 (struct vlapic*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct vlapic *VAR_5, u_int VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_0(&VAR_5->lvt_last[VAR_6]);

 if (VAR_8 & VAR_3)
  return (0);
 VAR_9 = VAR_8 & VAR_4;
 VAR_7 = VAR_8 & VAR_1;

 switch (VAR_7) {
 case 129:
  if (VAR_9 < 16) {
   FUNC_2(VAR_5, VAR_0,
       VAR_6 == VAR_2);
   return (0);
  }
  if (FUNC_3(VAR_5, VAR_9, 0))
   FUNC_1(VAR_5->vm, VAR_5->vcpuid, 1);
  break;
 case 128:
  FUNC_5(VAR_5->vm, VAR_5->vcpuid);
  break;
 case 130:
  FUNC_4(VAR_5->vm, VAR_5->vcpuid);
  break;
 default:

  return (0);
 }
 return (1);
}
