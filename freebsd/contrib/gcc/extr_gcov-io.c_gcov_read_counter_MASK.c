
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef scalar_t__ gcov_unsigned_t ;
typedef int gcov_type ;
struct TYPE_2__ {int error; } ;


 int FUNC_0 (scalar_t__ const) ;
 scalar_t__* FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;

gcov_type
FUNC_2 (void)
{
  gcov_type VAR_1;
  const gcov_unsigned_t *VAR_2 = FUNC_1 (2);

  if (!VAR_2)
    return 0;
  VAR_1 = FUNC_0 (VAR_2[0]);
  if (sizeof (VAR_1) > sizeof (gcov_unsigned_t))
    VAR_1 |= ((gcov_type) FUNC_0 (VAR_2[1])) << 32;
  else if (VAR_2[1])
    VAR_0.error = -1;

  return VAR_1;
}
