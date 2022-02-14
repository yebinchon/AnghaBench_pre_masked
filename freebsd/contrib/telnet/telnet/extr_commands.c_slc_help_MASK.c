
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slclist {char* name; char* help; } ;


 struct slclist* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(void)
{
    struct slclist *VAR_1;

    for (VAR_1 = VAR_0; VAR_1->name; VAR_1++) {
 if (VAR_1->help) {
     if (*VAR_1->help)
  FUNC_0("%-15s %s\n", VAR_1->name, VAR_1->help);
     else
  FUNC_0("\n");
 }
    }
}
