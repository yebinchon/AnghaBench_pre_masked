
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*,int *,char const*,int*,char const*,int *,int *,int *,int *,int *,int *,char const**) ;
 unsigned long FUNC_1 (char const*,char**,int ) ;

int
FUNC_2(const char *VAR_1, int VAR_2, const char *VAR_3, int *VAR_4)
{
 int VAR_5;
 const char *VAR_6;
 char *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_5 = FUNC_0(&VAR_9, ((void*)0), VAR_1, &VAR_2, VAR_3, ((void*)0),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6);
 if (VAR_5)
  return VAR_5;
 if (*VAR_6 == '\0')
  return VAR_0;
 VAR_8 = FUNC_1(VAR_6, &VAR_7, 0);
 if (*VAR_7 != '\0')
  return VAR_0;
 *VAR_4 = VAR_8;
 return 0;
}
