
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_type ;


 char FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6 ()
{
  string_type VAR_2;
  unsigned int VAR_3 = 0;
  int VAR_4 = 0;

  FUNC_3 (&VAR_2);

  while (FUNC_0 (VAR_1, VAR_3))
    {
      if (FUNC_0 (VAR_1, VAR_3) == '\n'
   && (FUNC_0 (VAR_1, VAR_3 +1 ) == '.'
       || FUNC_0 (VAR_1, VAR_3 + 1) == '|'))
 {
   FUNC_2 (&VAR_2, "\n@example\n");
   do
     {
       VAR_3 += 2;

       while (FUNC_0 (VAR_1, VAR_3) && FUNC_0 (VAR_1, VAR_3) != '\n')
  {
    if (VAR_4 > 1)
      {


        if (FUNC_0 (VAR_1, VAR_3) == '{')
   ++VAR_4;
        else if (FUNC_0 (VAR_1, VAR_3) == '}')
   --VAR_4;
      }
    else if (VAR_4 != 0)
      {
        if (FUNC_0 (VAR_1, VAR_3) == '{')
   ++VAR_4;
        else if (!FUNC_4 ((unsigned char) FUNC_0 (VAR_1, VAR_3)))
   --VAR_4;
      }
    else if (FUNC_0 (VAR_1, VAR_3) == '@'
      && FUNC_4 ((unsigned char) FUNC_0 (VAR_1, VAR_3 + 1)))
      {
        ++VAR_4;
      }
    else if (FUNC_0 (VAR_1, VAR_3) == '{' && FUNC_0 (VAR_1, VAR_3 + 1) == '*')
      {
        FUNC_2 (&VAR_2, "/*");
        VAR_3 += 2;
        continue;
      }
    else if (FUNC_0 (VAR_1, VAR_3) == '*' && FUNC_0 (VAR_1, VAR_3 + 1) == '}')
      {
        FUNC_2 (&VAR_2, "*/");
        VAR_3 += 2;
        continue;
      }
    else if (FUNC_0 (VAR_1, VAR_3) == '{'
      || FUNC_0 (VAR_1, VAR_3) == '}')
      {
        FUNC_1 (&VAR_2, '@');
      }

    FUNC_1 (&VAR_2, FUNC_0 (VAR_1, VAR_3));
    VAR_3++;
  }
       FUNC_1 (&VAR_2, '\n');
     }
   while (FUNC_0 (VAR_1, VAR_3) == '\n'
   && ((FUNC_0 (VAR_1, VAR_3 + 1) == '.')
       || (FUNC_0 (VAR_1, VAR_3 + 1) == '|')))
     ;
   FUNC_2 (&VAR_2, "@end example");
 }
      else
 {
   FUNC_1 (&VAR_2, FUNC_0 (VAR_1, VAR_3));
   VAR_3++;
 }
    }

  FUNC_5 (VAR_1, &VAR_2);
  VAR_0++;
}
