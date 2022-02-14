
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ linker_class_t ;
typedef TYPE_1__* kobj_class_t ;
struct TYPE_3__ {int refs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_2(linker_class_t VAR_4)
{






 if (VAR_3 == 1)
  return (VAR_0);
 FUNC_1((kobj_class_t) VAR_4);
 ((kobj_class_t)VAR_4)->refs++;
 FUNC_0(&VAR_1, VAR_4, VAR_2);
 return (0);
}
