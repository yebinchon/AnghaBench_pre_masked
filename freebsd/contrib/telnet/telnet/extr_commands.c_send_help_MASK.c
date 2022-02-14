
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sendlist {char* name; char* help; } ;


 struct sendlist* VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1(void)
{
    struct sendlist *VAR_1;
    for (VAR_1 = VAR_0; VAR_1->name; VAR_1++) {
 if (VAR_1->help)
     FUNC_0("%-15s %s\n", VAR_1->name, VAR_1->help);
    }
    return(0);
}
