
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (char const*) ;
 int VAR_3 ;
 char* FUNC_1 (void*,char const*,size_t) ;
 void* FUNC_2 (size_t) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char const*) ;

char *
FUNC_5(const char *VAR_4)
{
 if (!VAR_4) {
  VAR_3 = VAR_0;
  return ((void*)0);
 }

 if (&FUNC_2) {
  size_t VAR_5 = FUNC_4(VAR_4);
  void *VAR_6 = ((void*)0);
  if (VAR_5 == VAR_2)
   goto error;
  VAR_6 = FUNC_2(VAR_5+1);
  if (VAR_6)
   return FUNC_1(VAR_6, VAR_4, VAR_5+1);
 } else



  return FUNC_3(VAR_4);


error:
 VAR_3 = VAR_1;
 return ((void*)0);
}
