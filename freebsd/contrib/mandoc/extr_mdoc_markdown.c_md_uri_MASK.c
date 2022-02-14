
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const) ;
 int FUNC_1 (char const) ;
 int * FUNC_2 (char*,char const) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1)
{
 while (*VAR_1 != '\0') {
  if (FUNC_2("%()<>", *VAR_1) != ((void*)0)) {
   FUNC_0("%%%2.2hhX", *VAR_1);
   VAR_0 += 3;
  } else {
   FUNC_1(*VAR_1);
   VAR_0++;
  }
  VAR_1++;
 }
}
