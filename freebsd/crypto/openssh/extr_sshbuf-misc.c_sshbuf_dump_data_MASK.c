
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;

void
FUNC_3(const void *VAR_0, size_t VAR_1, FILE *VAR_2)
{
 size_t VAR_3, VAR_4;
 const u_char *VAR_5 = (const u_char *)VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 16) {
  FUNC_0(VAR_2, "%.4zu: ", VAR_3);
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 16; VAR_4++) {
   if (VAR_4 < VAR_1)
    FUNC_0(VAR_2, "%02x ", VAR_5[VAR_4]);
   else
    FUNC_0(VAR_2, "   ");
  }
  FUNC_0(VAR_2, " ");
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 16; VAR_4++) {
   if (VAR_4 < VAR_1) {
    if (FUNC_1(VAR_5[VAR_4]) && FUNC_2(VAR_5[VAR_4]))
     FUNC_0(VAR_2, "%c", VAR_5[VAR_4]);
    else
     FUNC_0(VAR_2, ".");
   }
  }
  FUNC_0(VAR_2, "\n");
 }
}
