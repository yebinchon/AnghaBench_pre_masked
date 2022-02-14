
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct query_params {int dummy; } ;
struct TYPE_4__ {int capability_mask; int master_sm_base_lid; int base_lid; } ;
struct TYPE_3__ {int port_num; int lid; TYPE_2__ port_info; } ;
typedef TYPE_1__ ib_portinfo_record_t ;
typedef TYPE_2__ ib_port_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct query_params *VAR_1)
{
 ib_portinfo_record_t *VAR_2 = VAR_0;
 const ib_port_info_t *const VAR_3 = &VAR_2->port_info;

 FUNC_2("PortInfoRecord dump:\n"
        "\t\tEndPortLid..............%u\n"
        "\t\tPortNum.................%u\n"
        "\t\tbase_lid................%u\n"
        "\t\tmaster_sm_base_lid......%u\n"
        "\t\tcapability_mask.........0x%X\n",
        FUNC_0(VAR_2->lid), VAR_2->port_num,
        FUNC_0(VAR_3->base_lid), FUNC_0(VAR_3->master_sm_base_lid),
        FUNC_1(VAR_3->capability_mask));
}
