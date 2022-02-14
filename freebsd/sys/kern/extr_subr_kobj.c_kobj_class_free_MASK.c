
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* kobj_class_t ;
struct TYPE_3__ {scalar_t__ refs; int * ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*,int ) ;

void
FUNC_4(kobj_class_t VAR_2)
{
 void* VAR_3 = ((void*)0);

 FUNC_0(VAR_0);
 FUNC_1();





 if (VAR_2->refs == 0) {
  VAR_3 = VAR_2->ops;
  VAR_2->ops = ((void*)0);
 }

 FUNC_2();

 if (VAR_3)
  FUNC_3(VAR_3, VAR_1);
}
