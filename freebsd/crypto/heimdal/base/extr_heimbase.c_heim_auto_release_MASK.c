
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct heim_base {TYPE_1__* autorelpool; } ;
struct ar_tls {TYPE_1__* current; } ;
typedef int * heim_object_t ;
typedef TYPE_1__* heim_auto_release_t ;
struct TYPE_2__ {int pool_mutex; int pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct heim_base*,int ) ;
 int FUNC_3 (int *,struct heim_base*,int ) ;
 struct heim_base* FUNC_4 (int *) ;
 int VAR_0 ;
 struct ar_tls* FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *) ;

void
FUNC_8(heim_object_t VAR_1)
{
    struct heim_base *VAR_2 = FUNC_4(VAR_1);
    struct ar_tls *VAR_3 = FUNC_5();
    heim_auto_release_t VAR_4;

    if (VAR_1 == ((void*)0) || FUNC_7(VAR_1))
 return;


    if ((VAR_4 = VAR_2->autorelpool) != ((void*)0)) {
 FUNC_0(&VAR_4->pool_mutex);
 FUNC_3(&VAR_4->pool, VAR_2, VAR_0);
 VAR_2->autorelpool = ((void*)0);
 FUNC_1(&VAR_4->pool_mutex);
    }

    if (VAR_3 == ((void*)0) || (VAR_4 = VAR_3->current) == ((void*)0))
 FUNC_6("no auto relase pool in place, would leak");

    FUNC_0(&VAR_4->pool_mutex);
    FUNC_2(&VAR_4->pool, VAR_2, VAR_0);
    VAR_2->autorelpool = VAR_4;
    FUNC_1(&VAR_4->pool_mutex);
}
