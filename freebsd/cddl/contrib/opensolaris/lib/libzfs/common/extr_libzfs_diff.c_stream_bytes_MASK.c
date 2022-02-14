
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, const char *VAR_1)
{
 char VAR_2;

 while ((VAR_2 = *VAR_1++) != '\0') {
  if (VAR_2 > ' ' && VAR_2 != '\\' && VAR_2 < '\177') {
   (void) FUNC_0(VAR_0, "%c", VAR_2);
  } else {
   (void) FUNC_0(VAR_0, "\\%03o", (uint8_t)VAR_2);
  }
 }
}
