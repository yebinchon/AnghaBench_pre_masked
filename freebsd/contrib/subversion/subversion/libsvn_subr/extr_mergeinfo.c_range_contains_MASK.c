
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ start; scalar_t__ end; int inheritable; } ;
typedef TYPE_1__ svn_merge_range_t ;
typedef int svn_boolean_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const svn_merge_range_t *VAR_0, const svn_merge_range_t *VAR_1,
               svn_boolean_t VAR_2)
{
  FUNC_1(FUNC_0(VAR_0));
  FUNC_1(FUNC_0(VAR_1));

  return (VAR_0->start <= VAR_1->start) && (VAR_1->end <= VAR_0->end)
    && (!VAR_2
        || (!(VAR_0->inheritable) == !(VAR_1->inheritable)));
}
