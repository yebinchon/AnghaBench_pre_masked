
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ es_fid; scalar_t__ es_untagged_ports; scalar_t__ es_member_ports; scalar_t__ es_vid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;



__attribute__((used)) static int
FUNC_0(device_t VAR_0, etherswitch_vlangroup_t *VAR_1)
{


 VAR_1->es_vid = 0;
 VAR_1->es_member_ports = 0;
 VAR_1->es_untagged_ports = 0;
 VAR_1->es_fid = 0;
 return (0);
}
