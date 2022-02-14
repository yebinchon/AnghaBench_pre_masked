
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int (* destructor ) (int ,int ) ;int (* constructor ) (int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; scalar_t__ have_ctors_dtors; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_7 (int ) ;

void
FUNC_8 (tree VAR_3)
{

  if (!FUNC_0 (VAR_3)
      || FUNC_0 (VAR_3) == VAR_1)
    return;

  FUNC_7 (VAR_3);

  if (FUNC_2 (VAR_3)
      && VAR_2.have_ctors_dtors)
    VAR_2.asm_out.constructor (FUNC_4 (FUNC_1 (VAR_3), 0),
     VAR_0);
  if (FUNC_3 (VAR_3)
      && VAR_2.have_ctors_dtors)
    VAR_2.asm_out.destructor (FUNC_4 (FUNC_1 (VAR_3), 0),
    VAR_0);
}
