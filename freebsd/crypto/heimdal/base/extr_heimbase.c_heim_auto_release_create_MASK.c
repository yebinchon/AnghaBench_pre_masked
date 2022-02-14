
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct heim_auto_release {int dummy; } ;
struct ar_tls {int tls_mutex; TYPE_1__* current; TYPE_1__* head; } ;
typedef TYPE_1__* heim_auto_release_t ;
struct TYPE_4__ {struct TYPE_4__* parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int VAR_0 ;
 struct ar_tls* FUNC_3 () ;
 int FUNC_4 (char*) ;

heim_auto_release_t
FUNC_5(void)
{
    struct ar_tls *VAR_1 = FUNC_3();
    heim_auto_release_t VAR_2;

    if (VAR_1 == ((void*)0))
 FUNC_4("Failed to create/get autorelease head");

    VAR_2 = FUNC_2(&VAR_0, sizeof(struct heim_auto_release));
    if (VAR_2) {
 FUNC_0(&VAR_1->tls_mutex);
 if (VAR_1->head == ((void*)0))
     VAR_1->head = VAR_2;
 VAR_2->parent = VAR_1->current;
 VAR_1->current = VAR_2;
 FUNC_1(&VAR_1->tls_mutex);
    }

    return VAR_2;
}
