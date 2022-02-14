
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ti_siginfo; } ;
typedef TYPE_1__ td_thrinfo_t ;
typedef int td_thrhandle_t ;
typedef int td_old_thrinfo_t ;
typedef int td_err_e ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int const*,int *) ;

__attribute__((used)) static td_err_e
FUNC_2(const td_thrhandle_t *VAR_0, td_thrinfo_t *VAR_1)
{
 td_err_e VAR_2;

 VAR_2 = FUNC_1(VAR_0, (td_old_thrinfo_t *)VAR_1);
 FUNC_0(&VAR_1->ti_siginfo, sizeof(VAR_1->ti_siginfo));
 return (VAR_2);
}
