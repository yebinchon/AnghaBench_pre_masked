
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gcov_unsigned_t ;
struct TYPE_2__ {int endian; } ;


 TYPE_1__ VAR_0 ;

int
FUNC_0 (gcov_unsigned_t VAR_1, gcov_unsigned_t VAR_2)
{
  if (VAR_1 == VAR_2)
    return 1;
  VAR_1 = (VAR_1 >> 16) | (VAR_1 << 16);
  VAR_1 = ((VAR_1 & 0xff00ff) << 8) | ((VAR_1 >> 8) & 0xff00ff);
  if (VAR_1 == VAR_2)
    {
      VAR_0.endian = 1;
      return -1;
    }
  return 0;
}
