
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_params {int dummy; } ;
typedef int ib_slvl_table_t ;
struct TYPE_2__ {int in_port_num; int out_port_num; int lid; int slvl_tbl; } ;
typedef TYPE_1__ ib_slvl_table_record_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct query_params *VAR_1)
{
 ib_slvl_table_record_t *VAR_2 = VAR_0;
 ib_slvl_table_t *VAR_3 = &VAR_2->slvl_tbl;
 FUNC_2("SL2VLTableRecord dump:\n"
        "\t\tLID........................%u\n"
        "\t\tInPort.....................%u\n"
        "\t\tOutPort....................%u\n"
        "\t\tSL: 0| 1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|\n"
        "\t\tVL:%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u"
        "|%2u|%2u|%2u|\n",
        FUNC_0(VAR_2->lid), VAR_2->in_port_num, VAR_2->out_port_num,
        FUNC_1(VAR_3, 0), FUNC_1(VAR_3, 1),
        FUNC_1(VAR_3, 2), FUNC_1(VAR_3, 3),
        FUNC_1(VAR_3, 4), FUNC_1(VAR_3, 5),
        FUNC_1(VAR_3, 6), FUNC_1(VAR_3, 7),
        FUNC_1(VAR_3, 8), FUNC_1(VAR_3, 9),
        FUNC_1(VAR_3, 10), FUNC_1(VAR_3, 11),
        FUNC_1(VAR_3, 12), FUNC_1(VAR_3, 13),
        FUNC_1(VAR_3, 14), FUNC_1(VAR_3, 15));
}
