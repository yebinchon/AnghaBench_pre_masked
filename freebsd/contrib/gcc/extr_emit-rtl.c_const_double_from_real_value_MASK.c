
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {int rv; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;

rtx
FUNC_3 (REAL_VALUE_TYPE VAR_1, enum machine_mode VAR_2)
{
  rtx VAR_3 = FUNC_2 (VAR_0);
  FUNC_0 (VAR_3, VAR_2);

  VAR_3->u.rv = VAR_1;

  return FUNC_1 (VAR_3);
}
