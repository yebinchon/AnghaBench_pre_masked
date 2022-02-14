
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kobj_ops {int dummy; } ;
typedef int * kobj_ops_t ;
typedef TYPE_1__* kobj_class_t ;
struct TYPE_4__ {scalar_t__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (int,int ,int) ;

__attribute__((used)) static int
FUNC_6(kobj_class_t VAR_3, int VAR_4)
{
 kobj_ops_t VAR_5;

 FUNC_0(VAR_1);

 VAR_5 = FUNC_5(sizeof(struct kobj_ops), VAR_2, VAR_4);
 if (VAR_5 == ((void*)0))
  return (VAR_0);






 FUNC_1();
 if (VAR_3->ops) {
  FUNC_2();
  FUNC_3(VAR_5, VAR_2);
  return (0);
 }
 FUNC_4(VAR_3, VAR_5);
 FUNC_2();
 return (0);
}
