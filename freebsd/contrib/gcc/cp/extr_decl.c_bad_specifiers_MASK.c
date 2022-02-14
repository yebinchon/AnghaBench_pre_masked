
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_6 (tree VAR_1,
  const char* VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7)
{
  if (VAR_3)
    FUNC_5 ("%qD declared as a %<virtual%> %s", VAR_1, VAR_2);
  if (VAR_5)
    FUNC_5 ("%qD declared as an %<inline%> %s", VAR_1, VAR_2);
  if (VAR_4)
    FUNC_5 ("%<const%> and %<volatile%> function specifiers on "
    "%qD invalid in %s declaration",
    VAR_1, VAR_2);
  if (VAR_6)
    FUNC_5 ("%q+D declared as a friend", VAR_1);
  if (VAR_7
      && (FUNC_0 (VAR_1) == VAR_0
   || (!FUNC_2 (FUNC_1 (VAR_1))
       && !FUNC_4 (FUNC_1 (VAR_1))
       && !FUNC_3 (FUNC_1 (VAR_1)))))
    FUNC_5 ("%q+D declared with an exception specification", VAR_1);
}
