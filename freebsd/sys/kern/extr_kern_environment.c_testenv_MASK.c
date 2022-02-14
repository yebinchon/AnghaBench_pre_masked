
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int *) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(const char *VAR_2)
{
 char *VAR_3;

 if (VAR_0) {
  FUNC_2(&VAR_1);
  VAR_3 = FUNC_0(VAR_2, ((void*)0));
  FUNC_3(&VAR_1);
 } else
  VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != ((void*)0))
  return (1);
 return (0);
}
