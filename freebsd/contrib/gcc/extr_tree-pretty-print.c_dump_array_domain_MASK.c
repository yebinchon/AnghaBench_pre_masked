
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int pretty_printer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (pretty_printer *VAR_0, tree VAR_1, int VAR_2, int VAR_3)
{
  FUNC_6 (VAR_0, '[');
  if (VAR_1)
    {
      tree VAR_4 = FUNC_2 (VAR_1);
      tree VAR_5 = FUNC_1 (VAR_1);

      if (VAR_4 && VAR_5
   && FUNC_5 (VAR_4)
   && FUNC_4 (VAR_5, 0))
 FUNC_8 (VAR_0, FUNC_0 (VAR_5) + 1);
      else
 {
   if (VAR_4)
     FUNC_3 (VAR_0, VAR_4, VAR_2, VAR_3, 0);
   FUNC_6 (VAR_0, ':');
   if (VAR_5)
     FUNC_3 (VAR_0, VAR_5, VAR_2, VAR_3, 0);
 }
    }
  else
    FUNC_7 (VAR_0, "<unknown>");
  FUNC_6 (VAR_0, ']');
}
