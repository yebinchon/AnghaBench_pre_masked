
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_nand_status_t ;
struct TYPE_2__ {int page_size; int oob_size; int pages_per_block; int blocks; int onfi_timing; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

cvmx_nand_status_t FUNC_1(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6 || VAR_7 > 5)
        FUNC_0(VAR_0);

    VAR_2.page_size = VAR_3;
    VAR_2.oob_size = VAR_4;
    VAR_2.pages_per_block = VAR_5;
    VAR_2.blocks = VAR_6;
    VAR_2.onfi_timing = VAR_7;

    FUNC_0(VAR_1);
}
