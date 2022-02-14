
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_14__ {int unsignedp; int overflow; scalar_t__ high; scalar_t__ low; } ;
typedef TYPE_1__ cpp_num ;


 size_t FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,size_t) ;
 TYPE_1__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__,size_t) ;
 TYPE_1__ FUNC_5 (TYPE_1__,size_t) ;
 int FUNC_6 (TYPE_1__) ;
 size_t VAR_0 ;

__attribute__((used)) static cpp_num
FUNC_7 (cpp_reader *VAR_1, cpp_num VAR_2, cpp_num VAR_3)
{
  cpp_num VAR_4, VAR_5;
  bool VAR_6 = VAR_2.unsignedp || VAR_3.unsignedp;
  bool VAR_7, VAR_8 = 0;
  size_t VAR_9 = FUNC_0 (VAR_1, VAR_9);


  if (!VAR_6)
    {
      if (!FUNC_4 (VAR_2, VAR_9))
 VAR_8 = !VAR_8, VAR_2 = FUNC_2 (VAR_2, VAR_9);
      if (!FUNC_4 (VAR_3, VAR_9))
 VAR_8 = !VAR_8, VAR_3 = FUNC_2 (VAR_3, VAR_9);
    }

  VAR_7 = VAR_2.high && VAR_3.high;
  VAR_4 = FUNC_3 (VAR_2.low, VAR_3.low);

  VAR_5 = FUNC_3 (VAR_2.high, VAR_3.low);
  VAR_4.high += VAR_5.low;
  if (VAR_5.high)
    VAR_7 = 1;

  VAR_5 = FUNC_3 (VAR_2.low, VAR_3.high);
  VAR_4.high += VAR_5.low;
  if (VAR_5.high)
    VAR_7 = 1;

  VAR_5.low = VAR_4.low, VAR_5.high = VAR_4.high;
  VAR_4 = FUNC_5 (VAR_4, VAR_9);
  if (!FUNC_1 (VAR_4, VAR_5))
    VAR_7 = 1;

  if (VAR_8)
    VAR_4 = FUNC_2 (VAR_4, VAR_9);

  if (VAR_6)
    VAR_4.overflow = 0;
  else
    VAR_4.overflow = VAR_7 || (FUNC_4 (VAR_4, VAR_9) ^ !VAR_8
       && !FUNC_6 (VAR_4));
  VAR_4.unsignedp = VAR_6;

  return VAR_4;
}
