
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (char*,char*) ;
 char* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(void)
{

 VAR_0 = 0;
 if (VAR_1) {
  FUNC_1(VAR_1);
  return 1;
 }
 if (VAR_2[0] == '\0')
  return 0;

 VAR_1 = FUNC_0(VAR_2, "r");
 if (VAR_1 != ((void*)0))
  return 1;
 FUNC_2("Can't open `%s'", VAR_2);
 return 0;
}
