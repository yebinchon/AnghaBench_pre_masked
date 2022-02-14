
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stype; int name; } ;
typedef TYPE_1__ Symbol ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, void *VAR_2)
{
    Symbol *VAR_3 = VAR_1;
    if (VAR_3->stype == VAR_0) {
 FUNC_0("%s is still undefined\n", VAR_3->name);
 *(int *) VAR_2 = 1;
    }
    return 0;
}
