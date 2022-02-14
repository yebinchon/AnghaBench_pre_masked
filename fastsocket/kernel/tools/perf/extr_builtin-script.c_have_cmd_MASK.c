
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int) ;
 int FUNC_2 (char**,char const**,int) ;
 int FUNC_3 (int,char const**,int ,int *,int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(int VAR_3, const char **VAR_4)
{
 char **VAR_5 = FUNC_1(sizeof(const char *) * VAR_3);

 if (!VAR_5) {
  FUNC_4("malloc failed\n");
  return -1;
 }

 FUNC_2(VAR_5, VAR_4, sizeof(const char *) * VAR_3);
 VAR_3 = FUNC_3(VAR_3, (const char **)VAR_5, VAR_1,
        ((void*)0), VAR_0);
 FUNC_0(VAR_5);

 VAR_2 = (VAR_3 == 0);

 return 0;
}
