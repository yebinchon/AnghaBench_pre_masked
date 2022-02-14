
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * FUNC_0 (int ,char const*,char const*) ;
 char* FUNC_1 (int *,int,char const*,char* const*,int *,int *,int*) ;

int
FUNC_2 (const char *VAR_8, char * const *VAR_9, const char *VAR_10,
   const char *VAR_11, char **VAR_12, char **VAR_13,
   int VAR_14)
{
  const char *VAR_15;
  int VAR_16;

  if ((VAR_14 & VAR_0) != 0)
    {
      if (VAR_7 != ((void*)0))
 {
   *VAR_12 = (char *) "pexecute already in progress";
   *VAR_13 = ((void*)0);
   return -1;
 }
      VAR_7 = FUNC_0 (VAR_5, VAR_10, VAR_11);
      VAR_6 = 0;
    }
  else
    {
      if (VAR_7 == ((void*)0))
 {
   *VAR_12 = (char *) "pexecute not in progress";
   *VAR_13 = ((void*)0);
   return -1;
 }
    }

  VAR_15 = FUNC_1 (VAR_7,
      (((VAR_14 & VAR_1) != 0 ? VAR_3 : 0)
       | ((VAR_14 & VAR_2) != 0 ? VAR_4 : 0)),
      VAR_8, VAR_9, ((void*)0), ((void*)0), &VAR_16);
  if (VAR_15 != ((void*)0))
    {
      *VAR_12 = (char *) VAR_15;
      *VAR_13 = ((void*)0);
      return -1;
    }




  return ++VAR_6;
}
