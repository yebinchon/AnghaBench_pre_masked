
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;
struct TYPE_15__ {int skip_eval; } ;
struct TYPE_16__ {TYPE_1__ state; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_17__ {int overflow; int unsignedp; int high; int low; } ;
typedef TYPE_3__ cpp_num ;



 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;


 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 TYPE_3__ FUNC_3 (TYPE_3__,int ) ;
 TYPE_3__ FUNC_4 (TYPE_3__,int ) ;
 int FUNC_5 (TYPE_3__) ;
 int VAR_1 ;

__attribute__((used)) static cpp_num
FUNC_6 (cpp_reader *VAR_2, cpp_num VAR_3, enum cpp_ttype VAR_4)
{
  switch (VAR_4)
    {
    case 128:
      if (FUNC_1 (VAR_2) && !VAR_2->state.skip_eval)
 FUNC_2 (VAR_2, VAR_0,
     "traditional C rejects the unary plus operator");
      VAR_3.overflow = 0;
      break;

    case 129:
      VAR_3 = FUNC_3 (VAR_3, FUNC_0 (VAR_2, VAR_1));
      break;

    case 130:
      VAR_3.high = ~VAR_3.high;
      VAR_3.low = ~VAR_3.low;
      VAR_3 = FUNC_4 (VAR_3, FUNC_0 (VAR_2, VAR_1));
      VAR_3.overflow = 0;
      break;

    default:
      VAR_3.low = FUNC_5 (VAR_3);
      VAR_3.high = 0;
      VAR_3.overflow = 0;
      VAR_3.unsignedp = 0;
      break;
    }

  return VAR_3;
}
