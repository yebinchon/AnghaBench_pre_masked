
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* hx509_context ;
struct TYPE_6__ {struct TYPE_6__* querystat; int et_list; scalar_t__ ks_num_ops; struct TYPE_6__* ks_ops; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4(hx509_context *VAR_0)
{
    FUNC_2(*VAR_0);
    if ((*VAR_0)->ks_ops) {
 FUNC_0((*VAR_0)->ks_ops);
 (*VAR_0)->ks_ops = ((void*)0);
    }
    (*VAR_0)->ks_num_ops = 0;
    FUNC_1 ((*VAR_0)->et_list);
    if ((*VAR_0)->querystat)
 FUNC_0((*VAR_0)->querystat);
    FUNC_3(*VAR_0, 0, sizeof(**VAR_0));
    FUNC_0(*VAR_0);
    *VAR_0 = ((void*)0);
}
