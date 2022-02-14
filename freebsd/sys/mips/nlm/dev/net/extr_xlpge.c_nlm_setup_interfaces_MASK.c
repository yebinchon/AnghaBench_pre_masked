
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct nlm_xlpnae_softc {int max_ports; TYPE_1__* portcfg; scalar_t__ per_port_num_flows; int total_num_ports; int base; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ num_channels; int block; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nlm_xlpnae_softc*,int ,int,scalar_t__,scalar_t__,int,int) ;
 int FUNC_2 (struct nlm_xlpnae_softc*) ;

__attribute__((used)) static void
FUNC_3(struct nlm_xlpnae_softc *VAR_1)
{
 uint64_t VAR_2;
 uint32_t VAR_3, VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 VAR_3 = 0;
 VAR_4 = 0;
 VAR_5 = 0;
 VAR_2 = VAR_1->base;
 VAR_7 = FUNC_0(VAR_1->total_num_ports);

 VAR_8 = FUNC_2(VAR_1);

 VAR_6 = 0;
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_1->max_ports; VAR_9++) {
  if (VAR_1->portcfg[VAR_9].type == VAR_0)
   continue;
  FUNC_1(VAR_1, VAR_1->portcfg[VAR_9].block, VAR_9, VAR_5,
      VAR_7, VAR_8, VAR_10);
  VAR_5 += VAR_1->per_port_num_flows;
  VAR_10 += VAR_1->portcfg[VAR_9].num_channels;
 }
}
