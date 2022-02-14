
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int binpath ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int * FUNC_6 (char const*,char) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char**,char*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_6, bool VAR_7)
{
 char *VAR_8, *VAR_9, VAR_10[VAR_4];
 int VAR_11;

 if (VAR_7 && FUNC_6(VAR_6, '/') == ((void*)0)) {
  VAR_8 = FUNC_2("PATH");
  if (VAR_8 == ((void*)0)) {
   FUNC_0("-p and no PATH environment variable");
   FUNC_4();
  }
  VAR_8 = FUNC_7(VAR_8);
  if (VAR_8 == ((void*)0)) {
   FUNC_0("Cannot allocate memory");
   FUNC_4();
  }
  VAR_11 = -1;
  VAR_5 = VAR_0;
  while ((VAR_9 = FUNC_10(&VAR_8, ":")) != ((void*)0)) {
   if (FUNC_9(VAR_10, VAR_9, sizeof(VAR_10)) >=
       sizeof(VAR_10))
    continue;
   if (VAR_10[0] != '\0' &&
       FUNC_8(VAR_10, "/", sizeof(VAR_10)) >=
       sizeof(VAR_10))
    continue;
   if (FUNC_8(VAR_10, VAR_6, sizeof(VAR_10)) >=
       sizeof(VAR_10))
    continue;
   VAR_11 = FUNC_3(VAR_10, VAR_2 | VAR_1 | VAR_3);
   if (VAR_11 != -1 || VAR_5 != VAR_0)
    break;
  }
  FUNC_1(VAR_8);
 } else {
  VAR_11 = FUNC_3(VAR_6, VAR_2 | VAR_1 | VAR_3);
 }

 if (VAR_11 == -1) {
  FUNC_0("Cannot open %s: %s", VAR_6, FUNC_5(VAR_5));
  FUNC_4();
 }
 return (VAR_11);
}
