
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {char const* single; char const** multi; char const* (* function ) (int ,int ) ;} ;
struct TYPE_6__ {int output_format; TYPE_1__ output; } ;
struct TYPE_5__ {int operand; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 char const* FUNC_2 (int ,int ) ;
 size_t VAR_2 ;

const char *
FUNC_3 (int VAR_3, rtx VAR_4)
{
  switch (VAR_0[VAR_3].output_format)
    {
    case 128:
      return VAR_0[VAR_3].output.single;
    case 129:
      return VAR_0[VAR_3].output.multi[VAR_2];
    case 130:
      FUNC_0 (VAR_4);
      return (*VAR_0[VAR_3].output.function) (VAR_1.operand, VAR_4);

    default:
      FUNC_1 ();
    }
}
