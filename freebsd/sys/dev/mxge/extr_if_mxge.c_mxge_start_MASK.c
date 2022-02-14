
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtx; } ;
struct mxge_slice_state {TYPE_1__ tx; } ;
struct ifnet {TYPE_2__* if_softc; } ;
struct TYPE_4__ {struct mxge_slice_state* ss; } ;
typedef TYPE_2__ mxge_softc_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mxge_slice_state*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0)
{
 mxge_softc_t *VAR_1 = VAR_0->if_softc;
 struct mxge_slice_state *VAR_2;


 VAR_2 = &VAR_1->ss[0];
 FUNC_0(&VAR_2->tx.mtx);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->tx.mtx);
}
