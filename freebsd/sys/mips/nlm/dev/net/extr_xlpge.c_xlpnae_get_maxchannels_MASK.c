
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_xlpnae_softc {int max_ports; TYPE_1__* portcfg; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ num_channels; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nlm_xlpnae_softc *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_ports; VAR_3++) {
  if (VAR_1->portcfg[VAR_3].type == VAR_0)
   continue;
  VAR_2 += VAR_1->portcfg[VAR_3].num_channels;
 }

 return (VAR_2);
}
