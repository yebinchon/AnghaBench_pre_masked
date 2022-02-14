
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ipd_en; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_ipd_ctl_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(void)
{
    cvmx_ipd_ctl_status_t VAR_1;
    VAR_1.u64 = FUNC_0(VAR_0);
    VAR_1.s.ipd_en = 0;
    FUNC_1(VAR_0, VAR_1.u64);
}
