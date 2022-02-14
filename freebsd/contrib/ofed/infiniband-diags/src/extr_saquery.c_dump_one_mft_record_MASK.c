
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_params {int dummy; } ;
struct TYPE_2__ {int * mft; int lid; int position_block_num; } ;
typedef TYPE_1__ ib_mft_record_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, struct query_params *VAR_4)
{
 ib_mft_record_t *VAR_5 = VAR_3;
 unsigned VAR_6 = FUNC_0(VAR_5->position_block_num) >> 12;
 unsigned VAR_7 = FUNC_0(VAR_5->position_block_num) &
     VAR_1;
 int VAR_8;
 unsigned VAR_9;

 FUNC_1("MFT Record dump:\n"
        "\t\tLID........................%u\n"
        "\t\tPosition...................%u\n"
        "\t\tBlock......................%u\n"
        "\t\tMFT:\n\t\tMLID\tPort Mask\n",
        FUNC_0(VAR_5->lid), VAR_6, VAR_7);
 VAR_9 = VAR_0 + VAR_7 * 32;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_1("\t\t0x%04x\t0x%04x\n",
         VAR_9 + VAR_8, FUNC_0(VAR_5->mft[VAR_8]));
 FUNC_1("\n");
}
