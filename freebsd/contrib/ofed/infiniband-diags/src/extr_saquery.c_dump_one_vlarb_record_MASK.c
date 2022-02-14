
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct query_params {int dummy; } ;
struct TYPE_4__ {TYPE_3__* vl_entry; } ;
struct TYPE_5__ {int port_num; int block_num; int lid; TYPE_1__ vl_arb_tbl; } ;
typedef TYPE_2__ ib_vl_arb_table_record_t ;
struct TYPE_6__ {int vl; int weight; } ;
typedef TYPE_3__ ib_vl_arb_element_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int,...) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct query_params *VAR_1)
{
 ib_vl_arb_table_record_t *VAR_2 = VAR_0;
 ib_vl_arb_element_t *VAR_3 = VAR_2->vl_arb_tbl.vl_entry;
 int VAR_4;
 FUNC_1("VLArbTableRecord dump:\n"
        "\t\tLID........................%u\n"
        "\t\tPort.......................%u\n"
        "\t\tBlock......................%u\n",
        FUNC_0(VAR_2->lid), VAR_2->port_num, VAR_2->block_num);
 for (VAR_4 = 0; VAR_4 < 32; VAR_4 += 16)
  FUNC_1("\t\tVL    :%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|"
         "%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|\n"
         "\t\tWeight:%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|"
         "%2u|%2u|%2u|%2u|%2u|%2u|%2u|%2u|\n",
         VAR_3[VAR_4 + 0].vl, VAR_3[VAR_4 + 1].vl, VAR_3[VAR_4 + 2].vl, VAR_3[VAR_4 + 3].vl,
         VAR_3[VAR_4 + 4].vl, VAR_3[VAR_4 + 5].vl, VAR_3[VAR_4 + 6].vl, VAR_3[VAR_4 + 7].vl,
         VAR_3[VAR_4 + 8].vl, VAR_3[VAR_4 + 9].vl, VAR_3[VAR_4 + 10].vl, VAR_3[VAR_4 + 11].vl,
         VAR_3[VAR_4 + 12].vl, VAR_3[VAR_4 + 13].vl, VAR_3[VAR_4 + 14].vl, VAR_3[VAR_4 + 15].vl,
         VAR_3[VAR_4 + 0].weight, VAR_3[VAR_4 + 1].weight, VAR_3[VAR_4 + 2].weight,
         VAR_3[VAR_4 + 3].weight, VAR_3[VAR_4 + 4].weight, VAR_3[VAR_4 + 5].weight,
         VAR_3[VAR_4 + 6].weight, VAR_3[VAR_4 + 7].weight, VAR_3[VAR_4 + 8].weight,
         VAR_3[VAR_4 + 9].weight, VAR_3[VAR_4 + 10].weight, VAR_3[VAR_4 + 11].weight,
         VAR_3[VAR_4 + 12].weight, VAR_3[VAR_4 + 13].weight, VAR_3[VAR_4 + 14].weight,
         VAR_3[VAR_4 + 15].weight);
}
