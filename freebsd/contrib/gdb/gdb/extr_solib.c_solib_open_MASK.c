
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,char**) ;
 char* FUNC_3 (int) ;
 int * FUNC_4 (int ,char*) ;
 int VAR_1 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int *,int,char*,int ,int ,char**) ;
 char* VAR_2 ;
 int * VAR_3 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char*) ;

int
FUNC_12 (char *VAR_4, char **VAR_5)
{
  int VAR_6 = -1;
  char *VAR_7 = ((void*)0);
  char *VAR_8 = VAR_4;

  while (*VAR_8 && !FUNC_1 (*VAR_8))
    VAR_8++;

  if (*VAR_8)
    {
      if (! FUNC_0 (VAR_4) || VAR_2 == ((void*)0))
        VAR_7 = VAR_4;
      else
 {
   int VAR_9 = FUNC_9 (VAR_2);


   while (VAR_9 > 0
   && FUNC_1 (VAR_2[VAR_9 - 1]))
     VAR_9--;


   VAR_7 = FUNC_3 (VAR_9 + FUNC_9 (VAR_4) + 1);
   FUNC_10 (VAR_7, VAR_2, VAR_9);
   VAR_7[VAR_9] = '\0';
   FUNC_8 (VAR_7, VAR_4);
 }


      VAR_6 = FUNC_6 (VAR_7, VAR_0, 0);
    }





  if (VAR_6 < 0 && FUNC_0 (VAR_4))
    {

      while (!FUNC_1 (*VAR_4))
        VAR_4++;


      while (FUNC_1 (*VAR_4))
        VAR_4++;
    }


  if (VAR_6 < 0 && VAR_3 != ((void*)0))
    VAR_6 = FUNC_7 (VAR_3,
   1, VAR_4, VAR_0, 0, &VAR_7);




  if (VAR_6 < 0 && VAR_3 != ((void*)0))
    VAR_6 = FUNC_7 (VAR_3,
                        1, FUNC_5 (VAR_4), VAR_0, 0,
                        &VAR_7);


  if (VAR_6 < 0 && &FUNC_2 != ((void*)0))
    VAR_6 = FUNC_2
                 (VAR_4, VAR_0, &VAR_7);


  if (VAR_6 < 0 && VAR_2 == ((void*)0))
    VAR_6 = FUNC_7 (FUNC_4 (VAR_1, "PATH"),
   1, VAR_4, VAR_0, 0, &VAR_7);



  if (VAR_6 < 0 && VAR_2 == ((void*)0))
    VAR_6 = FUNC_7 (FUNC_4 (VAR_1, "LD_LIBRARY_PATH"),
   1, VAR_4, VAR_0, 0, &VAR_7);



  if (VAR_5 != ((void*)0) && VAR_7 != ((void*)0))
    *VAR_5 = FUNC_11 (VAR_7);
  return VAR_6;
}
