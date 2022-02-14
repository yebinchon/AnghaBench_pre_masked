
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* th_ta; } ;
typedef TYPE_2__ td_thrhandle_t ;
struct TYPE_8__ {TYPE_1__* ta_ops; } ;
typedef TYPE_3__ td_thragent_t ;
typedef int td_err_e ;
struct TYPE_6__ {int (* to_thr_dbsuspend ) (TYPE_2__ const*) ;} ;


 int FUNC_0 (TYPE_2__ const*) ;

td_err_e
FUNC_1(const td_thrhandle_t *VAR_0)
{
 const td_thragent_t *VAR_1 = VAR_0->th_ta;
 return (VAR_1->ta_ops->to_thr_dbsuspend(VAR_0));
}
