
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ priority; TYPE_2__* membuffer; } ;
typedef TYPE_3__ svn_membuffer_cache_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ max_entry_size; TYPE_1__ l2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(void *VAR_2, apr_size_t VAR_3)
{




  svn_membuffer_cache_t *VAR_4 = VAR_2;
  return VAR_4->priority > VAR_1
       ? VAR_4->membuffer->l2.size >= VAR_3 && VAR_0 >= VAR_3
       : VAR_3 <= VAR_4->membuffer->max_entry_size;
}
