
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct heim_base {scalar_t__ ref_cnt; TYPE_1__* isa; TYPE_2__* autorelpool; } ;
typedef int heim_base_atomic_type ;
typedef TYPE_2__* heim_auto_release_t ;
struct TYPE_4__ {int pool_mutex; int pool; } ;
struct TYPE_3__ {int (* dealloc ) (void*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct heim_base*,int ) ;
 struct heim_base* FUNC_3 (void*) ;
 int VAR_0 ;
 int FUNC_4 (struct heim_base*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (void*) ;

void
FUNC_9(void *VAR_2)
{
    heim_base_atomic_type VAR_3;
    struct heim_base *VAR_4 = FUNC_3(VAR_2);

    if (VAR_2 == ((void*)0) || FUNC_7(VAR_2))
 return;

    if (VAR_4->ref_cnt == VAR_1)
 return;

    VAR_3 = FUNC_6(&VAR_4->ref_cnt) + 1;

    if (VAR_3 > 1)
 return;

    if (VAR_3 == 1) {
 heim_auto_release_t VAR_5 = VAR_4->autorelpool;

 if (VAR_5) {
     VAR_4->autorelpool = ((void*)0);
     FUNC_0(&VAR_5->pool_mutex);
     FUNC_2(&VAR_5->pool, VAR_4, VAR_0);
     FUNC_1(&VAR_5->pool_mutex);
 }
 if (VAR_4->isa->dealloc)
     VAR_4->isa->dealloc(VAR_2);
 FUNC_4(VAR_4);
    } else
 FUNC_5("over release");
}
