
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int overflow; int unsignedp; int high; int low; } ;
typedef TYPE_1__ cpp_num ;


 scalar_t__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,size_t) ;
 int FUNC_2 (TYPE_1__) ;

__attribute__((used)) static cpp_num
FUNC_3 (cpp_num VAR_0, size_t VAR_1)
{
  cpp_num VAR_2;

  VAR_2 = VAR_0;
  VAR_0.high = ~VAR_0.high;
  VAR_0.low = ~VAR_0.low;
  if (++VAR_0.low == 0)
    VAR_0.high++;
  VAR_0 = FUNC_1 (VAR_0, VAR_1);
  VAR_0.overflow = (!VAR_0.unsignedp && FUNC_0 (VAR_0, VAR_2) && !FUNC_2 (VAR_0));

  return VAR_0;
}
