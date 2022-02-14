
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,int*,int*,char const*,int*,char const*,char const*,char const**,int*,int*,char const**,int*,char const**) ;

__attribute__((used)) static int
FUNC_1(int *VAR_1, int *VAR_2,
    const char *VAR_3, int *VAR_4, const char *VAR_5, const char *VAR_6,
    const char **VAR_7, int *VAR_8, int *VAR_9,
    const char **VAR_10, int *VAR_11, const char **VAR_12)
{
 int VAR_13;
 int VAR_14;
 char *VAR_15;

 *VAR_1 = 0;
 VAR_15 = ((void*)0);


 VAR_13 = FUNC_0(&VAR_15, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
     VAR_12);
 if (VAR_13 == 0)
  return 0;
 if (VAR_4 == ((void*)0))
  return VAR_0;

 VAR_14 = -1;
 VAR_13 = FUNC_0(&VAR_15, VAR_1, VAR_2, VAR_3, &VAR_14, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
     VAR_12);
 if (VAR_13 == 0)
  return 0;
 return VAR_0;
}
