
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_12__ {int sign; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*) ;

void
FUNC_4 (REAL_VALUE_TYPE *VAR_2, enum machine_mode VAR_3,
    const REAL_VALUE_TYPE *VAR_4)
{
  REAL_VALUE_TYPE VAR_5;

  FUNC_1 (&VAR_5, VAR_4);
  if (! FUNC_3 (&VAR_5, VAR_4) && ! VAR_4->sign)
    FUNC_0 (&VAR_5, &VAR_5, &VAR_1, 0);
  if (VAR_3 != VAR_0)
    FUNC_2 (VAR_2, VAR_3, &VAR_5);
  else
    *VAR_2 = VAR_5;
}
