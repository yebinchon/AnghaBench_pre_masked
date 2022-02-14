
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int end; int start; } ;
typedef TYPE_1__ svn_merge_range_t ;



__attribute__((used)) static void
FUNC_0(svn_merge_range_t *VAR_0)
{
  svn_revnum_t VAR_1 = VAR_0->start;
  VAR_0->start = VAR_0->end;
  VAR_0->end = VAR_1;
}
