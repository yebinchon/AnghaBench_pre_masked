
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int module_t ;
typedef int kobj_t ;
typedef int kobj_class_t ;
struct TYPE_4__ {char* desc; int state; int * driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (int *,char*,int ) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(module_t VAR_7, int VAR_8, void* VAR_9)
{
 switch (VAR_8) {
 case 129:
  FUNC_0(&VAR_3);
  FUNC_4((kobj_class_t) &VAR_6);
  VAR_4 = FUNC_6(((void*)0), "root", 0);
  VAR_4->desc = "System root bus";
  FUNC_5((kobj_t) VAR_4, (kobj_class_t) &VAR_6);
  VAR_4->driver = &VAR_6;
  VAR_4->state = VAR_0;
  VAR_5 = FUNC_1("root", ((void*)0), VAR_2);
  FUNC_3();
  return (0);

 case 128:
  FUNC_2(VAR_4);
  return (0);
 default:
  return (VAR_1);
 }

 return (0);
}
