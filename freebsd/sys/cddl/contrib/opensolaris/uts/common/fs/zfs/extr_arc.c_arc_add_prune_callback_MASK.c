
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_refcnt; int p_node; void* p_private; int * p_pfunc; } ;
typedef TYPE_1__ arc_prune_t ;
typedef int arc_prune_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

arc_prune_t *
FUNC_7(arc_prune_func_t *VAR_3, void *VAR_4)
{
 arc_prune_t *VAR_5;

 VAR_5 = FUNC_0(sizeof (*VAR_5), VAR_0);
 VAR_5->p_pfunc = VAR_3;
 VAR_5->p_private = VAR_4;
 FUNC_2(&VAR_5->p_node);
 FUNC_6(&VAR_5->p_refcnt);

 FUNC_3(&VAR_2);
 FUNC_5(&VAR_5->p_refcnt, &VAR_1);
 FUNC_1(&VAR_1, VAR_5);
 FUNC_4(&VAR_2);

 return (VAR_5);
}
