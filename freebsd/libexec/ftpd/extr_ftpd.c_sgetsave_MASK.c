
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_0)
{
 char *VAR_1 = FUNC_1(FUNC_4(VAR_0) + 1);

 if (VAR_1 == ((void*)0)) {
  FUNC_2(421, "Ran out of memory.");
  FUNC_0(1);

 }
 (void) FUNC_3(VAR_1, VAR_0);
 return (VAR_1);
}
