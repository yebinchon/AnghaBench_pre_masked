
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Signature; } ;
typedef TYPE_1__ AH_TABLE ;


 scalar_t__ FUNC_0 (char*,scalar_t__) ;
 TYPE_1__* VAR_0 ;

const AH_TABLE *
FUNC_1 (
    char *VAR_1)
{
    const AH_TABLE *VAR_2;


    for (VAR_2 = VAR_0; VAR_2->Signature; VAR_2++)
    {
        if (FUNC_0 (VAR_1, VAR_2->Signature))
        {
            return (VAR_2);
        }
    }

    return (((void*)0));
}
