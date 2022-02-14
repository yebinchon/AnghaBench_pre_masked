
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 for (;;) {
  { do { if ((VAR_3 = FUNC_2(VAR_2)) == VAR_0) return; } while (VAR_3 != ('"')); };
  { if ((VAR_4 = FUNC_2(VAR_2)) == VAR_0) return; if (!isdigit(VAR_4)) continue; };
  { if ((VAR_5 = FUNC_2(VAR_2)) == VAR_0) return; if (!FUNC_0(VAR_5)) continue; };
  { if ((VAR_6 = FUNC_2(VAR_2)) == VAR_0) return; if (!FUNC_0(VAR_6)) continue; };
  { if ((VAR_3 = FUNC_2(VAR_2)) == VAR_0) return; if (VAR_3 != '|') continue; };
  FUNC_3('"');
  FUNC_3(VAR_4);
  FUNC_3(VAR_5);
  FUNC_3(VAR_6);
  FUNC_3('|');
  for (;;) {
   if ((VAR_3 = FUNC_2(VAR_2)) == VAR_0)
    return;
   FUNC_3(VAR_3);
   if (VAR_3 == '"')
    break;
   if (VAR_3 == '\\') {
    if ((VAR_3 = FUNC_2(VAR_2)) == VAR_0)
     return;
    FUNC_3(VAR_3);
   }
  }
  FUNC_3('\n');
 }
}
