
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgx_softc {int state; int mtx; int mtx_encls; int vmem_epc; int sgx_cdev; int enclaves; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sgx_softc*) ;
 struct sgx_softc VAR_2 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(void)
{
 struct sgx_softc *VAR_3;

 VAR_3 = &VAR_2;

 if ((VAR_3->state & VAR_1) == 0)
  return (0);

 FUNC_3(&VAR_3->mtx);
 if (!FUNC_0(&VAR_3->enclaves)) {
  FUNC_4(&VAR_3->mtx);
  return (VAR_0);
 }
 VAR_3->state &= ~VAR_1;
 FUNC_4(&VAR_3->mtx);

 FUNC_1(VAR_3->sgx_cdev);

 FUNC_6(VAR_3->vmem_epc);
 FUNC_5(VAR_3);

 FUNC_2(&VAR_3->mtx_encls);
 FUNC_2(&VAR_3->mtx);

 return (0);
}
