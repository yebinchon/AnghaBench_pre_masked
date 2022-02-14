
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sexport {char const* name; struct sexport* next; } ;


 struct sexport* FUNC_0 (int) ;
 struct sexport* VAR_0 ;

void
FUNC_1 (const char *VAR_1)
{
    struct sexport *VAR_2 = FUNC_0 (sizeof(*VAR_2));

    VAR_2->name = VAR_1;
    VAR_2->next = VAR_0;
    VAR_0 = VAR_2;
}
