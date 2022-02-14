
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int len; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_ciu_wdogx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_1)
{
 cvmx_ciu_wdogx_t VAR_2;


 FUNC_2(FUNC_0(VAR_1), 1);
 VAR_2.u64 = 0;
 VAR_2.s.len = VAR_0;
 VAR_2.s.mode = 3;
 FUNC_2(FUNC_1(VAR_1), VAR_2.u64);
}
