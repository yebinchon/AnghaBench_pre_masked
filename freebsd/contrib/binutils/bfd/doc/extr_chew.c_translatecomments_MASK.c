
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_type ;


 char FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5 ()
{
  unsigned int VAR_2 = 0;
  string_type VAR_3;
  FUNC_3 (&VAR_3);

  while (FUNC_0 (VAR_1, VAR_2))
    {
      if (FUNC_0 (VAR_1, VAR_2) == '{' && FUNC_0 (VAR_1, VAR_2 + 1) == '*')
 {
   FUNC_2 (&VAR_3, "/*");
   VAR_2 += 2;
 }
      else if (FUNC_0 (VAR_1, VAR_2) == '*' && FUNC_0 (VAR_1, VAR_2 + 1) == '}')
 {
   FUNC_2 (&VAR_3, "*/");
   VAR_2 += 2;
 }
      else
 {
   FUNC_1 (&VAR_3, FUNC_0 (VAR_1, VAR_2));
   VAR_2++;
 }
    }

  FUNC_4 (VAR_1, &VAR_3);

  VAR_0++;
}
