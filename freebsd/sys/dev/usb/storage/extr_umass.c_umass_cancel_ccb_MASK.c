
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {scalar_t__ actlen; scalar_t__ data_len; int (* callback ) (struct umass_softc*,union ccb*,scalar_t__,int ) ;union ccb* ccb; } ;
struct umass_softc {TYPE_1__ sc_transfer; scalar_t__ sc_last_xfer_index; int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct umass_softc*,union ccb*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct umass_softc *VAR_2)
{
 union ccb *VAR_3;

 FUNC_0(&VAR_2->sc_mtx, VAR_0);

 VAR_3 = VAR_2->sc_transfer.ccb;
 VAR_2->sc_transfer.ccb = ((void*)0);
 VAR_2->sc_last_xfer_index = 0;

 if (VAR_3) {
  (VAR_2->sc_transfer.callback)
      (VAR_2, VAR_3, (VAR_2->sc_transfer.data_len -
      VAR_2->sc_transfer.actlen), VAR_1);
 }
}
