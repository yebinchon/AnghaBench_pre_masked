
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ta_ops; } ;
typedef TYPE_2__ td_thragent_t ;
typedef int td_err_e ;
struct TYPE_6__ {int (* to_ta_delete ) (TYPE_2__*) ;} ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;

td_err_e
FUNC_2(td_thragent_t *VAR_2)
{
 FUNC_0(&VAR_0, VAR_2, VAR_1);
 return (VAR_2->ta_ops->to_ta_delete(VAR_2));
}
