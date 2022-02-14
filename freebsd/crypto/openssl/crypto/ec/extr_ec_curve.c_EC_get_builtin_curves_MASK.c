
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int comment; int nid; } ;
struct TYPE_4__ {int comment; int nid; } ;
typedef TYPE_1__ EC_builtin_curve ;


 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;

size_t FUNC_0(EC_builtin_curve *VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5;

    if (VAR_2 == ((void*)0) || VAR_3 == 0)
        return VAR_1;

    VAR_5 = VAR_3 < VAR_1 ? VAR_3 : VAR_1;

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        VAR_2[VAR_4].nid = VAR_0[VAR_4].nid;
        VAR_2[VAR_4].comment = VAR_0[VAR_4].comment;
    }

    return VAR_1;
}
