
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(char *VAR_4, int *VAR_5)
{
 char *VAR_6;
 int VAR_7;

 VAR_7 = (int)FUNC_2(VAR_4, &VAR_6, 0);
 if (*VAR_6) {
  (void) FUNC_0(VAR_3,
      FUNC_1("%s is not an integer\n"), VAR_4);
  FUNC_3(VAR_0);
 }
 if (VAR_7 < 0) {
  (void) FUNC_0(VAR_3,
      "%s", FUNC_1("Depth can not be negative.\n"));
  FUNC_3(VAR_0);
 }
 *VAR_5 |= (VAR_1|VAR_2);
 return (VAR_7);
}
