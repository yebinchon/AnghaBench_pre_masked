
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uhid_snes_softc {int sc_fflags; struct usb_fifo** sc_fifo_open; int * sc_transfer; int sc_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uhid_snes_softc*) ;
 int FUNC_3 (struct usb_fifo*,int ,int ) ;
 struct uhid_snes_softc* FUNC_4 (struct usb_fifo*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct usb_fifo *VAR_5, int VAR_6)
{
 struct uhid_snes_softc *VAR_7 = FUNC_4(VAR_5);
 int VAR_8;

 if (VAR_7->sc_fflags & VAR_6) {
  FUNC_2(VAR_7);
  return (VAR_0);
 }

 FUNC_0(&VAR_7->sc_mutex);
 FUNC_6(VAR_7->sc_transfer[VAR_3]);
 FUNC_1(&VAR_7->sc_mutex);

 VAR_8 = FUNC_3(VAR_5,
     FUNC_5(VAR_7->sc_transfer[VAR_3]),
     VAR_2);
 if (VAR_8)
  return (VAR_1);

 VAR_7->sc_fifo_open[VAR_4] = VAR_5;

 return (0);
}
