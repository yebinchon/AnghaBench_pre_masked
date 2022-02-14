
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int status_bus_reset; int status_suspend; int change_suspend; int change_connect; } ;
struct saf1761_otg_softc {scalar_t__ sc_xfer_complete; int sc_bus; TYPE_1__ sc_flags; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct saf1761_otg_softc*,int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct saf1761_otg_softc*) ;
 int FUNC_8 (struct saf1761_otg_softc*) ;
 int FUNC_9 (struct saf1761_otg_softc*) ;
 int FUNC_10 (struct saf1761_otg_softc*,int) ;

void
FUNC_11(void *VAR_12)
{
 struct saf1761_otg_softc *VAR_13 = VAR_12;
 uint32_t VAR_14;

 FUNC_3(&VAR_13->sc_bus);
 FUNC_4(&VAR_13->sc_bus);

 VAR_14 = FUNC_1(VAR_13, VAR_3) &
     VAR_0;


 FUNC_2(VAR_13, VAR_3, VAR_14);

 FUNC_0("DCINTERRUPT=0x%08x SOF=0x%08x "
     "FRINDEX=0x%08x\n", VAR_14,
     FUNC_1(VAR_13, VAR_8),
     FUNC_1(VAR_13, VAR_9));


 if (VAR_14 & VAR_7)
  FUNC_9(VAR_13);

 if (VAR_14 & VAR_4) {

  FUNC_2(VAR_13, VAR_10,
      VAR_11);


  FUNC_2(VAR_13, VAR_1,
      VAR_2);

  VAR_13->sc_flags.status_bus_reset = 1;
  VAR_13->sc_flags.status_suspend = 0;
  VAR_13->sc_flags.change_suspend = 0;
  VAR_13->sc_flags.change_connect = 1;


  FUNC_10(VAR_13, 1);

  FUNC_8(VAR_13);
 }





 if (VAR_14 & VAR_5) {

  FUNC_2(VAR_13, VAR_10,
      VAR_11);

  if (VAR_13->sc_flags.status_suspend) {
   VAR_13->sc_flags.status_suspend = 0;
   VAR_13->sc_flags.change_suspend = 1;

   FUNC_10(VAR_13, 1);

   FUNC_8(VAR_13);
  }
 } else if (VAR_14 & VAR_6) {
  if (!VAR_13->sc_flags.status_suspend) {
   VAR_13->sc_flags.status_suspend = 1;
   VAR_13->sc_flags.change_suspend = 1;

   FUNC_10(VAR_13, 0);

   FUNC_8(VAR_13);
  }
 }

 if (VAR_13->sc_xfer_complete != 0) {
  VAR_13->sc_xfer_complete = 0;


  FUNC_7(VAR_13);
 }
 FUNC_5(&VAR_13->sc_bus);
 FUNC_6(&VAR_13->sc_bus);
}
