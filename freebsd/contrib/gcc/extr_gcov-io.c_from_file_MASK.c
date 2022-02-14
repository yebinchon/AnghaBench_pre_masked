
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gcov_unsigned_t ;
struct TYPE_2__ {scalar_t__ endian; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline gcov_unsigned_t FUNC_0 (gcov_unsigned_t VAR_1)
{

  if (VAR_0.endian)
    {
      VAR_1 = (VAR_1 >> 16) | (VAR_1 << 16);
      VAR_1 = ((VAR_1 & 0xff00ff) << 8) | ((VAR_1 >> 8) & 0xff00ff);
    }

  return VAR_1;
}
