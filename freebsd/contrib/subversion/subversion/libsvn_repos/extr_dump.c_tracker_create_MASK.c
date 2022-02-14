
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int * pool; int revision; int stack; } ;
typedef TYPE_1__ path_tracker_t ;
typedef int path_tracker_entry_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;

__attribute__((used)) static path_tracker_t *
FUNC_2(svn_revnum_t VAR_0,
               apr_pool_t *VAR_1)
{
  path_tracker_t *VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2));
  VAR_2->stack = FUNC_0(VAR_1, 16, sizeof(path_tracker_entry_t));
  VAR_2->revision = VAR_0;
  VAR_2->pool = VAR_1;

  return VAR_2;
}
