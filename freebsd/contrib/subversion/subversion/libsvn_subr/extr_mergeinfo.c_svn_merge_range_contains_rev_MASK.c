
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ svn_merge_range_t ;
typedef int svn_boolean_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

svn_boolean_t
FUNC_2(const svn_merge_range_t *VAR_0, svn_revnum_t VAR_1)
{
  FUNC_1(FUNC_0(VAR_0->start));
  FUNC_1(FUNC_0(VAR_0->end));
  FUNC_1(VAR_0->start != VAR_0->end);

  if (VAR_0->start < VAR_0->end)
    return VAR_1 > VAR_0->start && VAR_1 <= VAR_0->end;
  else
    return VAR_1 > VAR_0->end && VAR_1 <= VAR_0->start;
}
