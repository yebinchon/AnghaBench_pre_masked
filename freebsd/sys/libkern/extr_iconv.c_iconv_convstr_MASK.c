
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const**,size_t*,char**,size_t*) ;
 int FUNC_1 (char*,char const*) ;
 size_t FUNC_2 (char const*) ;

char *
FUNC_3(void *VAR_0, char *VAR_1, const char *VAR_2)
{
 char *VAR_3 = VAR_1;
 size_t VAR_4, VAR_5;
 int VAR_6;

 if (VAR_0 == ((void*)0)) {
  FUNC_1(VAR_1, VAR_2);
  return VAR_1;
 }
 VAR_4 = VAR_5 = FUNC_2(VAR_2);
 VAR_6 = FUNC_0(VAR_0, ((void*)0), ((void*)0), &VAR_3, &VAR_5);
 if (VAR_6)
  return ((void*)0);
 VAR_6 = FUNC_0(VAR_0, &VAR_2, &VAR_4, &VAR_3, &VAR_5);
 if (VAR_6)
  return ((void*)0);
 *VAR_3 = 0;
 return VAR_1;
}
