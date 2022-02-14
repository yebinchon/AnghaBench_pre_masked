
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct saf1761_otg_td {scalar_t__ channel; int ep_type; } ;
struct saf1761_otg_softc {unsigned int sc_host_intr_map; unsigned int sc_host_intr_suspend_map; unsigned int* sc_host_intr_busy_map; unsigned int sc_host_isoc_map; unsigned int sc_host_isoc_suspend_map; unsigned int* sc_host_isoc_busy_map; unsigned int sc_host_async_map; unsigned int sc_host_async_suspend_map; unsigned int* sc_host_async_busy_map; } ;


 int FUNC_0 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct saf1761_otg_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct saf1761_otg_softc *VAR_4, struct saf1761_otg_td *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_5->channel >= VAR_1)
  return;

 switch (VAR_5->ep_type) {
 case 129:
  VAR_6 = VAR_5->channel - 32;
  VAR_5->channel = VAR_1;
  VAR_4->sc_host_intr_map &= ~(1U << VAR_6);
  VAR_4->sc_host_intr_suspend_map &= ~(1U << VAR_6);
  VAR_4->sc_host_intr_busy_map[0] |= (1U << VAR_6);
  FUNC_0(VAR_4, VAR_2,
      (~VAR_4->sc_host_intr_map) | VAR_4->sc_host_intr_suspend_map);
  break;
 case 128:
  VAR_6 = VAR_5->channel;
  VAR_5->channel = VAR_1;
  VAR_4->sc_host_isoc_map &= ~(1U << VAR_6);
  VAR_4->sc_host_isoc_suspend_map &= ~(1U << VAR_6);
  VAR_4->sc_host_isoc_busy_map[0] |= (1U << VAR_6);
  FUNC_0(VAR_4, VAR_3,
      (~VAR_4->sc_host_isoc_map) | VAR_4->sc_host_isoc_suspend_map);
  break;
 default:
  VAR_6 = VAR_5->channel - 64;
  VAR_5->channel = VAR_1;
  VAR_4->sc_host_async_map &= ~(1U << VAR_6);
  VAR_4->sc_host_async_suspend_map &= ~(1U << VAR_6);
  VAR_4->sc_host_async_busy_map[0] |= (1U << VAR_6);
  FUNC_0(VAR_4, VAR_0,
      (~VAR_4->sc_host_async_map) | VAR_4->sc_host_async_suspend_map);
  break;
 }
 FUNC_1(VAR_4, 1);
}
