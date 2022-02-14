
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int type; int * name; struct TYPE_6__* next; } ;
typedef TYPE_1__ krb5_config_section ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int * FUNC_3 (char const*) ;

krb5_config_section *
FUNC_4(krb5_config_section **VAR_1, const char *VAR_2, int VAR_3)
{
    krb5_config_section **VAR_4;

    for(VAR_4 = VAR_1; *VAR_4 != ((void*)0); VAR_4 = &(*VAR_4)->next)
 if(VAR_3 == VAR_0 &&
    (unsigned)VAR_3 == (*VAR_4)->type &&
    FUNC_2(VAR_2, (*VAR_4)->name) == 0)
     return *VAR_4;
    *VAR_4 = FUNC_0(1, sizeof(**VAR_4));
    if(*VAR_4 == ((void*)0))
 return ((void*)0);
    (*VAR_4)->name = FUNC_3(VAR_2);
    (*VAR_4)->type = VAR_3;
    if((*VAR_4)->name == ((void*)0)) {
 FUNC_1(*VAR_4);
 *VAR_4 = ((void*)0);
 return ((void*)0);
    }
    return *VAR_4;
}
