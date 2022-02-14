
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_softc {int sc_flags; int sc_mtx; scalar_t__ sc_repdesc_ptr; int sc_xfer; int sc_fifo; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uhid_softc* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct uhid_softc *VAR_4 = FUNC_0(VAR_3);

 FUNC_3(&VAR_4->sc_fifo);

 FUNC_4(VAR_4->sc_xfer, VAR_2);

 if (VAR_4->sc_repdesc_ptr) {
  if (!(VAR_4->sc_flags & VAR_1)) {
   FUNC_1(VAR_4->sc_repdesc_ptr, VAR_0);
  }
 }
 FUNC_2(&VAR_4->sc_mtx);

 return (0);
}
