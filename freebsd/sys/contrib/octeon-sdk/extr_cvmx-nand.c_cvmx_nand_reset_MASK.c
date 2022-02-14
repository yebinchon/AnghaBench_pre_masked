
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_nand_status_t ;
struct TYPE_2__ {int page_size; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__* VAR_4 ;

cvmx_nand_status_t FUNC_6(int VAR_5)
{
    FUNC_0();
    FUNC_1("%d", VAR_5);

    if ((VAR_5 < 0) || (VAR_5 > 7))
        FUNC_2(VAR_0);
    if (!VAR_4[VAR_5].page_size)
        FUNC_2(VAR_0);

    if (FUNC_4(VAR_5, VAR_3, 0, 0, 0))
        FUNC_2(VAR_1);


    if (FUNC_5(VAR_5))
        FUNC_2(VAR_1);

    if (FUNC_3())
        FUNC_2(VAR_1);

    FUNC_2(VAR_2);
}
