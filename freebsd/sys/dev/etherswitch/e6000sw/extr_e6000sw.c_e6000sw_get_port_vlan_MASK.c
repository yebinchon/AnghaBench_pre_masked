
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int es_vlangroup; int es_vid; int es_untagged_ports; int es_member_ports; int es_fid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
struct TYPE_10__ {int num_ports; } ;
typedef TYPE_2__ e6000sw_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(e6000sw_softc_t *VAR_7, etherswitch_vlangroup_t *VAR_8)
{
 uint32_t VAR_9, VAR_10;

 VAR_9 = VAR_8->es_vlangroup;
 if (VAR_9 > VAR_7->num_ports)
  return (VAR_0);

 if (!FUNC_2(VAR_7, VAR_9)) {
  VAR_8->es_vid = VAR_9;
  return (0);
 }

 VAR_10 = FUNC_3(VAR_7, FUNC_1(VAR_7, VAR_9), VAR_4);
 VAR_8->es_untagged_ports = VAR_8->es_member_ports = VAR_10 & FUNC_0(VAR_7);
 VAR_8->es_vid = VAR_9 | VAR_1;
 VAR_8->es_fid = (VAR_10 & VAR_6) >> VAR_5;
 VAR_10 = FUNC_3(VAR_7, FUNC_1(VAR_7, VAR_9), VAR_2);
 VAR_8->es_fid |= (VAR_10 & VAR_3) << 4;

 return (0);
}
