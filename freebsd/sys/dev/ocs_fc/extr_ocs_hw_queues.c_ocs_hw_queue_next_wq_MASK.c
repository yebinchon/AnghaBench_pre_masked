
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int ** hw_wq; int * wq_cpu_array; int * wq_class_array; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_7__ {int wq_steering; size_t wq_class; TYPE_3__* eq; } ;
typedef TYPE_2__ ocs_hw_io_t ;
typedef int hw_wq_t ;
struct TYPE_8__ {int wq_array; } ;
typedef TYPE_3__ hw_eq_t ;


 size_t FUNC_0 (int *) ;



 int FUNC_1 (int) ;
 size_t FUNC_2 () ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

hw_wq_t *
FUNC_5(ocs_hw_t *VAR_0, ocs_hw_io_t *VAR_1)
{
 hw_eq_t *VAR_2;
 hw_wq_t *VAR_3 = ((void*)0);

 switch(VAR_1->wq_steering) {
 case 130:
  if (FUNC_1(VAR_1->wq_class < FUNC_0(VAR_0->wq_class_array))) {
   VAR_3 = FUNC_3(VAR_0->wq_class_array[VAR_1->wq_class]);
  }
  break;
 case 128:
  VAR_2 = VAR_1->eq;
  if (FUNC_1(VAR_2 != ((void*)0))) {
   VAR_3 = FUNC_3(VAR_2->wq_array);
  }
  break;
 case 129: {
  uint32_t VAR_4 = FUNC_2();

  if (FUNC_1(VAR_4 < FUNC_0(VAR_0->wq_cpu_array))) {
   VAR_3 = FUNC_3(VAR_0->wq_cpu_array[VAR_4]);
  }
  break;
 }
 }

 if (FUNC_4(VAR_3 == ((void*)0))) {
  VAR_3 = VAR_0->hw_wq[0];
 }

 return VAR_3;
}
