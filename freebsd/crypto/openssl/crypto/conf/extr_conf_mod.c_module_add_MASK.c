
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int conf_init_func ;
typedef int conf_finish_func ;
struct TYPE_7__ {struct TYPE_7__* name; int * finish; int * init; int * dso; } ;
typedef int DSO ;
typedef TYPE_1__ CONF_MODULE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int * VAR_2 ;

__attribute__((used)) static CONF_MODULE *FUNC_6(DSO *VAR_3, const char *VAR_4,
                               conf_init_func *VAR_5, conf_finish_func *VAR_6)
{
    CONF_MODULE *VAR_7 = ((void*)0);
    if (VAR_2 == ((void*)0))
        VAR_2 = FUNC_4();
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    if ((VAR_7 = FUNC_3(sizeof(*VAR_7))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    VAR_7->dso = VAR_3;
    VAR_7->name = FUNC_2(VAR_4);
    VAR_7->init = VAR_5;
    VAR_7->finish = VAR_6;
    if (VAR_7->name == ((void*)0)) {
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    if (!FUNC_5(VAR_2, VAR_7)) {
        FUNC_1(VAR_7->name);
        FUNC_1(VAR_7);
        return ((void*)0);
    }

    return VAR_7;
}
