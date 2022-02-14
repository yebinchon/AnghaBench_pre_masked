
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct saf1761_otg_softc {int* sc_host_async_busy_map; int* sc_host_intr_busy_map; int* sc_host_isoc_busy_map; scalar_t__ sc_xfer_complete; int sc_bus; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct saf1761_otg_softc*,int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct saf1761_otg_softc*,int ) ;
 int FUNC_6 (struct saf1761_otg_softc*) ;

int
FUNC_7(void *VAR_9)
{
 struct saf1761_otg_softc *VAR_10 = VAR_9;
 int VAR_11 = VAR_0;
 uint32_t VAR_12;
 uint32_t VAR_13;

 FUNC_3(&VAR_10->sc_bus);

 VAR_12 = FUNC_1(VAR_10, VAR_6);

 FUNC_2(VAR_10, VAR_6, VAR_12);

 VAR_13 = FUNC_1(VAR_10, VAR_4);

 FUNC_2(VAR_10, VAR_4,
     VAR_13 & ~VAR_2);

 (void) FUNC_1(VAR_10, VAR_3);
 (void) FUNC_1(VAR_10, VAR_7);
 (void) FUNC_1(VAR_10, VAR_8);

 FUNC_0(9, "HCINTERRUPT=0x%08x DCINTERRUPT=0x%08x\n", VAR_12, VAR_13);

 if (VAR_13 & VAR_5) {
  if ((VAR_10->sc_host_async_busy_map[1] | VAR_10->sc_host_async_busy_map[0] |
       VAR_10->sc_host_intr_busy_map[1] | VAR_10->sc_host_intr_busy_map[0] |
       VAR_10->sc_host_isoc_busy_map[1] | VAR_10->sc_host_isoc_busy_map[0]) != 0) {

   VAR_11 = VAR_1;

   VAR_10->sc_host_async_busy_map[1] = VAR_10->sc_host_async_busy_map[0];
   VAR_10->sc_host_async_busy_map[0] = 0;

   VAR_10->sc_host_intr_busy_map[1] = VAR_10->sc_host_intr_busy_map[0];
   VAR_10->sc_host_intr_busy_map[0] = 0;

   VAR_10->sc_host_isoc_busy_map[1] = VAR_10->sc_host_isoc_busy_map[0];
   VAR_10->sc_host_isoc_busy_map[0] = 0;
  } else {

   FUNC_5(VAR_10, 0);
  }
 }

 if (VAR_13 & VAR_2)
  VAR_11 = VAR_1;


 FUNC_6(VAR_10);

 if (VAR_10->sc_xfer_complete != 0)
  VAR_11 = VAR_1;

 FUNC_4(&VAR_10->sc_bus);

 return (VAR_11);
}
