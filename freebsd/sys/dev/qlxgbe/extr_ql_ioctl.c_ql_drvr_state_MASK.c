
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {int * drvr_state; } ;
struct TYPE_9__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;
struct TYPE_10__ {scalar_t__ size; int * buffer; } ;
typedef TYPE_3__ qla_driver_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(qla_host_t *VAR_2, qla_driver_state_t *VAR_3)
{
 int VAR_4 = 0;
 uint32_t VAR_5;

 VAR_5 = FUNC_3(VAR_2);

 if (VAR_3->buffer == ((void*)0)) {
  VAR_3->size = VAR_5;
  return (0);
 }

 if (VAR_3->size < VAR_5)
  return (VAR_1);

 if (VAR_2->hw.drvr_state == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_2);

 VAR_4 = FUNC_1(VAR_2->hw.drvr_state, VAR_3->buffer, VAR_5);

 FUNC_0(VAR_2->hw.drvr_state, VAR_5);

 return (VAR_4);
}
