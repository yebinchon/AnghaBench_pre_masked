
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 char* FUNC_4 (char const*) ;
 size_t FUNC_5 (char const*) ;

char * FUNC_6(const char *VAR_2)
{
 char *VAR_3 = ((void*)0), *VAR_4, *VAR_5;
 size_t VAR_6 = 128, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 if (!VAR_2)
  return ((void*)0);

 if (VAR_2[0] == '/')
  return FUNC_4(VAR_2);

 for (;;) {
  VAR_3 = FUNC_2(VAR_6);
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  VAR_4 = FUNC_0(VAR_3, VAR_6);
  if (VAR_4 == ((void*)0)) {
   VAR_10 = VAR_1;
   FUNC_1(VAR_3);
   if (VAR_10 != VAR_0)
    return ((void*)0);
   VAR_6 *= 2;
   if (VAR_6 > 2000)
    return ((void*)0);
  } else {
   VAR_3[VAR_6 - 1] = '\0';
   break;
  }
 }

 VAR_7 = FUNC_5(VAR_4);
 VAR_8 = FUNC_5(VAR_2);
 VAR_9 = VAR_7 + 1 + VAR_8 + 1;
 VAR_5 = FUNC_2(VAR_9);
 if (VAR_5) {
  FUNC_3(VAR_5, VAR_4, VAR_7);
  VAR_5[VAR_7] = '/';
  FUNC_3(VAR_5 + VAR_7 + 1, VAR_2, VAR_8);
  VAR_5[VAR_9 - 1] = '\0';
 }
 FUNC_1(VAR_3);
 return VAR_5;
}
