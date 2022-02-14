
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int overflow; size_t high; size_t low; scalar_t__ unsignedp; } ;
typedef TYPE_1__ cpp_num ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,size_t,size_t) ;
 TYPE_1__ FUNC_2 (TYPE_1__,size_t) ;
 int FUNC_3 (TYPE_1__) ;

__attribute__((used)) static cpp_num
FUNC_4 (cpp_num VAR_1, size_t VAR_2, size_t VAR_3)
{
  if (VAR_3 >= VAR_2)
    {
      VAR_1.overflow = !VAR_1.unsignedp && !FUNC_3 (VAR_1);
      VAR_1.high = VAR_1.low = 0;
    }
  else
    {
      cpp_num VAR_4, VAR_5;
      size_t VAR_6 = VAR_3;

      VAR_4 = VAR_1;
      if (VAR_6 >= VAR_0)
 {
   VAR_6 -= VAR_0;
   VAR_1.high = VAR_1.low;
   VAR_1.low = 0;
 }
      if (VAR_6)
 {
   VAR_1.high = (VAR_1.high << VAR_6) | (VAR_1.low >> (VAR_0 - VAR_6));
   VAR_1.low <<= VAR_6;
 }
      VAR_1 = FUNC_2 (VAR_1, VAR_2);

      if (VAR_1.unsignedp)
 VAR_1.overflow = 0;
      else
 {
   VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3);
   VAR_1.overflow = !FUNC_0 (VAR_4, VAR_5);
 }
    }

  return VAR_1;
}
