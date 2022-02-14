
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_6__ {int format_num; int first_arg_num; int format_type; } ;
typedef TYPE_2__ function_format_info ;
struct TYPE_5__ {int (* getdecls ) () ;} ;
struct TYPE_7__ {TYPE_1__ decls; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,int ) ;

__attribute__((used)) static bool
FUNC_11 (tree VAR_4, function_format_info *VAR_5, int VAR_6)
{
  tree VAR_7 = FUNC_3 (VAR_4);
  tree VAR_8 = FUNC_3 (FUNC_1 (VAR_4));
  tree VAR_9
    = FUNC_3 (FUNC_1 (FUNC_1 (VAR_4)));

  if (FUNC_2 (VAR_7) != VAR_0)
    {
      FUNC_6 (!VAR_6);
      FUNC_5 ("%Junrecognized format specifier", VAR_3.decls.getdecls ());
      return 0;
    }
  else
    {
      const char *VAR_10 = FUNC_0 (VAR_7);

      VAR_5->format_type = FUNC_4 (VAR_10);

      if (VAR_5->format_type == VAR_2)
 {
   FUNC_6 (!VAR_6);
   FUNC_10 (VAR_1, "%qE is an unrecognized format function type",
     VAR_7);
   return 0;
 }
    }

  if (!FUNC_7 (VAR_8, &VAR_5->format_num, VAR_6))
    {
      FUNC_5 ("format string has invalid operand number");
      return 0;
    }

  if (!FUNC_7 (VAR_9, &VAR_5->first_arg_num, VAR_6))
    {
      FUNC_5 ("%<...%> has invalid operand number");
      return 0;
    }

  if (VAR_5->first_arg_num != 0 && VAR_5->first_arg_num <= VAR_5->format_num)
    {
      FUNC_6 (!VAR_6);
      FUNC_5 ("format string argument follows the args to be formatted");
      return 0;
    }

  return 1;
}
