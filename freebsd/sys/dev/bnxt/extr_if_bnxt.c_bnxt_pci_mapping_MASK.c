
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_softc {int doorbell_bar; int hwrm_bar; } ;


 int FUNC_0 (struct bnxt_softc*,int *,int,int) ;

__attribute__((used)) static int
FUNC_1(struct bnxt_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->hwrm_bar, 0, 1);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->doorbell_bar, 2, 0);

 return VAR_1;
}
