
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_type ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_5 ()
{
  string_type VAR_2;
  int VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5 = 0;
  FUNC_4 (&VAR_2);
  while (FUNC_0 (VAR_1, VAR_4))
    {
      switch (FUNC_0 (VAR_1, VAR_4))
 {
 case '\n':
   FUNC_2 (&VAR_2, "\n");
   VAR_4++;
   if (VAR_3 && FUNC_0 (VAR_1, VAR_4))
     {
       FUNC_2 (&VAR_2, "    ");
     }
   VAR_5 = 0;
   break;
 case '(':
   VAR_3++;
   if (VAR_5 == 0)
     FUNC_2 (&VAR_2, "   ");
   VAR_4++;
   FUNC_2 (&VAR_2, "(");
   VAR_5 = 1;
   break;
 case ')':
   VAR_3--;
   FUNC_2 (&VAR_2, ")");
   VAR_4++;
   VAR_5 = 1;

   break;
 default:
   FUNC_1 (&VAR_2, FUNC_0 (VAR_1, VAR_4));
   VAR_5 = 1;

   VAR_4++;
   break;
 }
    }

  VAR_0++;
  FUNC_3 (VAR_1);
  *VAR_1 = VAR_2;

}
