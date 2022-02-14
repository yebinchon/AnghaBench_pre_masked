
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {int nfe_int_task; int nfe_tq; int nfe_irq_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfe_softc*,int ) ;
 int FUNC_1 (struct nfe_softc*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2)
{
 struct nfe_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = (struct nfe_softc *)VAR_2;

 VAR_4 = FUNC_0(VAR_3, VAR_3->nfe_irq_status);
 if (VAR_4 == 0 || VAR_4 == 0xffffffff)
  return (VAR_1);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3->nfe_tq, &VAR_3->nfe_int_task);

 return (VAR_0);
}
