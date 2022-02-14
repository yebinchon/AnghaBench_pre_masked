
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int node; int domain; struct entry* next; } ;


 struct entry* VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char) ;

FUNC_3()
{
    struct entry *VAR_1;
    char *VAR_2;

    for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next) {
 if (!FUNC_2(VAR_1->domain, '.') && (VAR_2 = FUNC_0(VAR_1->domain))) {
     FUNC_1(VAR_1->node, VAR_2);
 }
    }
}
