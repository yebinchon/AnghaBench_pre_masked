
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t cpp_num_part ;
struct TYPE_7__ {size_t high; size_t low; int overflow; scalar_t__ unsignedp; } ;
typedef TYPE_1__ cpp_num ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__,size_t) ;
 TYPE_1__ FUNC_1 (TYPE_1__,size_t) ;

__attribute__((used)) static cpp_num
FUNC_2 (cpp_num VAR_1, size_t VAR_2, size_t VAR_3)
{
  cpp_num_part VAR_4;
  bool VAR_5 = FUNC_0 (VAR_1, VAR_2);

  if (VAR_1.unsignedp || VAR_5)
    VAR_4 = 0;
  else
    VAR_4 = ~(cpp_num_part) 0;

  if (VAR_3 >= VAR_2)
    VAR_1.high = VAR_1.low = VAR_4;
  else
    {

      if (VAR_2 < VAR_0)
 VAR_1.high = VAR_4, VAR_1.low |= VAR_4 << VAR_2;
      else if (VAR_2 < 2 * VAR_0)
 VAR_1.high |= VAR_4 << (VAR_2 - VAR_0);

      if (VAR_3 >= VAR_0)
 {
   VAR_3 -= VAR_0;
   VAR_1.low = VAR_1.high;
   VAR_1.high = VAR_4;
 }

      if (VAR_3)
 {
   VAR_1.low = (VAR_1.low >> VAR_3) | (VAR_1.high << (VAR_0 - VAR_3));
   VAR_1.high = (VAR_1.high >> VAR_3) | (VAR_4 << (VAR_0 - VAR_3));
 }
    }

  VAR_1 = FUNC_1 (VAR_1, VAR_2);
  VAR_1.overflow = 0;
  return VAR_1;
}
