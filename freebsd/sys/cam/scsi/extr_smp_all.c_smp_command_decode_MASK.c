
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint8_t ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,...) ;
 int FUNC_1 (char*) ;

void
FUNC_2(uint8_t *VAR_0, int VAR_1, struct sbuf *VAR_2,
     char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0, VAR_7 = VAR_4; VAR_6 < VAR_1; VAR_6++) {
  if ((VAR_7 < 6)
   && (VAR_5 < (FUNC_1(VAR_3) + 3))) {
   FUNC_0(VAR_2, "...");
   return;
  }
  if (VAR_7 < 3) {
   FUNC_0(VAR_2, "\n%s", VAR_3);
   VAR_7 = VAR_5 - FUNC_1(VAR_3);
  }
  FUNC_0(VAR_2, "%02x ", VAR_0[VAR_6]);
  VAR_7 = VAR_7 - 3;
 }
}
