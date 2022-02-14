
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flag {char* f_str; long long f_flag; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static long long
FUNC_4(struct flag *VAR_1, char *VAR_2)
{
 long long VAR_3 = 0;
 unsigned int VAR_4;
 char *VAR_5;


 if (FUNC_2(VAR_2, "none") == 0 || FUNC_2(VAR_2, "0") == 0)
  return (0);
 for (VAR_5 = FUNC_3(VAR_2, ",|"); VAR_5 != ((void*)0); VAR_5 = FUNC_3(((void*)0), ",|")) {
  for (VAR_4 = 0; VAR_1[VAR_4].f_str != ((void*)0); VAR_4++) {
   if (FUNC_2(VAR_1[VAR_4].f_str, VAR_5) == 0)
    break;
  }
  if (VAR_1[VAR_4].f_str == ((void*)0)) {
   FUNC_1(VAR_0, "unknown flag '%s'\n", VAR_5);
   FUNC_0(1);
  }
  VAR_3 |= VAR_1[VAR_4].f_flag;
 }
 return (VAR_3);
}
