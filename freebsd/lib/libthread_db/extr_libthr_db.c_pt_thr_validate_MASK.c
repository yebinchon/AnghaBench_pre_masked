
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int th_tid; int th_ta; } ;
typedef TYPE_1__ td_thrhandle_t ;
typedef int td_err_e ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static td_err_e
FUNC_2(const td_thrhandle_t *VAR_0)
{
 td_thrhandle_t VAR_1;
 int VAR_2;

 FUNC_0();

 VAR_2 = FUNC_1(VAR_0->th_ta, VAR_0->th_tid, &VAR_1);
 return (VAR_2);
}
