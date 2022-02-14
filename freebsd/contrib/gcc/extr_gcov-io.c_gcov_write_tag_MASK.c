
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ gcov_unsigned_t ;
typedef scalar_t__ gcov_position_t ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ start; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__* FUNC_0 (int) ;

gcov_position_t
FUNC_1 (gcov_unsigned_t VAR_1)
{
  gcov_position_t VAR_2 = VAR_0.start + VAR_0.offset;
  gcov_unsigned_t *VAR_3 = FUNC_0 (2);

  VAR_3[0] = VAR_1;
  VAR_3[1] = 0;

  return VAR_2;
}
