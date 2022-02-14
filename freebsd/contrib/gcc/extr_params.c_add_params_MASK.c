
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int param_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,size_t) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,size_t) ;

void
FUNC_2 (const param_info VAR_2[], size_t VAR_3)
{

  VAR_0 = FUNC_1 (VAR_0,
         (VAR_1 + VAR_3) * sizeof (param_info));

  FUNC_0 (VAR_0 + VAR_1,
   VAR_2,
   VAR_3 * sizeof (param_info));

  VAR_1 += VAR_3;
}
