
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* dd_pool; } ;
typedef TYPE_3__ dsl_dir_t ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__ dd_origin_obj; } ;
struct TYPE_8__ {TYPE_1__* dp_origin_snap; } ;
struct TYPE_7__ {scalar_t__ ds_object; } ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;

boolean_t
FUNC_1(dsl_dir_t *VAR_0)
{
 return (FUNC_0(VAR_0)->dd_origin_obj &&
     (VAR_0->dd_pool->dp_origin_snap == ((void*)0) ||
     FUNC_0(VAR_0)->dd_origin_obj !=
     VAR_0->dd_pool->dp_origin_snap->ds_object));
}
