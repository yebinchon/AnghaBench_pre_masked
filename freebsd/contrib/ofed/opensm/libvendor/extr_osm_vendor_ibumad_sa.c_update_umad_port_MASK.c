
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sm_lid; int base_lid; } ;
typedef TYPE_2__ umad_port_t ;
struct TYPE_7__ {int sm_lid; int base_lid; int portnum; int ca_name; } ;
struct TYPE_9__ {TYPE_1__ umad_port; } ;
typedef TYPE_3__ osm_vendor_t ;
typedef int ib_api_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ib_api_status_t FUNC_2(osm_vendor_t * VAR_2)
{
 umad_port_t VAR_3;
 if (FUNC_0(VAR_2->umad_port.ca_name,
     VAR_2->umad_port.portnum, &VAR_3) < 0)
  return VAR_0;
 VAR_2->umad_port.base_lid = VAR_3.base_lid;
 VAR_2->umad_port.sm_lid = VAR_3.sm_lid;
 FUNC_1(&VAR_3);
 return VAR_1;
}
