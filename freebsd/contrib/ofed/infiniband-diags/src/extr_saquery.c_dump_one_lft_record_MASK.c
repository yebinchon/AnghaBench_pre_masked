
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_params {int dummy; } ;
struct TYPE_2__ {int* lft; int lid; int block_num; } ;
typedef TYPE_1__ ib_lft_record_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct query_params *VAR_1)
{
 ib_lft_record_t *VAR_2 = VAR_0;
 unsigned VAR_3 = FUNC_0(VAR_2->block_num);
 int VAR_4;
 FUNC_1("LFT Record dump:\n"
        "\t\tLID........................%u\n"
        "\t\tBlock......................%u\n"
        "\t\tLFT:\n\t\tLID\tPort Number\n", FUNC_0(VAR_2->lid), VAR_3);
 for (VAR_4 = 0; VAR_4 < 64; VAR_4++)
  FUNC_1("\t\t%u\t%u\n", VAR_3 * 64 + VAR_4, VAR_2->lft[VAR_4]);
 FUNC_1("\n");
}
