
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int es_vid; size_t es_vlangroup; int es_member_ports; int es_untagged_ports; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
struct TYPE_8__ {int* vlans; int ports_mask; } ;
typedef TYPE_2__ e6000sw_softc_t ;
struct TYPE_9__ {int es_nvlangroups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int,int,int,int) ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(e6000sw_softc_t *VAR_4, etherswitch_vlangroup_t *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_5->es_vid & VAR_1;


 if (VAR_7 == 0) {
  FUNC_0(VAR_4, VAR_2,
      VAR_4->vlans[VAR_5->es_vlangroup], 0, 0, 0);
  VAR_4->vlans[VAR_5->es_vlangroup] = 0;
  return (0);
 }


 for (VAR_6 = 0; VAR_6 < VAR_3.es_nvlangroups; VAR_6++)
  if (VAR_6 != VAR_5->es_vlangroup && VAR_7 == VAR_4->vlans[VAR_6])
   return (VAR_0);

 VAR_4->vlans[VAR_5->es_vlangroup] = VAR_7;
 FUNC_0(VAR_4, 0, VAR_7, VAR_5->es_vlangroup + 1,
     VAR_5->es_member_ports & VAR_4->ports_mask,
     VAR_5->es_untagged_ports & VAR_4->ports_mask);

 return (0);
}
