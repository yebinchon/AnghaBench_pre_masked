
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct query_params {int dummy; } ;
struct TYPE_3__ {int * pkey_entry; } ;
struct TYPE_4__ {int port_num; int block_num; int lid; TYPE_1__ pkey_tbl; } ;
typedef TYPE_2__ ib_pkey_table_record_t ;
typedef int ib_net16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct query_params *VAR_1)
{
 ib_pkey_table_record_t *VAR_2 = VAR_0;
 ib_net16_t *VAR_3 = VAR_2->pkey_tbl.pkey_entry;
 int VAR_4;
 FUNC_1("PKeyTableRecord dump:\n"
        "\t\tLID........................%u\n"
        "\t\tPort.......................%u\n"
        "\t\tBlock......................%u\n"
        "\t\tPKey Table:\n",
        FUNC_0(VAR_2->lid), VAR_2->port_num, VAR_2->block_num);
 for (VAR_4 = 0; VAR_4 < 32; VAR_4 += 8)
  FUNC_1("\t\t0x%04x 0x%04x 0x%04x 0x%04x"
         " 0x%04x 0x%04x 0x%04x 0x%04x\n",
         FUNC_0(VAR_3[VAR_4 + 0]), FUNC_0(VAR_3[VAR_4 + 1]),
         FUNC_0(VAR_3[VAR_4 + 2]), FUNC_0(VAR_3[VAR_4 + 3]),
         FUNC_0(VAR_3[VAR_4 + 4]), FUNC_0(VAR_3[VAR_4 + 5]),
         FUNC_0(VAR_3[VAR_4 + 6]), FUNC_0(VAR_3[VAR_4 + 7]));
 FUNC_1("\n");
}
