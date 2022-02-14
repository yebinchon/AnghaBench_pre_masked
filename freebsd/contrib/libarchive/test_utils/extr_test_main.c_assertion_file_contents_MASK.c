
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
 int FUNC_7 (void const*,void const*,int,int ) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (void const*,char*,int) ;

int
FUNC_11(const char *VAR_0, int VAR_1, const void *VAR_2, int VAR_3, const char *VAR_4)
{
 char *VAR_5;
 FILE *VAR_6;
 int VAR_7;

 FUNC_0(VAR_0, VAR_1);

 VAR_6 = FUNC_4(VAR_4, "rb");
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_0, VAR_1,
      "File should exist: %s", VAR_4);
  FUNC_1(((void*)0));
  return (0);
 }
 VAR_5 = FUNC_9(VAR_3 * 2);
 VAR_7 = (int)FUNC_5(VAR_5, 1, VAR_3 * 2, VAR_6);
 FUNC_3(VAR_6);
 if (VAR_7 == VAR_3 && FUNC_10(VAR_2, VAR_5, VAR_3) == 0) {
  FUNC_6(VAR_5);
  return (1);
 }
 FUNC_2(VAR_0, VAR_1, "File contents don't match");
 FUNC_8("  file=\"%s\"\n", VAR_4);
 if (VAR_7 > 0)
  FUNC_7(VAR_5, VAR_2, VAR_7 > 512 ? 512 : VAR_7, 0);
 else {
  FUNC_8("  File empty, contents should be:\n");
  FUNC_7(VAR_2, ((void*)0), VAR_3 > 512 ? 512 : VAR_3, 0);
 }
 FUNC_1(((void*)0));
 FUNC_6(VAR_5);
 return (0);
}
