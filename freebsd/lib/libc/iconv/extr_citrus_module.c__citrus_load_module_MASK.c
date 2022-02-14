
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef scalar_t__ _citrus_module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 char* FUNC_0 (char*,int*,int*) ;
 int * VAR_6 ;
 char* FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int FUNC_3 () ;
 void* FUNC_4 (char const*,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int * FUNC_7 (char const*) ;

int
FUNC_8(_citrus_module_t *VAR_7, const char *VAR_8)
{
 const char *VAR_9;
 char VAR_10[VAR_3];
 void *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_6 == ((void*)0)) {
  VAR_9 = FUNC_2("PATH_I18NMODULE");
  if (VAR_9 != ((void*)0) && !FUNC_3()) {
   VAR_6 = FUNC_7(VAR_9);
   if (VAR_6 == ((void*)0))
    return (VAR_1);
  } else
   VAR_6 = VAR_5;
 }

 (void)FUNC_6(VAR_10, sizeof(VAR_10), "lib%s", VAR_8);
 VAR_12 = VAR_2;
 VAR_13 = -1;
 VAR_9 = FUNC_0(VAR_10, &VAR_12, &VAR_13);
 if (!VAR_9)
  return (VAR_0);
 VAR_11 = FUNC_4(VAR_9, VAR_4);
 if (!VAR_11) {
  FUNC_5("%s", FUNC_1());
  return (VAR_0);
 }

 *VAR_7 = (_citrus_module_t)VAR_11;

 return (0);
}
