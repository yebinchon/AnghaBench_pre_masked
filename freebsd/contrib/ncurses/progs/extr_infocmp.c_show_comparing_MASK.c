
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(char **VAR_4)
{
    if (VAR_2) {
 switch (VAR_1) {
 case 129:
     (void) FUNC_0(VAR_3, "%s: dumping differences\n", VAR_0);
     break;

 case 130:
     (void) FUNC_0(VAR_3, "%s: dumping common capabilities\n", VAR_0);
     break;

 case 128:
     (void) FUNC_0(VAR_3, "%s: dumping differences\n", VAR_0);
     break;
 }
    }
    if (*VAR_4) {
 FUNC_1("comparing %s", *VAR_4++);
 if (*VAR_4) {
     FUNC_1(" to %s", *VAR_4++);
     while (*VAR_4) {
  FUNC_1(", %s", *VAR_4++);
     }
 }
 FUNC_1(".\n");
    }
}
