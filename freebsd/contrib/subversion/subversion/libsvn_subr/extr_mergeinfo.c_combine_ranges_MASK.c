
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ start; scalar_t__ end; scalar_t__ inheritable; } ;
typedef TYPE_1__ svn_merge_range_t ;
typedef scalar_t__ svn_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_merge_range_t *VAR_2,
               const svn_merge_range_t *VAR_3,
               const svn_merge_range_t *VAR_4,
               svn_boolean_t VAR_5)
{
  if (VAR_3->start <= VAR_4->end && VAR_4->start <= VAR_3->end)
    {
      if (!VAR_5
          || (VAR_5
              && (VAR_3->inheritable == VAR_4->inheritable)))
        {
          VAR_2->start = FUNC_1(VAR_3->start, VAR_4->start);
          VAR_2->end = FUNC_0(VAR_3->end, VAR_4->end);
          VAR_2->inheritable = (VAR_3->inheritable || VAR_4->inheritable);
          return VAR_1;
        }
    }
  return VAR_0;
}
