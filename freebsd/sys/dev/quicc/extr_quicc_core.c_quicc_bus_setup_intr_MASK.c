
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct quicc_softc {int sc_icookie; int sc_ires; scalar_t__ sc_fastintr; scalar_t__ sc_polled; } ;
struct quicc_device {void* qd_ih_arg; int * qd_ih; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int,int *,int *,struct quicc_softc*,int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 struct quicc_device* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct quicc_softc* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;

int
FUNC_5(device_t VAR_5, device_t VAR_6, struct resource *VAR_7,
    int VAR_8, driver_filter_t *VAR_9, void (*VAR_10)(void *), void *VAR_11,
    void **VAR_12)
{
 struct quicc_device *VAR_13;
 struct quicc_softc *VAR_14;

 if (FUNC_3(VAR_6) != VAR_5)
  return (VAR_0);


 if (VAR_9 == ((void*)0) && !(VAR_8 & VAR_2))
  return (VAR_0);

 VAR_14 = FUNC_4(VAR_5);
 if (VAR_14->sc_polled)
  return (VAR_1);

 if (VAR_14->sc_fastintr && VAR_9 == ((void*)0)) {
  VAR_14->sc_fastintr = 0;
  FUNC_1(VAR_5, VAR_14->sc_ires, VAR_14->sc_icookie);
  FUNC_0(VAR_5, VAR_14->sc_ires, VAR_3 | VAR_2,
      ((void*)0), (driver_intr_t *)VAR_4, VAR_14, &VAR_14->sc_icookie);
 }

 VAR_13 = FUNC_2(VAR_6);
 VAR_13->qd_ih = (VAR_9 != ((void*)0)) ? VAR_9 : (driver_filter_t *)VAR_10;
 VAR_13->qd_ih_arg = VAR_11;
 *VAR_12 = VAR_10;
 return (0);
}
