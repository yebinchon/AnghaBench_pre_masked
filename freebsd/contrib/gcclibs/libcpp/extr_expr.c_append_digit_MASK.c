
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int cpp_num_part ;
struct TYPE_8__ {unsigned int high; unsigned int low; int overflow; int unsignedp; } ;
typedef TYPE_1__ cpp_num ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,size_t) ;

__attribute__((used)) static cpp_num
FUNC_2 (cpp_num VAR_1, int VAR_2, int VAR_3, size_t VAR_4)
{
  cpp_num VAR_5;
  unsigned int VAR_6;
  bool VAR_7;
  cpp_num_part VAR_8, VAR_9;



  switch (VAR_3)
    {
    case 2:
      VAR_6 = 1;
      break;

    case 16:
      VAR_6 = 4;
      break;

    default:
      VAR_6 = 3;
    }
  VAR_7 = !!(VAR_1.high >> (VAR_0 - VAR_6));
  VAR_5.high = VAR_1.high << VAR_6;
  VAR_5.low = VAR_1.low << VAR_6;
  VAR_5.high |= VAR_1.low >> (VAR_0 - VAR_6);
  VAR_5.unsignedp = VAR_1.unsignedp;

  if (VAR_3 == 10)
    {
      VAR_9 = VAR_1.low << 1;
      VAR_8 = (VAR_1.high << 1) + (VAR_1.low >> (VAR_0 - 1));
    }
  else
    VAR_8 = VAR_9 = 0;

  if (VAR_9 + VAR_2 < VAR_9)
    VAR_8++;
  VAR_9 += VAR_2;

  if (VAR_5.low + VAR_9 < VAR_5.low)
    VAR_8++;
  if (VAR_5.high + VAR_8 < VAR_5.high)
    VAR_7 = 1;

  VAR_5.low += VAR_9;
  VAR_5.high += VAR_8;
  VAR_5.overflow = VAR_7;



  VAR_1.low = VAR_5.low;
  VAR_1.high = VAR_5.high;
  VAR_5 = FUNC_1 (VAR_5, VAR_4);
  if (!FUNC_0 (VAR_5, VAR_1))
    VAR_5.overflow = 1;

  return VAR_5;
}
