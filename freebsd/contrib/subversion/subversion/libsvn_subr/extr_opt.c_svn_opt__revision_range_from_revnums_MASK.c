
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* svn_revnum_t ;
struct TYPE_10__ {void* number; } ;
struct TYPE_11__ {TYPE_3__ value; void* kind; } ;
struct TYPE_8__ {void* number; } ;
struct TYPE_9__ {TYPE_1__ value; void* kind; } ;
struct TYPE_12__ {TYPE_4__ end; TYPE_2__ start; } ;
typedef TYPE_5__ svn_opt_revision_range_t ;
typedef int apr_pool_t ;


 TYPE_5__* FUNC_0 (int *,int) ;
 void* VAR_0 ;

svn_opt_revision_range_t *
FUNC_1(svn_revnum_t VAR_1,
                                     svn_revnum_t VAR_2,
                                     apr_pool_t *VAR_3)
{
  svn_opt_revision_range_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->start.kind = VAR_0;
  VAR_4->start.value.number = VAR_1;
  VAR_4->end.kind = VAR_0;
  VAR_4->end.value.number = VAR_2;
  return VAR_4;
}
