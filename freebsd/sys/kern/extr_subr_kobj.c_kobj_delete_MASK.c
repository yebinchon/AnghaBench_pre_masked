
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct malloc_type {int dummy; } ;
typedef TYPE_2__* kobj_t ;
typedef TYPE_3__* kobj_class_t ;
struct TYPE_9__ {int refs; } ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {TYPE_3__* cls; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,struct malloc_type*) ;
 int FUNC_4 (TYPE_3__*) ;

void
FUNC_5(kobj_t VAR_1, struct malloc_type *VAR_2)
{
 kobj_class_t VAR_3 = VAR_1->ops->cls;
 int VAR_4;






 FUNC_0(VAR_0);
 FUNC_1();
 VAR_3->refs--;
 VAR_4 = VAR_3->refs;
 FUNC_2();

 if (!VAR_4)
  FUNC_4(VAR_3);

 VAR_1->ops = ((void*)0);
 if (VAR_2)
  FUNC_3(VAR_1, VAR_2);
}
