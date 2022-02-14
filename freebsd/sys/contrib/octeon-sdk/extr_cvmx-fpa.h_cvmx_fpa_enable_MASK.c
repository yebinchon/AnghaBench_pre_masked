
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enb; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_fpa_ctl_status_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(void)
{
    cvmx_fpa_ctl_status_t VAR_1;

    VAR_1.u64 = FUNC_0(VAR_0);
    if (VAR_1.s.enb)
    {





 return;
    }

    VAR_1.u64 = 0;
    VAR_1.s.enb = 1;
    FUNC_1(VAR_0, VAR_1.u64);
}
