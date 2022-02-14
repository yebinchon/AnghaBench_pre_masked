
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {scalar_t__ actlen; scalar_t__ data_len; int (* callback ) (struct umass_softc*,union ccb*,scalar_t__,int ) ;union ccb* ccb; } ;
struct umass_softc {TYPE_1__ sc_transfer; int sc_last_xfer_index; scalar_t__* sc_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct umass_softc*,union ccb*,scalar_t__,int ) ;
 int FUNC_1 (struct umass_softc*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct umass_softc *VAR_3)
{
 if (VAR_3->sc_xfer[VAR_2]) {
  FUNC_1(VAR_3, VAR_2);
 } else {
  union ccb *VAR_4 = VAR_3->sc_transfer.ccb;

  VAR_3->sc_transfer.ccb = ((void*)0);

  VAR_3->sc_last_xfer_index = VAR_1;

  (VAR_3->sc_transfer.callback)
      (VAR_3, VAR_4, (VAR_3->sc_transfer.data_len -
      VAR_3->sc_transfer.actlen), VAR_0);
 }
}
