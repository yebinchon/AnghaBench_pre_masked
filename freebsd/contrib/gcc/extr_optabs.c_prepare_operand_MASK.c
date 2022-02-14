
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int mode; int (* predicate ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_3 (int VAR_3, rtx VAR_4, int VAR_5, enum machine_mode VAR_6,
   enum machine_mode VAR_7, int VAR_8)
{
  if (VAR_6 != VAR_7)
    VAR_4 = FUNC_0 (VAR_7, VAR_6, VAR_4, VAR_8);

  if (!VAR_1[VAR_3].operand[VAR_5].predicate
      (VAR_4, VAR_1[VAR_3].operand[VAR_5].mode))
    {
      if (VAR_2)
 return VAR_0;
      VAR_4 = FUNC_1 (VAR_1[VAR_3].operand[VAR_5].mode, VAR_4);
    }

  return VAR_4;
}
