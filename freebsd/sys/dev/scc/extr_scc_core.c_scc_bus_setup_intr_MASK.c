
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scc_softc {struct scc_chan* sc_chan; TYPE_1__* sc_class; scalar_t__ sc_fastintr; scalar_t__ sc_polled; } ;
struct scc_mode {int m_hasintr; int m_fastintr; int * ih; int ** ih_src; void* ih_arg; } ;
struct scc_chan {int ch_icookie; int * ch_ires; } ;
struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {int cl_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int *,int,int *,int *,struct scc_softc*,int *) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 struct scc_mode* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct scc_softc* FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_6 ;

int
FUNC_6(device_t VAR_7, device_t VAR_8, struct resource *VAR_9, int VAR_10,
    driver_filter_t *VAR_11, void (*VAR_12)(void *), void *VAR_13, void **VAR_14)
{
 struct scc_chan *VAR_15;
 struct scc_mode *VAR_16;
 struct scc_softc *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 if (FUNC_4(VAR_8) != VAR_7)
  return (VAR_0);


 if (VAR_11 == ((void*)0) && !(VAR_10 & VAR_2))
  return (VAR_0);

 VAR_17 = FUNC_5(VAR_7);
 if (VAR_17->sc_polled)
  return (VAR_1);

 if (VAR_17->sc_fastintr && VAR_11 == ((void*)0)) {
  VAR_17->sc_fastintr = 0;
  for (VAR_18 = 0; VAR_18 < VAR_17->sc_class->cl_channels; VAR_18++) {
   VAR_15 = &VAR_17->sc_chan[VAR_18];
   if (VAR_15->ch_ires == ((void*)0))
    continue;
   FUNC_2(VAR_7, VAR_15->ch_ires, VAR_15->ch_icookie);
   FUNC_1(VAR_7, VAR_15->ch_ires,
       VAR_3 | VAR_2, ((void*)0),
       (driver_intr_t *)VAR_6, VAR_17, &VAR_15->ch_icookie);
  }
 }

 VAR_16 = FUNC_3(VAR_8);
 VAR_16->m_hasintr = 1;
 VAR_16->m_fastintr = (VAR_11 != ((void*)0)) ? 1 : 0;
 VAR_16->ih = (VAR_11 != ((void*)0)) ? VAR_11 : (driver_filter_t *)VAR_12;
 VAR_16->ih_arg = VAR_13;

 VAR_19 = 0, VAR_20 = VAR_5;
 while (VAR_19 < VAR_4) {
  VAR_16->ih_src[VAR_19] = FUNC_0(VAR_8, VAR_20);
  if (VAR_16->ih_src[VAR_19] != ((void*)0))
   VAR_16->ih = ((void*)0);
  VAR_19++, VAR_20 <<= 1;
 }
 return (0);
}
