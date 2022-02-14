
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fr_byt; } ;
union cvmx_ndf_misc {TYPE_1__ s; int u64; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(void)
{
    union cvmx_ndf_misc VAR_1;
    FUNC_0();
    VAR_1.u64 = FUNC_2(VAR_0);
    FUNC_1((int)VAR_1.s.fr_byt);
}
