
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (void*,void*) ;
 char* FUNC_1 (char const*,char const) ;
 char* FUNC_2 (void*,void*) ;
 char* FUNC_3 (void*,void*) ;
 char* FUNC_4 (void*,void*) ;

char *FUNC_5(const char *VAR_0, const char *VAR_1)
{

 if (!VAR_1[0]) return (char *)VAR_0;


 VAR_0 = FUNC_1(VAR_0, *VAR_1);
 if (!VAR_0 || !VAR_1[1]) return (char *)VAR_0;
 if (!VAR_0[1]) return 0;
 if (!VAR_1[2]) return FUNC_3((void *)VAR_0, (void *)VAR_1);
 if (!VAR_0[2]) return 0;
 if (!VAR_1[3]) return FUNC_2((void *)VAR_0, (void *)VAR_1);
 if (!VAR_0[3]) return 0;
 if (!VAR_1[4]) return FUNC_0((void *)VAR_0, (void *)VAR_1);

 return FUNC_4((void *)VAR_0, (void *)VAR_1);
}
