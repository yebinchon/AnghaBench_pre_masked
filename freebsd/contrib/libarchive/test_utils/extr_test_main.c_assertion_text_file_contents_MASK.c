
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*,char const*,int,int ) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (char const*) ;

int
FUNC_11(const char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 const char *VAR_5, *VAR_6;
 FILE *VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_0, VAR_1);
 VAR_7 = FUNC_4(VAR_3, "r");
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_0, VAR_1,
      "File doesn't exist: %s", VAR_3);
  FUNC_1(((void*)0));
  return (0);
 }
 VAR_9 = (int)FUNC_10(VAR_2);
 VAR_4 = FUNC_9(VAR_9 * 2 + 128);
 VAR_8 = (int)FUNC_5(VAR_4, 1, VAR_9 * 2 + 128 - 1, VAR_7);
 if (VAR_8 >= 0)
  VAR_4[VAR_8] = '\0';
 FUNC_3(VAR_7);

 VAR_5 = VAR_2;
 VAR_6 = (const char *)VAR_4;
 while (*VAR_5 != '\0' && *VAR_6 != '\0') {
  if (*VAR_5 == *VAR_6) {
   ++VAR_5;
   ++VAR_6;
   continue;
  }
  if (VAR_5[0] == '\n' && VAR_6[0] == '\r' && VAR_6[1] == '\n') {

   ++VAR_5;
   VAR_6 += 2;
   continue;
  }
  break;
 }
 if (*VAR_5 == '\0' && *VAR_6 == '\0') {
  FUNC_6(VAR_4);
  return (1);
 }
 FUNC_2(VAR_0, VAR_1, "Contents don't match");
 FUNC_8("  file=\"%s\"\n", VAR_3);
 if (VAR_8 > 0) {
  FUNC_7(VAR_4, VAR_2, VAR_8, 0);
  FUNC_8("  expected\n", VAR_3);
  FUNC_7(VAR_2, VAR_4, VAR_9, 0);
 } else {
  FUNC_8("  File empty, contents should be:\n");
  FUNC_7(VAR_2, ((void*)0), VAR_9, 0);
 }
 FUNC_1(((void*)0));
 FUNC_6(VAR_4);
 return (0);
}
