
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int decimal128 ;
struct TYPE_5__ {scalar_t__ sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void
FUNC_2 (REAL_VALUE_TYPE *VAR_0, const REAL_VALUE_TYPE *VAR_1,
     enum machine_mode VAR_2)
{
  char VAR_3[256];
  decimal128 *VAR_4;
  VAR_4 = (decimal128 *) VAR_1->sig;

  FUNC_0 (VAR_4, VAR_3);
  FUNC_1 (VAR_0, VAR_3, VAR_2);
}
