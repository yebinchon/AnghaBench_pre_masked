
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int * VAR_3 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

void
FUNC_9 (int VAR_4, char *VAR_5, int VAR_6)
{
  int VAR_7 = VAR_4 + VAR_6;
  int VAR_8;

  FUNC_7 ();






  for (VAR_8 = 0; VAR_8 < VAR_2 + VAR_1; VAR_8++)
    {
      int VAR_9, VAR_10;

      VAR_9 = FUNC_0 (VAR_8);
      VAR_10 = VAR_9 + FUNC_1 (VAR_8);


      if (VAR_7 <= VAR_9 || VAR_10 <= VAR_4)
                  ;


      else if (VAR_4 <= VAR_9 && VAR_10 <= VAR_7)
 FUNC_3 (VAR_8, VAR_5 + (VAR_9 - VAR_4));


      else
 {
   char VAR_11[VAR_0];


   int VAR_12 = FUNC_4 (VAR_9, VAR_4);
   int VAR_13 = FUNC_6 (VAR_10, VAR_7);



   FUNC_2 (VAR_8, VAR_11);

   FUNC_5 (&VAR_3[VAR_12],
    VAR_5 + (VAR_12 - VAR_4),
    VAR_13 - VAR_12);

   FUNC_8 (VAR_8);
 }
    }
}
