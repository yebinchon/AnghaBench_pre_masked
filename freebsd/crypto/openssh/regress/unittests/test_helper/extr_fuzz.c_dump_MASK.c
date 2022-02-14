
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(u_char *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 16) {
  FUNC_0(VAR_0, "%.4zd: ", VAR_3);
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 16; VAR_4++) {
   if (VAR_4 < VAR_2)
    FUNC_0(VAR_0, "%02x ", VAR_1[VAR_4]);
   else
    FUNC_0(VAR_0, "   ");
  }
  FUNC_0(VAR_0, " ");
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + 16; VAR_4++) {
   if (VAR_4 < VAR_2) {
    if (FUNC_1(VAR_1[VAR_4]) && FUNC_2(VAR_1[VAR_4]))
     FUNC_0(VAR_0, "%c", VAR_1[VAR_4]);
    else
     FUNC_0(VAR_0, ".");
   }
  }
  FUNC_0(VAR_0, "\n");
 }
}
