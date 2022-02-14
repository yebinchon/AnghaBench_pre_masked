
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,char*,int ,char**,char**,char**,char*,size_t,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_1(char **VAR_5, char **VAR_6, char **VAR_7, char *VAR_8, size_t VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = 0;
 VAR_10 = FUNC_0(((void*)0), VAR_4, VAR_0, "getnetgrent_r",
     VAR_2, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, &VAR_11);
 if (VAR_10 == VAR_1) {
  return (1);
 } else {
  VAR_3 = VAR_11;
  return (0);
 }
}
