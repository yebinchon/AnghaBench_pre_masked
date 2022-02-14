
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int data_rem; scalar_t__ cbw_dir; int data_short; } ;
struct ustorage_fs_softc {TYPE_1__ sc_transfer; TYPE_2__* sc_csw; } ;
struct TYPE_4__ {int bCSWStatus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(struct ustorage_fs_softc *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 if (VAR_3 != VAR_2->sc_transfer.data_rem) {

  if (VAR_2->sc_transfer.cbw_dir == VAR_1) {




   VAR_2->sc_csw->bCSWStatus = VAR_0;
   return (1);
  }


  if (VAR_2->sc_transfer.data_rem > VAR_3) {

   VAR_2->sc_transfer.data_rem = VAR_3;
   VAR_2->sc_transfer.data_short = 1;
  }


  if (VAR_2->sc_transfer.data_rem & ~VAR_4) {

   VAR_2->sc_transfer.data_rem &= VAR_4;
   VAR_2->sc_transfer.data_short = 1;
  }
 }
 return (0);
}
