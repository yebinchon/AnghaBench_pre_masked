
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* reps; TYPE_2__* ids; TYPE_1__* noderevs; int * builder; } ;
typedef TYPE_4__ svn_fs_x__noderevs_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_8__ {int nelts; } ;
struct TYPE_7__ {int nelts; } ;
struct TYPE_6__ {int nelts; } ;


 scalar_t__ FUNC_0 (int *) ;

apr_size_t
FUNC_1(const svn_fs_x__noderevs_t *VAR_0)
{

  if (VAR_0->builder == ((void*)0))
    return 0;







  return FUNC_0(VAR_0->builder)
       + VAR_0->noderevs->nelts * 16
       + VAR_0->ids->nelts * 4
       + VAR_0->reps->nelts * 40
       + 100;
}
