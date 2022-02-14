
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, char *VAR_1, char *VAR_2)
{
 int VAR_3;

 FUNC_0("    ");
 FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0);
 if (VAR_1 != ((void*)0)) {
  FUNC_0(" ");
  FUNC_0(VAR_1);
  VAR_3 += FUNC_1(VAR_1) + 1;
 }
 if (VAR_2 != ((void*)0)) {
  do {
   FUNC_0(" ");
  } while (VAR_3++ < 30);
  FUNC_0(VAR_2);
 }
 return (FUNC_0("\n"));
}
