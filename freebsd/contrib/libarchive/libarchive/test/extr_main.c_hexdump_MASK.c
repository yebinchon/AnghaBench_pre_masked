
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 char VAR_6;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("(null)\n");
  return;
 }
 for(VAR_4=0; VAR_4 < VAR_2; VAR_4+=16) {
  FUNC_0("%04x", (unsigned)(VAR_4 + VAR_3));
  VAR_6 = ' ';
  for (VAR_5 = 0; VAR_5 < 16 && VAR_4 + VAR_5 < VAR_2; VAR_5++) {
   if (VAR_1 != ((void*)0) && VAR_0[VAR_4 + VAR_5] != VAR_1[VAR_4 + VAR_5])
    VAR_6 = '_';
   FUNC_0("%c%02x", VAR_6, 0xff & (int)VAR_0[VAR_4+VAR_5]);
   if (VAR_1 != ((void*)0) && VAR_0[VAR_4 + VAR_5] == VAR_1[VAR_4 + VAR_5])
    VAR_6 = ' ';
  }
  for (; VAR_5 < 16; VAR_5++) {
   FUNC_0("%c  ", VAR_6);
   VAR_6 = ' ';
  }
  FUNC_0("%c", VAR_6);
  for (VAR_5=0; VAR_5 < 16 && VAR_4 + VAR_5 < VAR_2; VAR_5++) {
   int VAR_7 = VAR_0[VAR_4 + VAR_5];
   if (VAR_7 >= ' ' && VAR_7 <= 126)
    FUNC_0("%c", VAR_7);
   else
    FUNC_0(".");
  }
  FUNC_0("\n");
 }
}
