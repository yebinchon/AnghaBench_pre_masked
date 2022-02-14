
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int stype; int gen_name; } ;
typedef TYPE_1__ Symbol ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,void*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

Symbol *
FUNC_5(char *VAR_2)
{
    Symbol VAR_3, *VAR_4;

    VAR_3.name = VAR_2;
    VAR_4 = (Symbol *) FUNC_3(VAR_1, (void *) &VAR_3);
    if (VAR_4 == ((void*)0)) {
 VAR_4 = (Symbol *) FUNC_0(sizeof(*VAR_4));
 VAR_4->name = VAR_2;
 VAR_4->gen_name = FUNC_1(VAR_2);
 FUNC_4(VAR_4->gen_name);
 VAR_4->stype = VAR_0;
 FUNC_2(VAR_1, VAR_4);
    }
    return VAR_4;
}
