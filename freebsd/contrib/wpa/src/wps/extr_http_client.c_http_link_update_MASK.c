
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,size_t,char*,char const*,char*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 char* FUNC_7 (char const*,char) ;

char * FUNC_8(char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 size_t VAR_3;
 const char *VAR_4;




 if (VAR_0 == ((void*)0))
  return ((void*)0);

 if (FUNC_6(VAR_0, "http://", 7) == 0)
  return VAR_0;

 if (FUNC_6(VAR_1, "http://", 7) != 0)
  return VAR_0;

 VAR_3 = FUNC_5(VAR_0) + 1 + FUNC_5(VAR_1) + 1;
 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2 == ((void*)0))
  return VAR_0;

 if (VAR_0[0] == '/') {
  VAR_4 = FUNC_4(VAR_1 + 7, '/');
  if (VAR_4 == ((void*)0)) {
   FUNC_3(VAR_2, VAR_3, "%s%s", VAR_1, VAR_0);
  } else {
   FUNC_2(VAR_2, VAR_1, VAR_4 - VAR_1);
   FUNC_2(VAR_2 + (VAR_4 - VAR_1), VAR_0, FUNC_5(VAR_0) + 1);
  }
 } else {
  VAR_4 = FUNC_7(VAR_1 + 7, '/');
  if (VAR_4 == ((void*)0)) {
   FUNC_3(VAR_2, VAR_3, "%s/%s", VAR_1, VAR_0);
  } else {
   FUNC_2(VAR_2, VAR_1, VAR_4 - VAR_1 + 1);
   FUNC_2(VAR_2 + (VAR_4 - VAR_1) + 1, VAR_0, FUNC_5(VAR_0) +
      1);
  }
 }

 FUNC_0(VAR_0);

 return VAR_2;
}
