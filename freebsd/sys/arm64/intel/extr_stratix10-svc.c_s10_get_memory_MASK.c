
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_t ;
typedef int vmem_size_t ;
typedef int vmem_addr_t ;
struct s10_svc_softc {int * vmem; int dev; int (* callfn ) (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;} ;
struct arm_smccc_res {scalar_t__ a0; int a2; int a1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int * FUNC_3 (char*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct s10_svc_softc *VAR_6)
{
 struct arm_smccc_res VAR_7;
 vmem_addr_t VAR_8;
 vmem_size_t VAR_9;
 vmem_t *VAR_10;

 VAR_6->callfn(VAR_1,
     0, 0, 0, 0, 0, 0, 0, &VAR_7);
 if (VAR_7.a0 != VAR_2)
  return (VAR_0);

 VAR_10 = FUNC_3("stratix10 vmem", 0, 0, VAR_5,
     VAR_5, VAR_3 | VAR_4);
 if (VAR_10 == ((void*)0))
  return (VAR_0);

 VAR_8 = VAR_7.a1;
 VAR_9 = VAR_7.a2;

 FUNC_0(VAR_6->dev, "Shared memory address 0x%lx size 0x%lx\n",
     VAR_8, VAR_9);

 FUNC_2(VAR_10, VAR_8, VAR_9, 0);

 VAR_6->vmem = VAR_10;

 return (0);
}
