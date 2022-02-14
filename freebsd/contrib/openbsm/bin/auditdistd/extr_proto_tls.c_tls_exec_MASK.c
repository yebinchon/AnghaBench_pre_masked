
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,scalar_t__,char*,char*,char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__,char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, char *VAR_4[])
{

 FUNC_0(VAR_3 > 3);
 FUNC_0(FUNC_3(VAR_4[0], "tls") == 0);

 FUNC_2(FUNC_1(VAR_4[3]) == 0 ? VAR_2 : VAR_1);

 if (FUNC_3(VAR_4[2], "client") == 0) {
  if (VAR_3 != 10)
   return (VAR_0);
  FUNC_4(VAR_4[1], FUNC_1(VAR_4[3]),
      VAR_4[4][0] == '\0' ? ((void*)0) : VAR_4[4], VAR_4[5], VAR_4[6],
      VAR_4[7], FUNC_1(VAR_4[8]), FUNC_1(VAR_4[9]));
 } else if (FUNC_3(VAR_4[2], "server") == 0) {
  if (VAR_3 != 7)
   return (VAR_0);
  FUNC_5(VAR_4[1], FUNC_1(VAR_4[3]), VAR_4[4], VAR_4[5],
      FUNC_1(VAR_4[6]));
 }
 return (VAR_0);
}
