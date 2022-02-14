
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, int *VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = FUNC_1(VAR_1);
 VAR_4 = VAR_1 + VAR_5;
 VAR_6 = FUNC_2(VAR_1, &VAR_3, 10);
 if (VAR_1 == VAR_3 || VAR_3 + 1 >= VAR_4 || *VAR_3 != '.')
  return (VAR_0);
 VAR_1 = VAR_3 + 1;
 VAR_7 = FUNC_2(VAR_1, &VAR_3, 10);
 if (VAR_1 == VAR_3 || VAR_3 + 1 >= VAR_4 || *VAR_3 != '.')
  return (VAR_0);
 VAR_1 = VAR_3 + 1;
 VAR_8 = FUNC_2(VAR_1, &VAR_3, 10);
 if (VAR_1 == VAR_3 ||
     (VAR_3 != VAR_4 && (VAR_3 + 1 >= VAR_4 || *VAR_3 != '-')))
  return (VAR_0);

 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8);
 if (VAR_9 < FUNC_0(1, 0, 0))
  return (VAR_0);

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_9;

 return (0);
}
