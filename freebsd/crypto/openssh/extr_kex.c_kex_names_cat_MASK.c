
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,int *) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char**,char*) ;

char *
FUNC_8(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;

 if (VAR_0 == ((void*)0) || *VAR_0 == '\0')
  return FUNC_3(VAR_1);
 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return FUNC_3(VAR_0);
 if (FUNC_6(VAR_1) > 1024*1024)
  return ((void*)0);
 VAR_7 = FUNC_6(VAR_0) + FUNC_6(VAR_1) + 2;
 if ((VAR_3 = VAR_4 = FUNC_3(VAR_1)) == ((void*)0) ||
     (VAR_2 = FUNC_0(1, VAR_7)) == ((void*)0)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 FUNC_5(VAR_2, VAR_0, VAR_7);
 for ((VAR_5 = FUNC_7(&VAR_4, ",")); VAR_5 && *VAR_5 != '\0'; (VAR_5 = FUNC_7(&VAR_4, ","))) {
  if ((VAR_6 = FUNC_2(VAR_2, VAR_5, ((void*)0))) != ((void*)0)) {
   FUNC_1(VAR_6);
   continue;
  }
  if (FUNC_4(VAR_2, ",", VAR_7) >= VAR_7 ||
      FUNC_4(VAR_2, VAR_5, VAR_7) >= VAR_7) {
   FUNC_1(VAR_3);
   FUNC_1(VAR_2);
   return ((void*)0);
  }
 }
 FUNC_1(VAR_3);
 return VAR_2;
}
