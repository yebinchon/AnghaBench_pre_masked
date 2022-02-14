
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nelts; scalar_t__ elts; } ;
typedef TYPE_1__ svn_rangelist_t ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ end; scalar_t__ inheritable; } ;
typedef TYPE_2__ svn_merge_range_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

svn_boolean_t
FUNC_0(const svn_rangelist_t *VAR_2)
{
  int VAR_3;
  svn_merge_range_t **VAR_4 = (svn_merge_range_t **)VAR_2->elts;


  for (VAR_3 = 0; VAR_3 < VAR_2->nelts; ++VAR_3)
    {
      if (VAR_4[VAR_3]->start >= VAR_4[VAR_3]->end)
        return VAR_0;
    }


  for (VAR_3 = 0; VAR_3 < VAR_2->nelts - 1; ++VAR_3)
    {
      if (VAR_4[VAR_3]->end > VAR_4[VAR_3 + 1]->start)
        return VAR_0;
      else if (VAR_4[VAR_3]->end == VAR_4[VAR_3+1]->start
               && VAR_4[VAR_3]->inheritable == VAR_4[VAR_3 + 1]->inheritable)
        {
          return VAR_0;
        }
    }

  return VAR_1;
}
