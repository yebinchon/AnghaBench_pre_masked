
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct real_format {int b; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_8__ {scalar_t__ cl; scalar_t__ decimal; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 struct real_format* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,TYPE_1__ const*) ;
 int FUNC_2 (struct real_format const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct real_format const*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void
FUNC_5 (REAL_VALUE_TYPE *VAR_1, enum machine_mode VAR_2,
       const REAL_VALUE_TYPE *VAR_3)
{
  const struct real_format *VAR_4;

  VAR_4 = FUNC_0 (VAR_2);
  FUNC_2 (VAR_4);

  *VAR_1 = *VAR_3;

  if (VAR_3->decimal || VAR_4->b == 10)
    FUNC_1 (VAR_1, VAR_2, VAR_3);

  FUNC_4 (VAR_4, VAR_1);


  if (VAR_1->cl == VAR_0)
    FUNC_3 (VAR_1);
}
