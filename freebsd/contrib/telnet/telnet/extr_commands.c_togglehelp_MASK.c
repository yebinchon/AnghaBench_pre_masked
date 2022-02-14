
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct togglelist {char* name; char* help; } ;


 struct togglelist* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(void)
{
    struct togglelist *VAR_1;

    for (VAR_1 = VAR_0; VAR_1->name; VAR_1++) {
 if (VAR_1->help) {
     if (*VAR_1->help)
  FUNC_0("%-15s toggle %s\n", VAR_1->name, VAR_1->help);
     else
  FUNC_0("\n");
 }
    }
    FUNC_0("\n");
    FUNC_0("%-15s %s\n", "?", "display help information");
    return 0;
}
