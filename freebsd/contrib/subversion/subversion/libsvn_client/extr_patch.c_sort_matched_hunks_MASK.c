
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_linenum_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {scalar_t__ matched_line; int hunk; int already_applied; int rejected; } ;
typedef TYPE_1__ hunk_info_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
  const hunk_info_t *VAR_2 = *((const hunk_info_t * const *)VAR_0);
  const hunk_info_t *VAR_3 = *((const hunk_info_t * const *)VAR_1);
  svn_boolean_t VAR_4 = !VAR_2->rejected && !VAR_2->already_applied;
  svn_boolean_t VAR_5 = !VAR_3->rejected && !VAR_3->already_applied;
  svn_linenum_t VAR_6, VAR_7;

  if (VAR_4 && VAR_5)
    {

      if (VAR_2->matched_line > VAR_3->matched_line)
        return 1;
      else if (VAR_2->matched_line == VAR_3->matched_line)
        return 0;
      else
        return -1;
    }
  else if (VAR_5)

    return 1;
  else if (VAR_4)

    return -1;


  VAR_6 = FUNC_0(VAR_2->hunk);
  VAR_7 = FUNC_0(VAR_3->hunk);
  if (VAR_6 > VAR_7)
    return 1;
  else if (VAR_6 == VAR_7)
    return 0;
  else
    return -1;
}
