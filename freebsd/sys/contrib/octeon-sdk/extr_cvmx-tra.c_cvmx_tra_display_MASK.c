
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {void* u64; } ;
typedef TYPE_3__ cvmx_trax_ctl_t ;
struct TYPE_11__ {scalar_t__ valid; } ;
struct TYPE_10__ {scalar_t__ valid; } ;
struct TYPE_13__ {TYPE_2__ cmn2; TYPE_1__ cmn; } ;
typedef TYPE_4__ cvmx_tra_data_t ;
typedef TYPE_3__ cvmx_tra_ctl_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__,TYPE_4__) ;
 TYPE_4__ FUNC_4 () ;
 TYPE_4__ FUNC_5 (int) ;

void FUNC_6(void)
{
    int VAR_5 = 0;


    if (VAR_0 > 1)
    {
        cvmx_trax_ctl_t VAR_6;
        cvmx_tra_data_t VAR_7[4];
        int VAR_8;
        do
        {
            VAR_5 = 0;
            for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
                VAR_7[VAR_8] = FUNC_5(VAR_8);

            for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            {
                VAR_6.u64 = FUNC_2(FUNC_0(VAR_8));

                if (VAR_7[VAR_8].cmn2.valid)
                {
                    VAR_4 = VAR_8;
                    FUNC_3(VAR_6, VAR_7[VAR_8]);
                    VAR_5 = 1;
                }
            }
        } while (VAR_5);
    }
    else
    {
        cvmx_tra_ctl_t VAR_9;
        cvmx_tra_data_t VAR_10;

        VAR_9.u64 = FUNC_2(VAR_1);

        do
        {
            VAR_10 = FUNC_4();
            if ((FUNC_1(VAR_2) || FUNC_1(VAR_3)) && VAR_10.cmn.valid)
                VAR_5 = 1;
            else if (VAR_10.cmn2.valid)
                VAR_5 = 1;
            else
                VAR_5 = 0;

            if (VAR_5)
                FUNC_3(VAR_9, VAR_10);

        } while (VAR_5);
    }
}
