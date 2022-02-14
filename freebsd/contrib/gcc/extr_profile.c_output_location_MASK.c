
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gcov_position_t ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_5 (char const *VAR_1, int VAR_2,
   gcov_position_t *VAR_3, basic_block VAR_4)
{
  static char const *VAR_5;
  static int VAR_6;
  bool VAR_7, VAR_8;

  if (!VAR_1)
    {
      VAR_5 = ((void*)0);
      VAR_6 = -1;
      return;
    }

  VAR_7 = !VAR_5 || FUNC_4 (VAR_1, VAR_5);
  VAR_8 = VAR_6 != VAR_2;

  if (VAR_7 || VAR_8)
    {
      if (!*VAR_3)
 {
   *VAR_3 = FUNC_2 (VAR_0);
   FUNC_3 (FUNC_0 (VAR_4));
   VAR_7 = VAR_8=1;
 }



      if (VAR_7)
 {
   VAR_5 = VAR_1;
   FUNC_3 (0);
   FUNC_1 (VAR_5);
 }
      if (VAR_8)
 {
   FUNC_3 (VAR_2);
   VAR_6 = VAR_2;
 }
     }
}
