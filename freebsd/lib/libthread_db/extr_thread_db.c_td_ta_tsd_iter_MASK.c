
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ta_ops; } ;
typedef TYPE_2__ td_thragent_t ;
typedef int td_key_iter_f ;
typedef int td_err_e ;
struct TYPE_5__ {int (* to_ta_tsd_iter ) (TYPE_2__ const*,int *,void*) ;} ;


 int FUNC_0 (TYPE_2__ const*,int *,void*) ;

td_err_e
FUNC_1(const td_thragent_t *VAR_0, td_key_iter_f *VAR_1,
    void *VAR_2)
{
 return (VAR_0->ta_ops->to_ta_tsd_iter(VAR_0, VAR_1, VAR_2));
}
