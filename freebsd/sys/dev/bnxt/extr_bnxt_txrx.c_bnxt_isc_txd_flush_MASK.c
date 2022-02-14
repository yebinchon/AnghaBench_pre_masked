
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct bnxt_softc {struct bnxt_ring* tx_rings; } ;
struct bnxt_ring {int dummy; } ;
typedef int qidx_t ;


 int FUNC_0 (struct bnxt_ring*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, uint16_t VAR_1, qidx_t VAR_2)
{
 struct bnxt_softc *VAR_3 = (struct bnxt_softc *)VAR_0;
 struct bnxt_ring *VAR_4 = &VAR_3->tx_rings[VAR_1];


 FUNC_0(VAR_4, VAR_2);

 FUNC_0(VAR_4, VAR_2);
 return;
}
