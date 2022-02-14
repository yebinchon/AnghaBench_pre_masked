
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ svn_merge_range_t ;
typedef int svn_error_t ;
typedef int intersection_type_t ;


 TYPE_1__ const* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_2(const svn_merge_range_t *VAR_6,
                         const svn_merge_range_t *VAR_7,
                         intersection_type_t *VAR_8)
{
  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
  FUNC_1(FUNC_0(VAR_6));
  FUNC_1(FUNC_0(VAR_7));

  if (!(VAR_6->start <= VAR_7->end && VAR_7->start <= VAR_6->end))
    *VAR_8 = VAR_3;
  else if (VAR_6->start == VAR_7->start && VAR_6->end == VAR_7->end)
    *VAR_8 = VAR_2;
  else if (VAR_6->end == VAR_7->start || VAR_7->end == VAR_6->start)
    *VAR_8 = VAR_1;
  else if (VAR_6->start <= VAR_7->start && VAR_6->end >= VAR_7->end)
    *VAR_8 = VAR_5;
  else if (VAR_7->start <= VAR_6->start && VAR_7->end >= VAR_6->end)
    *VAR_8 = VAR_5;
  else
    *VAR_8 = VAR_4;

  return VAR_0;
}
