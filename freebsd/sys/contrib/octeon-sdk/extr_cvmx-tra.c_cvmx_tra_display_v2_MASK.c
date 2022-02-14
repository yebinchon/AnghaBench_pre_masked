
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int u64; } ;
typedef TYPE_2__ cvmx_trax_ctl_t ;
struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_9__ {TYPE_1__ cmn2; } ;
typedef TYPE_3__ cvmx_tra_data_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__,TYPE_3__) ;
 TYPE_3__ FUNC_3 (int) ;

void FUNC_4(int VAR_1)
{
    int VAR_2 = 0;

    cvmx_trax_ctl_t VAR_3;
    cvmx_tra_data_t VAR_4;

    VAR_2 = 0;
    VAR_3.u64 = FUNC_1(FUNC_0(VAR_1));

    do
    {
        VAR_4 = FUNC_3(VAR_1);
        if (VAR_4.cmn2.valid)
        {
            VAR_0 = VAR_1;
            FUNC_2(VAR_3, VAR_4);
            VAR_2 = 1;
        }
    } while (VAR_2);
}
