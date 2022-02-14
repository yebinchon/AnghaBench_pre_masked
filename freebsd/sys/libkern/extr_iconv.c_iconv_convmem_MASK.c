
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const**,size_t*,char**,size_t*) ;
 int FUNC_1 (void*,void const*,int) ;

void *
FUNC_2(void *VAR_0, void *VAR_1, const void *VAR_2, int VAR_3)
{
 const char *VAR_4 = VAR_2;
 char *VAR_5 = VAR_1;
 size_t VAR_6, VAR_7;
 int VAR_8;

 if (VAR_3 == 0)
  return VAR_1;
 if (VAR_0 == ((void*)0)) {
  FUNC_1(VAR_1, VAR_2, VAR_3);
  return VAR_1;
 }
 VAR_6 = VAR_7 = VAR_3;
 VAR_8 = FUNC_0(VAR_0, ((void*)0), ((void*)0), &VAR_5, &VAR_7);
 if (VAR_8)
  return ((void*)0);
 VAR_8 = FUNC_0(VAR_0, &VAR_4, &VAR_6, &VAR_5, &VAR_7);
 if (VAR_8)
  return ((void*)0);
 return VAR_1;
}
