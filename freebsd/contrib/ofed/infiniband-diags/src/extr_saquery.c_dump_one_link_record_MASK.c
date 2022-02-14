
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_params {int dummy; } ;
struct TYPE_2__ {int from_port_num; int to_port_num; int to_lid; int from_lid; } ;
typedef TYPE_1__ ib_link_record_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct query_params *VAR_1)
{
 ib_link_record_t *VAR_2 = VAR_0;
 FUNC_1("LinkRecord dump:\n"
        "\t\tFromLID....................%u\n"
        "\t\tFromPort...................%u\n"
        "\t\tToPort.....................%u\n"
        "\t\tToLID......................%u\n",
        FUNC_0(VAR_2->from_lid), VAR_2->from_port_num,
        VAR_2->to_port_num, FUNC_0(VAR_2->to_lid));
}
