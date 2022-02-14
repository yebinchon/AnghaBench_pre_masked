
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rst_done; int ipd_en; int len_m8; } ;
struct TYPE_4__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_ipd_ctl_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static inline void FUNC_4(void)
{
    cvmx_ipd_ctl_status_t VAR_3;

    VAR_3.u64 = FUNC_2(VAR_0);




    if (FUNC_0(VAR_2))
        while(VAR_3.s.rst_done != 0)
            VAR_3.u64 = FUNC_2(VAR_0);

    if (VAR_3.s.ipd_en)
        FUNC_1("Warning: Enabling IPD when IPD already enabled.\n");

    VAR_3.s.ipd_en = 1;






    FUNC_3(VAR_0, VAR_3.u64);
}
