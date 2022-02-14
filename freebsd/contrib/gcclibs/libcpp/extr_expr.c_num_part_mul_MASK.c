
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cpp_num_part ;
struct TYPE_3__ {int low; int high; int unsignedp; int overflow; } ;
typedef TYPE_1__ cpp_num ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static cpp_num
FUNC_2 (cpp_num_part VAR_1, cpp_num_part VAR_2)
{
  cpp_num VAR_3;
  cpp_num_part VAR_4[2], VAR_5;

  VAR_3.low = FUNC_1 (VAR_1) * FUNC_1 (VAR_2);
  VAR_3.high = FUNC_0 (VAR_1) * FUNC_0 (VAR_2);

  VAR_4[0] = FUNC_1 (VAR_1) * FUNC_0 (VAR_2);
  VAR_4[1] = FUNC_0 (VAR_1) * FUNC_1 (VAR_2);

  VAR_5 = VAR_3.low;
  VAR_3.low += FUNC_1 (VAR_4[0]) << (VAR_0 / 2);
  if (VAR_3.low < VAR_5)
    VAR_3.high++;

  VAR_5 = VAR_3.low;
  VAR_3.low += FUNC_1 (VAR_4[1]) << (VAR_0 / 2);
  if (VAR_3.low < VAR_5)
    VAR_3.high++;

  VAR_3.high += FUNC_0 (VAR_4[0]);
  VAR_3.high += FUNC_0 (VAR_4[1]);
  VAR_3.unsignedp = 1;
  VAR_3.overflow = 0;

  return VAR_3;
}
