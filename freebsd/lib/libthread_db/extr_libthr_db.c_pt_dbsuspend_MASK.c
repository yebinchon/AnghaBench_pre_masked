
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int th_tid; TYPE_2__* th_ta; } ;
typedef TYPE_1__ td_thrhandle_t ;
struct TYPE_6__ {int ph; } ;
typedef TYPE_2__ td_thragent_t ;
typedef int td_err_e ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__ const*) ;

__attribute__((used)) static td_err_e
FUNC_5(const td_thrhandle_t *VAR_0, int VAR_1)
{
 const td_thragent_t *VAR_2 = VAR_0->th_ta;
 int VAR_3;

 FUNC_1();

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3)
  return (VAR_3);

 if (VAR_1)
  VAR_3 = FUNC_3(VAR_2->ph, VAR_0->th_tid);
 else
  VAR_3 = FUNC_2(VAR_2->ph, VAR_0->th_tid);
 return (FUNC_0(VAR_3));
}
