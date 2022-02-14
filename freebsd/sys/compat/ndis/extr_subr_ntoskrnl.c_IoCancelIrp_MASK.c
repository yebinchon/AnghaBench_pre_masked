
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int irp_cancelirql; int irp_cancel; } ;
typedef TYPE_1__ irp ;
typedef int * cancel_func ;
struct TYPE_9__ {int isl_devobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 int VAR_1 ;

uint8_t
FUNC_6(irp *VAR_2)
{
 cancel_func VAR_3;
 uint8_t VAR_4;

 FUNC_0(&VAR_4);
 VAR_3 = FUNC_3(VAR_2, ((void*)0));
 VAR_2->irp_cancel = VAR_1;
 if (VAR_3 == ((void*)0)) {
  FUNC_2(VAR_4);
  return (VAR_0);
 }
 VAR_2->irp_cancelirql = VAR_4;
 FUNC_5(VAR_3, FUNC_1(VAR_2)->isl_devobj, VAR_2);
 return (uint8_t)FUNC_4(VAR_2, VAR_1);
}
