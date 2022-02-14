
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
 const char *VAR_4 = VAR_1;

 FUNC_1("      %*s = ", VAR_2, VAR_0);
 if (VAR_1 == ((void*)0)) {
  FUNC_1("NULL\n");
  return;
 }
 FUNC_1("\"");
 while (*VAR_1 != '\0') {
  unsigned int VAR_5 = 0xff & *VAR_1++;
  switch (VAR_5) {
  case '\a': FUNC_1("\\a"); break;
  case '\b': FUNC_1("\\b"); break;
  case '\n': FUNC_1("\\n"); break;
  case '\r': FUNC_1("\\r"); break;
  default:
   if (VAR_5 >= 32 && VAR_5 < 127)
    FUNC_1("%c", VAR_5);
   else
    FUNC_1("\\x%02X", VAR_5);
  }
 }
 FUNC_1("\"");
 FUNC_1(" (length %d)", VAR_4 == ((void*)0) ? -1 : (int)FUNC_2(VAR_4));




 if (VAR_3) {
  size_t VAR_6;
  uint32_t VAR_7;
  int VAR_8;
  int VAR_9 = 0;

  VAR_1 = VAR_4;
  VAR_6 = FUNC_2(VAR_1);
  FUNC_1(" [");
  while ((VAR_8 = FUNC_0(&VAR_7, VAR_1, VAR_6)) > 0) {
   if (VAR_1 != VAR_4)
    FUNC_1(" ");
   FUNC_1("%04X", VAR_7);
   VAR_1 += VAR_8;
   VAR_6 -= VAR_8;
   VAR_9++;
  }
  FUNC_1("]");
  FUNC_1(" (count %d", VAR_9);
  if (VAR_8 < 0) {
   FUNC_1(",unknown %d bytes", VAR_6);
  }
  FUNC_1(")");

 }
 FUNC_1("\n");
}
