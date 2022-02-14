
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ddpa_clone; int * origin_origin; int origin_snaps; int clone_snaps; int shared_snaps; } ;
typedef TYPE_1__ dsl_dataset_promote_arg_t ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,void*) ;

__attribute__((used)) static void
FUNC_2(dsl_dataset_promote_arg_t *VAR_0, void *VAR_1)
{
 FUNC_1(&VAR_0->shared_snaps, VAR_1);
 FUNC_1(&VAR_0->clone_snaps, VAR_1);
 FUNC_1(&VAR_0->origin_snaps, VAR_1);
 if (VAR_0->origin_origin != ((void*)0))
  FUNC_0(VAR_0->origin_origin, VAR_1);
 FUNC_0(VAR_0->ddpa_clone, VAR_1);
}
