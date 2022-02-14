
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct ustorage_fs_softc {size_t sc_last_xfer_index; scalar_t__* sc_xfer; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct ustorage_fs_softc *VAR_0, uint8_t VAR_1)
{
 if (VAR_0->sc_xfer[VAR_1]) {
  VAR_0->sc_last_xfer_index = VAR_1;
  FUNC_0(VAR_0->sc_xfer[VAR_1]);
 }
}
