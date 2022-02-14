
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int kobj_t ;
typedef TYPE_1__* kobj_class_t ;
struct TYPE_5__ {int * ops; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_0, kobj_class_t VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0();
 while (VAR_1->ops == ((void*)0)) {





  FUNC_1();
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3 != 0)
   return (VAR_3);
  FUNC_0();
 }
 FUNC_3(VAR_0, VAR_1);
 FUNC_1();
 return (0);
}
