
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ kcm_event ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;

krb5_error_code
FUNC_1(krb5_context VAR_1)
{
    kcm_event *VAR_2;

    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 FUNC_0(VAR_2, "debug");

    return 0;
}
