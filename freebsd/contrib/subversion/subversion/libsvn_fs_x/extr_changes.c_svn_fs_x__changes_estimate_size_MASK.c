
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* changes; int * builder; } ;
typedef TYPE_2__ svn_fs_x__changes_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_4__ {int nelts; } ;


 scalar_t__ FUNC_0 (int *) ;

apr_size_t
FUNC_1(const svn_fs_x__changes_t *VAR_0)
{

  if (VAR_0->builder == ((void*)0))
    return 0;




  return FUNC_0(VAR_0->builder)
       + VAR_0->changes->nelts * 10
       + 100;
}
