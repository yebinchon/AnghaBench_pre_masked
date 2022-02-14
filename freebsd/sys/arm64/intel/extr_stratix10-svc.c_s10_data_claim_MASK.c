
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s10_svc_softc {int (* callfn ) (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;} ;
struct arm_smccc_res {int dummy; } ;
typedef scalar_t__ register_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int
FUNC_1(struct s10_svc_softc *VAR_2)
{
 struct arm_smccc_res VAR_3;
 register_t VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = 0;

 while (1) {
  VAR_4 = VAR_0;
  VAR_5 = 0;
  VAR_6 = 0;

  VAR_7 = VAR_2->callfn(VAR_4, VAR_5, VAR_6, 0, 0, 0, 0, 0, &VAR_3);
  if (VAR_7 == VAR_1)
   continue;

  break;
 }

 return (VAR_7);
}
