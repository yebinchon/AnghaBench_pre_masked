
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* an_tx_fids; int an_tx_empty; scalar_t__ an_tx_cons; scalar_t__ an_tx_prod; scalar_t__* an_tx_ring; } ;
struct an_softc {TYPE_1__ an_rdata; int mpi350; scalar_t__ an_gone; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct an_softc*,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct an_softc *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (VAR_2->an_gone)
  return (0);

 if (!VAR_2->mpi350) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (FUNC_0(VAR_2, 1518 +
       0x44, &VAR_4))
    return(VAR_1);
   VAR_2->an_rdata.an_tx_fids[VAR_3] = VAR_4;
   VAR_2->an_rdata.an_tx_ring[VAR_3] = 0;
  }
 }

 VAR_2->an_rdata.an_tx_prod = 0;
 VAR_2->an_rdata.an_tx_cons = 0;
 VAR_2->an_rdata.an_tx_empty = 1;

 return(0);
}
