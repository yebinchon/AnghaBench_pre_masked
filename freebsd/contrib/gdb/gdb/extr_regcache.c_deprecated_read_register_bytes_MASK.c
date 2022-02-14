
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int * VAR_3 ;
 int FUNC_4 (char*,int *,int) ;

void
FUNC_5 (int VAR_4, char *VAR_5, int VAR_6)
{
  int VAR_7 = VAR_4 + VAR_6;
  int VAR_8;
  char VAR_9[VAR_0];




  for (VAR_8 = 0; VAR_8 < VAR_2 + VAR_1; VAR_8++)
    {
      int VAR_10;
      int VAR_11;
      int VAR_12;
      int VAR_13;
      int VAR_14;
      int VAR_15;

      VAR_10 = FUNC_0 (VAR_8);
      VAR_12 = FUNC_1 (VAR_8);
      VAR_11 = VAR_10 + VAR_12;

      if (VAR_11 <= VAR_4 || VAR_7 <= VAR_10)

 continue;

      if (FUNC_2 (VAR_8) != ((void*)0) && *FUNC_2 (VAR_8) != '\0')

 FUNC_3 (VAR_8, VAR_9);
      else







 FUNC_4 (VAR_9, &VAR_3[VAR_10], VAR_12);




      if (VAR_5 == ((void*)0))
 continue;


      if (VAR_10 > VAR_4)
 VAR_13 = VAR_10;
      else
 VAR_13 = VAR_4;


      if (VAR_11 < VAR_7)
 VAR_14 = VAR_11;
      else
 VAR_14 = VAR_7;


      for (VAR_15 = VAR_13; VAR_15 < VAR_14; VAR_15++)
 {
   VAR_5[VAR_15 - VAR_4] = VAR_9[VAR_15 - VAR_10];
 }
    }
}
