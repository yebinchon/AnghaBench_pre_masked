
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int es_vlangroup; int es_vid; int es_untagged_ports; int es_member_ports; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
struct TYPE_7__ {int num_ports; int dev; } ;
typedef TYPE_2__ e6000sw_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_2(e6000sw_softc_t *VAR_2, etherswitch_vlangroup_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_3->es_vlangroup;
 if (VAR_4 > VAR_2->num_ports)
  return (VAR_0);

 if (VAR_3->es_member_ports != VAR_3->es_untagged_ports) {
  FUNC_0(VAR_2->dev, "Tagged ports not supported.\n");
  return (VAR_0);
 }

 FUNC_1(VAR_2, VAR_4, 0, VAR_3->es_untagged_ports);
 VAR_3->es_vid = VAR_4 | VAR_1;

 return (0);
}
