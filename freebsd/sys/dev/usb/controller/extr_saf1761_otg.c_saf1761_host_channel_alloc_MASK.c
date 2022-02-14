
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct saf1761_otg_td {scalar_t__ channel; int ep_type; int pc; } ;
struct saf1761_otg_softc {int sc_host_intr_map; int* sc_host_intr_busy_map; int sc_host_isoc_map; int* sc_host_isoc_busy_map; int sc_host_async_map; int* sc_host_async_busy_map; } ;
struct TYPE_3__ {scalar_t__ self_suspended; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;


 int FUNC_1 (int) ;

__attribute__((used)) static uint8_t
FUNC_2(struct saf1761_otg_softc *VAR_1, struct saf1761_otg_td *VAR_2)
{
 uint32_t VAR_3;
 int VAR_4;

 if (VAR_2->channel < VAR_0)
  return (0);


 if (FUNC_0(VAR_2->pc)->flags.self_suspended != 0)
  return (1);

 switch (VAR_2->ep_type) {
 case 129:
  VAR_3 = ~(VAR_1->sc_host_intr_map |
      VAR_1->sc_host_intr_busy_map[0] |
      VAR_1->sc_host_intr_busy_map[1]);

  VAR_4 = FUNC_1(VAR_3) - 1;
  if (VAR_4 < 0 || VAR_4 > 31)
   break;
  VAR_1->sc_host_intr_map |= (1U << VAR_4);
  VAR_2->channel = 32 + VAR_4;
  return (0);
 case 128:
  VAR_3 = ~(VAR_1->sc_host_isoc_map |
      VAR_1->sc_host_isoc_busy_map[0] |
      VAR_1->sc_host_isoc_busy_map[1]);

  VAR_4 = FUNC_1(VAR_3) - 1;
  if (VAR_4 < 0 || VAR_4 > 31)
   break;
  VAR_1->sc_host_isoc_map |= (1U << VAR_4);
  VAR_2->channel = VAR_4;
  return (0);
 default:
  VAR_3 = ~(VAR_1->sc_host_async_map |
      VAR_1->sc_host_async_busy_map[0] |
      VAR_1->sc_host_async_busy_map[1]);

  VAR_4 = FUNC_1(VAR_3) - 1;
  if (VAR_4 < 0 || VAR_4 > 31)
   break;
  VAR_1->sc_host_async_map |= (1U << VAR_4);
  VAR_2->channel = 64 + VAR_4;
  return (0);
 }
 return (1);
}
