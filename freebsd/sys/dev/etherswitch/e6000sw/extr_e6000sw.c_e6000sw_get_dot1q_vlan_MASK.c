
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int es_vid; size_t es_vlangroup; int es_untagged_ports; int es_member_ports; scalar_t__ es_fid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
struct TYPE_11__ {int* vlans; int num_ports; int dev; } ;
typedef TYPE_2__ e6000sw_softc_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(e6000sw_softc_t *VAR_16, etherswitch_vlangroup_t *VAR_17)
{
 int VAR_18, VAR_19;
 uint32_t VAR_20;

 VAR_17->es_fid = 0;
 VAR_17->es_vid = VAR_16->vlans[VAR_17->es_vlangroup];
 VAR_17->es_untagged_ports = VAR_17->es_member_ports = 0;
 if (VAR_17->es_vid == 0)
  return (0);

 if (FUNC_0(VAR_16, VAR_8, VAR_4)) {
  FUNC_3(VAR_16->dev, "VTU unit is busy, cannot access\n");
  return (VAR_0);
 }

 FUNC_5(VAR_16, VAR_3, VAR_13, VAR_17->es_vid - 1);

 VAR_20 = FUNC_4(VAR_16, VAR_3, VAR_8);
 VAR_20 &= ~VAR_9;
 VAR_20 |= VAR_7 | VAR_4;
 FUNC_5(VAR_16, VAR_3, VAR_8, VAR_20);
 if (FUNC_0(VAR_16, VAR_8, VAR_4)) {
  FUNC_3(VAR_16->dev, "Timeout while reading\n");
  return (VAR_0);
 }

 VAR_20 = FUNC_4(VAR_16, VAR_3, VAR_13);
 if (VAR_20 == VAR_14 || (VAR_20 & VAR_15) == 0)
  return (VAR_1);
 if ((VAR_20 & VAR_14) != VAR_17->es_vid)
  return (VAR_1);

 VAR_17->es_vid |= VAR_2;
 VAR_20 = FUNC_4(VAR_16, VAR_3, VAR_5);
 for (VAR_18 = 0; VAR_18 < VAR_16->num_ports; VAR_18++) {
  if (VAR_18 == FUNC_2(VAR_16))
   VAR_20 = FUNC_4(VAR_16, VAR_3, VAR_6);
  VAR_19 = (VAR_20 >> FUNC_1(VAR_16, VAR_18)) & VAR_10;
  if (VAR_19 == VAR_12) {
   VAR_17->es_untagged_ports |= (1 << VAR_18);
   VAR_17->es_member_ports |= (1 << VAR_18);
  } else if (VAR_19 == VAR_11)
   VAR_17->es_member_ports |= (1 << VAR_18);
 }

 return (0);
}
