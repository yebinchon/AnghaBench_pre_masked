
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct real_format {int b; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {scalar_t__ decimal; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 struct real_format* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*,int) ;

void
FUNC_3 (REAL_VALUE_TYPE *VAR_0, enum machine_mode VAR_1,
        const REAL_VALUE_TYPE *VAR_2)
{
  const struct real_format *VAR_3 = FUNC_0 (VAR_1);

  if (VAR_2->decimal && VAR_3->b == 10)
    return;
  if (VAR_2->decimal)
      FUNC_2 (VAR_0, VAR_2, VAR_1);
  else
      FUNC_1 (VAR_0, VAR_2);
}
