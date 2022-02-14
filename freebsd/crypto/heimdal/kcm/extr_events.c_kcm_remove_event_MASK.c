
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ kcm_event ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,char*) ;

krb5_error_code
FUNC_4(krb5_context VAR_3,
   kcm_event *VAR_4)
{
    krb5_error_code VAR_5;
    kcm_event **VAR_6;
    int VAR_7 = 0;

    FUNC_3(VAR_4, "removing");

    FUNC_0(&VAR_2);
    for (VAR_6 = &VAR_1; *VAR_6 != ((void*)0); VAR_6 = &(*VAR_6)->next) {
 if (VAR_4 == *VAR_6) {
     *VAR_6 = VAR_4->next;
     VAR_7++;
     break;
 }
    }

    if (!VAR_7) {
 VAR_5 = VAR_0;
 goto out;
    }

    VAR_5 = FUNC_2(VAR_3, &VAR_4);

out:
    FUNC_1(&VAR_2);

    return VAR_5;
}
