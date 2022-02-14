
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_type ;


 char FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_5 ()
{
  int VAR_2;

  int VAR_3 = 0;
  int VAR_4;
  int VAR_5 = 0;

  string_type VAR_6;
  FUNC_3 (&VAR_6);

  while (FUNC_0 (VAR_1, VAR_3) == '\n')
    {
      VAR_3++;
    }
  VAR_4 = VAR_3;



  if (FUNC_0 (VAR_1, VAR_3) == '.')
    FUNC_1 (&VAR_6, '\n');


  while (FUNC_0 (VAR_1, VAR_3))
    {
      VAR_3++;
    }


  VAR_3--;

  while (VAR_3 && FUNC_4 ((unsigned char) FUNC_0 (VAR_1, VAR_3)))
    VAR_3--;
  VAR_3++;



  VAR_2 = 1;

  while (VAR_4 < VAR_3)
    {
      if (FUNC_0 (VAR_1, VAR_4) == '\n'
   && FUNC_0 (VAR_1, VAR_4 + 1) == '\n'
   && FUNC_0 (VAR_1, VAR_4 + 2) == '.')
 {

   VAR_4++;
 }
      else if (FUNC_0 (VAR_1, VAR_4) == '.' && VAR_2)
 {

   VAR_5 = 2;
 }
      else if (FUNC_0 (VAR_1, VAR_4) == '\n'
        && FUNC_0 (VAR_1, VAR_4 + 1) == '\n'
        && VAR_5)
 {
   VAR_4++;

 }

      FUNC_1 (&VAR_6, FUNC_0 (VAR_1, VAR_4));
      if (FUNC_0 (VAR_1, VAR_4) == '\n')
 {
   VAR_2 = 1;

   if (VAR_5 == 2)
     VAR_5 = 1;
   else
     VAR_5 = 0;
 }
      else
 VAR_2 = 0;

      VAR_4++;

    }


  FUNC_1 (&VAR_6, '\n');
  VAR_0++;
  FUNC_2 (VAR_1);
  *VAR_1 = VAR_6;

}
