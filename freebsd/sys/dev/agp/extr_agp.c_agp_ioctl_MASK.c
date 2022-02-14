
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int si_drv1; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
typedef int agp_unbind ;
typedef int agp_setup ;
typedef int agp_info ;
typedef int agp_bind ;
typedef int agp_allocate ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5, struct thread *VAR_6)
{
 device_t VAR_7 = VAR_2->si_drv1;

 switch (VAR_3) {
 case 131:
  return FUNC_5(VAR_7, (agp_info *) VAR_4);

 case 136:
  return FUNC_0(VAR_7, VAR_0);

 case 130:
  return FUNC_6(VAR_7, VAR_0);

 case 129:
  return FUNC_7(VAR_7, (agp_setup *)VAR_4);

 case 135:
  return FUNC_1(VAR_7, (agp_allocate *)VAR_4);

 case 132:
  return FUNC_4(VAR_7, *(int *) VAR_4);

 case 134:
  return FUNC_2(VAR_7, (agp_bind *)VAR_4);

 case 128:
  return FUNC_8(VAR_7, (agp_unbind *)VAR_4);

 case 133:
  return FUNC_3(VAR_7);
 }

 return VAR_1;
}
