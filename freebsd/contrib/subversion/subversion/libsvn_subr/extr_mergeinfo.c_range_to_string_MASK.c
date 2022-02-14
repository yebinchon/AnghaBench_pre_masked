
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int end; scalar_t__ inheritable; } ;
typedef TYPE_1__ svn_merge_range_t ;
typedef int apr_pool_t ;


 char* VAR_0 ;
 char* FUNC_0 (int *,char*,int,...) ;

__attribute__((used)) static char *
FUNC_1(const svn_merge_range_t *VAR_1,
                apr_pool_t *VAR_2)
{
  const char *VAR_3
    = VAR_1->inheritable ? "" : VAR_0;

  if (VAR_1->start == VAR_1->end - 1)
    return FUNC_0(VAR_2, "%ld%s", VAR_1->end, VAR_3);
  else if (VAR_1->start - 1 == VAR_1->end)
    return FUNC_0(VAR_2, "-%ld%s", VAR_1->start, VAR_3);
  else if (VAR_1->start < VAR_1->end)
    return FUNC_0(VAR_2, "%ld-%ld%s", VAR_1->start + 1, VAR_1->end, VAR_3);
  else
    return FUNC_0(VAR_2, "%ld-%ld%s", VAR_1->start, VAR_1->end + 1, VAR_3);
}
