
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_nand_status_t ;
struct TYPE_2__ {int tim_mult; int* tim_par; int* clen; int* alen; int* rdn; int* wrn; int page_size; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

cvmx_nand_status_t FUNC_2(int VAR_3, int VAR_4, int VAR_5[8], int VAR_6[4], int VAR_7[4], int VAR_8[4], int VAR_9[2])
{
    int VAR_10;
    FUNC_0();

    if ((VAR_3 < 0) || (VAR_3 > 7))
        FUNC_1(VAR_0);
    if (!VAR_2[VAR_3].page_size)
        FUNC_1(VAR_0);

    VAR_2[VAR_3].tim_mult = VAR_4;
    for (VAR_10=0;VAR_10<8;VAR_10++)
        VAR_2[VAR_3].tim_par[VAR_10] = VAR_5[VAR_10];
    for (VAR_10=0;VAR_10<4;VAR_10++)
        VAR_2[VAR_3].clen[VAR_10] = VAR_6[VAR_10];
    for (VAR_10=0;VAR_10<4;VAR_10++)
        VAR_2[VAR_3].alen[VAR_10] = VAR_7[VAR_10];
    for (VAR_10=0;VAR_10<4;VAR_10++)
        VAR_2[VAR_3].rdn[VAR_10] = VAR_8[VAR_10];
    for (VAR_10=0;VAR_10<2;VAR_10++)
        VAR_2[VAR_3].wrn[VAR_10] = VAR_9[VAR_10];

    FUNC_1(VAR_1);
}
