
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef scalar_t__ _citrus_module_t ;


 int VAR_0 ;
 void* FUNC_0 (void*,char*) ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;

void *
FUNC_2(_citrus_module_t VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 char VAR_4[VAR_0];
 void *VAR_5;

 FUNC_1(VAR_4, sizeof(VAR_4), "_citrus_%s_%s_getops",
     VAR_2, VAR_3);
 VAR_5 = FUNC_0((void *)VAR_1, VAR_4);
 return (VAR_5);
}
