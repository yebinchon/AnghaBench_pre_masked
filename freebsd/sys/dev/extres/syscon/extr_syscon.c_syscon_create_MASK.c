
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* syscon_class_t ;
struct syscon {int pdev; void* softc; } ;
typedef int kobj_t ;
typedef int kobj_class_t ;
typedef int device_t ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int,int ,int) ;

struct syscon *
FUNC_2(device_t VAR_3, syscon_class_t VAR_4)
{
 struct syscon *VAR_5;


 VAR_5 = FUNC_1(sizeof(struct syscon), VAR_0,
     VAR_1 | VAR_2);
 FUNC_0((kobj_t)VAR_5, (kobj_class_t)VAR_4);


 if (VAR_4->size > 0)
  VAR_5->softc = FUNC_1(VAR_4->size, VAR_0,
      VAR_1 | VAR_2);


 VAR_5->pdev = VAR_3;
 return (VAR_5);
}
