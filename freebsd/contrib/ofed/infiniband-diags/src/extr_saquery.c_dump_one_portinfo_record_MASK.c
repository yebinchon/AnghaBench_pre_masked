
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_params {int dummy; } ;
struct TYPE_2__ {int port_num; int options; int lid; int port_info; } ;
typedef TYPE_1__ ib_portinfo_record_t ;
typedef int ib_port_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct query_params *VAR_1)
{
 ib_portinfo_record_t *VAR_2 = VAR_0;
 ib_port_info_t *VAR_3 = &VAR_2->port_info;

 FUNC_2("PortInfoRecord dump:\n"
        "\tRID\n"
        "\t\tEndPortLid..............%u\n"
        "\t\tPortNum.................%u\n"
        "\t\tOptions.................0x%x\n"
        "\tPortInfo dump:\n",
        FUNC_0(VAR_2->lid), VAR_2->port_num, VAR_2->options);
 FUNC_1(VAR_3, 2);
}
