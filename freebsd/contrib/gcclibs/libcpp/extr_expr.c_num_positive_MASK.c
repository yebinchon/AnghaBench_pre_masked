
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t cpp_num_part ;
struct TYPE_3__ {size_t high; size_t low; } ;
typedef TYPE_1__ cpp_num ;


 size_t VAR_0 ;

__attribute__((used)) static bool
FUNC_0 (cpp_num VAR_1, size_t VAR_2)
{
  if (VAR_2 > VAR_0)
    {
      VAR_2 -= VAR_0;
      return (VAR_1.high & (cpp_num_part) 1 << (VAR_2 - 1)) == 0;
    }

  return (VAR_1.low & (cpp_num_part) 1 << (VAR_2 - 1)) == 0;
}
