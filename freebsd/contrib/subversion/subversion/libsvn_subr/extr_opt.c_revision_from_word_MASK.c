
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(svn_opt_revision_t *VAR_4, const char *VAR_5)
{
  if (FUNC_0(VAR_5, "head") == 0)
    {
      VAR_4->kind = VAR_2;
    }
  else if (FUNC_0(VAR_5, "prev") == 0)
    {
      VAR_4->kind = VAR_3;
    }
  else if (FUNC_0(VAR_5, "base") == 0)
    {
      VAR_4->kind = VAR_0;
    }
  else if (FUNC_0(VAR_5, "committed") == 0)
    {
      VAR_4->kind = VAR_1;
    }
  else
    return -1;

  return 0;
}
