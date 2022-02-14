
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ta_ops; } ;
typedef TYPE_2__ td_thragent_t ;
typedef int td_thr_state_e ;
typedef int td_thr_iter_f ;
typedef int td_err_e ;
typedef int sigset_t ;
struct TYPE_5__ {int (* to_ta_thr_iter ) (TYPE_2__ const*,int *,void*,int ,int,int *,unsigned int) ;} ;


 int FUNC_0 (TYPE_2__ const*,int *,void*,int ,int,int *,unsigned int) ;

td_err_e
FUNC_1(const td_thragent_t *VAR_0, td_thr_iter_f *VAR_1,
    void *VAR_2, td_thr_state_e VAR_3, int VAR_4, sigset_t *VAR_5,
    unsigned int VAR_6)
{
 return (VAR_0->ta_ops->to_ta_thr_iter(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6));
}
