
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_4__ {int lock; int eh; } ;
typedef TYPE_1__ IAL_ADAPTER_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
  IAL_ADAPTER_T *VAR_2;

  VAR_2 = FUNC_3(VAR_1);

  FUNC_1(VAR_0, VAR_2->eh);
  FUNC_4(&VAR_2->lock);
  FUNC_2(VAR_2);
  FUNC_5(&VAR_2->lock);


  FUNC_0(1000 * 1000 * 5);
  return 0;
}
