
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int ,char const*,int*) ;
 int FUNC_2 (int,char**) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
 char **VAR_3;
 int VAR_4 = 0, VAR_5 = 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 if (!VAR_3)
  return -VAR_0;

 if (VAR_4)
  VAR_5 = FUNC_2(VAR_4, VAR_3);

 FUNC_0(VAR_3);
 return VAR_5;
}
