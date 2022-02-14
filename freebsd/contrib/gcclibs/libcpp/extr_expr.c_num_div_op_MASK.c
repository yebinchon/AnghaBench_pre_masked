
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_22__ {int skip_eval; } ;
struct TYPE_23__ {TYPE_1__ state; } ;
typedef TYPE_2__ cpp_reader ;
typedef size_t cpp_num_part ;
struct TYPE_24__ {int unsignedp; int high; int low; int overflow; } ;
typedef TYPE_3__ cpp_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (TYPE_2__*,int ) ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 TYPE_3__ FUNC_2 (TYPE_2__*,TYPE_3__,TYPE_3__,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__,TYPE_3__,size_t) ;
 TYPE_3__ FUNC_4 (TYPE_3__,size_t,size_t) ;
 TYPE_3__ FUNC_5 (TYPE_3__,size_t) ;
 int FUNC_6 (TYPE_3__,size_t) ;
 int FUNC_7 (TYPE_3__) ;
 size_t VAR_4 ;

__attribute__((used)) static cpp_num
FUNC_8 (cpp_reader *VAR_5, cpp_num VAR_6, cpp_num VAR_7, enum cpp_ttype VAR_8)
{
  cpp_num VAR_9, VAR_10;
  cpp_num_part VAR_11;
  bool VAR_12 = VAR_6.unsignedp || VAR_7.unsignedp;
  bool VAR_13 = 0, VAR_14 = 0;
  size_t VAR_15, VAR_16 = FUNC_0 (VAR_5, VAR_16);


  if (!VAR_12)
    {
      if (!FUNC_6 (VAR_6, VAR_16))
 VAR_13 = !VAR_13, VAR_14 = 1, VAR_6 = FUNC_5 (VAR_6, VAR_16);
      if (!FUNC_6 (VAR_7, VAR_16))
 VAR_13 = !VAR_13, VAR_7 = FUNC_5 (VAR_7, VAR_16);
    }


  if (VAR_7.high)
    {
      VAR_15 = VAR_16 - 1;
      VAR_11 = (cpp_num_part) 1 << (VAR_15 - VAR_3);
      for (; ; VAR_15--, VAR_11 >>= 1)
 if (VAR_7.high & VAR_11)
   break;
    }
  else if (VAR_7.low)
    {
      if (VAR_16 > VAR_3)
 VAR_15 = VAR_16 - VAR_3 - 1;
      else
 VAR_15 = VAR_16 - 1;
      VAR_11 = (cpp_num_part) 1 << VAR_15;
      for (; ; VAR_15--, VAR_11 >>= 1)
 if (VAR_7.low & VAR_11)
   break;
    }
  else
    {
      if (!VAR_5->state.skip_eval)
 FUNC_1 (VAR_5, VAR_1, "division by zero in #if");
      return VAR_6;
    }






  VAR_7.unsignedp = 1;
  VAR_6.unsignedp = 1;
  VAR_15 = VAR_16 - VAR_15 - 1;
  VAR_10 = FUNC_4 (VAR_7, VAR_16, VAR_15);

  VAR_9.high = VAR_9.low = 0;
  for (;;)
    {
      if (FUNC_3 (VAR_6, VAR_10, VAR_16))
 {
   VAR_6 = FUNC_2 (VAR_5, VAR_6, VAR_10, VAR_2);
   if (VAR_15 >= VAR_3)
     VAR_9.high |= (cpp_num_part) 1 << (VAR_15 - VAR_3);
   else
     VAR_9.low |= (cpp_num_part) 1 << VAR_15;
 }
      if (VAR_15-- == 0)
 break;
      VAR_10.low = (VAR_10.low >> 1) | (VAR_10.high << (VAR_3 - 1));
      VAR_10.high >>= 1;
    }


  if (VAR_8 == VAR_0)
    {
      VAR_9.unsignedp = VAR_12;
      VAR_9.overflow = 0;
      if (!VAR_12)
 {
   if (VAR_13)
     VAR_9 = FUNC_5 (VAR_9, VAR_16);
   VAR_9.overflow = (FUNC_6 (VAR_9, VAR_16) ^ !VAR_13
        && !FUNC_7 (VAR_9));
 }

      return VAR_9;
    }


  VAR_6.unsignedp = VAR_12;
  VAR_6.overflow = 0;
  if (VAR_14)
    VAR_6 = FUNC_5 (VAR_6, VAR_16);

  return VAR_6;
}
