
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (char const) ;
 int * FUNC_3 (char*,char const) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0)
{
 for (; *VAR_0 != '\0'; VAR_0++) {
  if (FUNC_0((unsigned char)*VAR_0) == 0 &&
      FUNC_3("-._~", *VAR_0) == ((void*)0))
   FUNC_1("%%%2.2X", (unsigned char)*VAR_0);
  else
   FUNC_2(*VAR_0);
 }
}
