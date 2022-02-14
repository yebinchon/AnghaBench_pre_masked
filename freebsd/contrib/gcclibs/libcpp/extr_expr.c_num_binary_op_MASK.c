
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_20__ {int skip_eval; } ;
struct TYPE_21__ {TYPE_1__ state; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_22__ {int unsignedp; size_t low; int overflow; scalar_t__ high; } ;
typedef TYPE_3__ cpp_num ;


 int VAR_0 ;


 size_t FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;


 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 TYPE_3__ FUNC_3 (TYPE_3__,size_t,size_t) ;
 TYPE_3__ FUNC_4 (TYPE_3__,size_t) ;
 int FUNC_5 (TYPE_3__,size_t) ;
 TYPE_3__ FUNC_6 (TYPE_3__,size_t,size_t) ;
 TYPE_3__ FUNC_7 (TYPE_3__,size_t) ;
 size_t VAR_2 ;

__attribute__((used)) static cpp_num
FUNC_8 (cpp_reader *VAR_3, cpp_num VAR_4, cpp_num VAR_5, enum cpp_ttype VAR_6)
{
  cpp_num VAR_7;
  size_t VAR_8 = FUNC_0 (VAR_3, VAR_8);
  size_t VAR_9;

  switch (VAR_6)
    {

    case 131:
    case 128:
      if (!VAR_5.unsignedp && !FUNC_5 (VAR_5, VAR_8))
 {

   if (VAR_6 == 131)
     VAR_6 = 128;
   else
     VAR_6 = 131;
   VAR_5 = FUNC_4 (VAR_5, VAR_8);
 }
      if (VAR_5.high)
 VAR_9 = ~0;
      else
 VAR_9 = VAR_5.low;
      if (VAR_6 == 131)
 VAR_4 = FUNC_3 (VAR_4, VAR_8, VAR_9);
      else
 VAR_4 = FUNC_6 (VAR_4, VAR_8, VAR_9);
      break;


    case 130:
      VAR_5 = FUNC_4 (VAR_5, VAR_8);
    case 129:
      VAR_7.low = VAR_4.low + VAR_5.low;
      VAR_7.high = VAR_4.high + VAR_5.high;
      if (VAR_7.low < VAR_4.low)
 VAR_7.high++;
      VAR_7.unsignedp = VAR_4.unsignedp || VAR_5.unsignedp;
      VAR_7.overflow = 0;

      VAR_7 = FUNC_7 (VAR_7, VAR_8);
      if (!VAR_7.unsignedp)
 {
   bool VAR_10 = FUNC_5 (VAR_4, VAR_8);
   VAR_7.overflow = (VAR_10 == FUNC_5 (VAR_5, VAR_8)
        && VAR_10 != FUNC_5 (VAR_7, VAR_8));
 }
      return VAR_7;


    default:
      if (FUNC_1 (VAR_3) && (!FUNC_0 (VAR_3, VAR_1)
       || !VAR_3->state.skip_eval))
 FUNC_2 (VAR_3, VAR_0,
     "comma operator in operand of #if");
      VAR_4 = VAR_5;
      break;
    }

  return VAR_4;
}
