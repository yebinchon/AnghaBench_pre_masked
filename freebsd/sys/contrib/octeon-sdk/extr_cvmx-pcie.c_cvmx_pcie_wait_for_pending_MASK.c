
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int p1_fcnt; int p1_ucnt; int p0_fcnt; int p0_ucnt; } ;
struct TYPE_7__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_3__ cvmx_sli_data_out_cnt_t ;
struct TYPE_5__ {int p1_fcnt; int p1_ucnt; int p0_fcnt; int p0_ucnt; } ;
struct TYPE_8__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_4__ cvmx_npei_data_out_cnt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(int VAR_3)
{
    if (FUNC_1(VAR_2))
    {
        cvmx_npei_data_out_cnt_t VAR_4;
        int VAR_5;
        int VAR_6;
        int VAR_7;



        VAR_4.u64 = FUNC_0(VAR_0);
        if (VAR_3)
        {
            if (!VAR_4.s.p1_fcnt)
                return;
            VAR_5 = VAR_4.s.p1_ucnt;
            VAR_6 = (VAR_5 + VAR_4.s.p1_fcnt-1) & 0xffff;
        }
        else
        {
            if (!VAR_4.s.p0_fcnt)
                return;
            VAR_5 = VAR_4.s.p0_ucnt;
            VAR_6 = (VAR_5 + VAR_4.s.p0_fcnt-1) & 0xffff;
        }

        while (1)
        {
            VAR_4.u64 = FUNC_0(VAR_0);
            VAR_7 = (VAR_3) ? VAR_4.s.p1_ucnt : VAR_4.s.p0_ucnt;
            if (VAR_5<=VAR_6)
            {
                if ((VAR_7<VAR_5) || (VAR_7>VAR_6))
                    return;
            }
            else
            {
                if ((VAR_7>VAR_6) && (VAR_7<VAR_5))
                    return;
            }
        }
    }
    else
    {
        cvmx_sli_data_out_cnt_t VAR_8;
        int VAR_9;
        int VAR_10;
        int VAR_11;

        VAR_8.u64 = FUNC_0(VAR_1);
        if (VAR_3)
        {
            if (!VAR_8.s.p1_fcnt)
                return;
            VAR_9 = VAR_8.s.p1_ucnt;
            VAR_10 = (VAR_9 + VAR_8.s.p1_fcnt-1) & 0xffff;
        }
        else
        {
            if (!VAR_8.s.p0_fcnt)
                return;
            VAR_9 = VAR_8.s.p0_ucnt;
            VAR_10 = (VAR_9 + VAR_8.s.p0_fcnt-1) & 0xffff;
        }

        while (1)
        {
            VAR_8.u64 = FUNC_0(VAR_1);
            VAR_11 = (VAR_3) ? VAR_8.s.p1_ucnt : VAR_8.s.p0_ucnt;
            if (VAR_9<=VAR_10)
            {
                if ((VAR_11<VAR_9) || (VAR_11>VAR_10))
                    return;
            }
            else
            {
                if ((VAR_11>VAR_10) && (VAR_11<VAR_9))
                    return;
            }
        }
    }
}
