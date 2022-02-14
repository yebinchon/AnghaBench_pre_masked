
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*,int *,int *,char const*,char const*,char const**,int*,int*,int *,int *,int *) ;
 char* FUNC_1 (char const*,int) ;

int
FUNC_2(int *VAR_0, const char **VAR_1, int *VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 const char *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = *VAR_0;
 VAR_8 = FUNC_0(VAR_0, &VAR_9, ((void*)0), ((void*)0), VAR_3, VAR_4,
     &VAR_5, &VAR_6, &VAR_7, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_8 == 0) {
  *VAR_1 = FUNC_1(VAR_5, VAR_6);
  *VAR_2 = VAR_7;
 }
 *VAR_0 = VAR_9;
 return VAR_8;
}
