
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ar_tls {void* current; void* head; int tls_mutex; } ;
typedef TYPE_1__* heim_auto_release_t ;
struct TYPE_3__ {void* parent; int pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ar_tls* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0)
{
    heim_auto_release_t VAR_1 = VAR_0;
    struct ar_tls *VAR_2;

    VAR_2 = FUNC_3();
    if (VAR_2 == ((void*)0))
 FUNC_4("autorelease pool released on thread w/o autorelease inited");

    FUNC_5(VAR_1);

    if (!FUNC_2(&VAR_1->pool))
 FUNC_4("pool not empty after draining");

    FUNC_0(&VAR_2->tls_mutex);
    if (VAR_2->current != VAR_0)
 FUNC_4("autorelease not releaseing top pool");

    if (VAR_2->current != VAR_2->head)
 VAR_2->current = VAR_1->parent;
    FUNC_1(&VAR_2->tls_mutex);
}
