
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_type ;


 char FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_6 ()
{
  unsigned int VAR_2 = 0;
  int VAR_3 = 0;
  string_type VAR_4;
  FUNC_4 (&VAR_4);

  while (FUNC_0 (VAR_1, VAR_2))
    {
      if (FUNC_0 (VAR_1, VAR_2) == '@'
   && FUNC_0 (VAR_1, VAR_2 + 1) == '*')
 {
   FUNC_2 (&VAR_4, "*");
   VAR_2 += 2;
 }
      else if (FUNC_0 (VAR_1, VAR_2) == '\n'
        && FUNC_0 (VAR_1, VAR_2 + 1) == 'o'
        && FUNC_5 ((unsigned char) FUNC_0 (VAR_1, VAR_2 + 2)))
 {
   if (!VAR_3)
     {
       FUNC_2 (&VAR_4, "\n@itemize @bullet\n");
       VAR_3 = 1;

     }
   FUNC_2 (&VAR_4, "\n@item\n");
   VAR_2 += 3;
 }
      else
 {
   FUNC_1 (&VAR_4, FUNC_0 (VAR_1, VAR_2));
   if (VAR_3 && FUNC_0 (VAR_1, VAR_2) == '\n'
       && FUNC_0 (VAR_1, VAR_2 + 1) == '\n'
       && FUNC_0 (VAR_1, VAR_2 + 2) != 'o')
     {
       FUNC_2 (&VAR_4, "@end itemize");
       VAR_3 = 0;
     }
   VAR_2++;

 }
    }
  if (VAR_3)
    {
      FUNC_2 (&VAR_4, "@end itemize\n");
    }

  FUNC_3 (VAR_1);
  *VAR_1 = VAR_4;
  VAR_0++;
}
