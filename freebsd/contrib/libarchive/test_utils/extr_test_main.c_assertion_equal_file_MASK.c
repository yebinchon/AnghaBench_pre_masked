
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff2 ;
typedef int buff1 ;
typedef int FILE ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

int
FUNC_8(const char *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
 char VAR_4[1024];
 char VAR_5[1024];
 FILE *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_0, VAR_1);

 VAR_6 = FUNC_4(VAR_2, "rb");
 VAR_7 = FUNC_4(VAR_3, "rb");
 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  if (VAR_6) FUNC_3(VAR_6);
  if (VAR_7) FUNC_3(VAR_7);
  return (0);
 }
 for (;;) {
  VAR_8 = (int)FUNC_5(VAR_4, 1, sizeof(VAR_4), VAR_6);
  VAR_9 = (int)FUNC_5(VAR_5, 1, sizeof(VAR_5), VAR_7);
  if (VAR_8 != VAR_9)
   break;
  if (VAR_8 == 0 && VAR_9 == 0) {
   FUNC_3(VAR_6);
   FUNC_3(VAR_7);
   return (1);
  }
  if (FUNC_7(VAR_4, VAR_5, VAR_8) != 0)
   break;
 }
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_2(VAR_0, VAR_1, "Files not identical");
 FUNC_6("  file1=\"%s\"\n", VAR_2);
 FUNC_6("  file2=\"%s\"\n", VAR_3);
 FUNC_1(((void*)0));
 return (0);
}
