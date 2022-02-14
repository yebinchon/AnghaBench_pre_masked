
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
struct TYPE_3__ {int (* destructor ) (int ,int) ;int (* constructor ) (int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; scalar_t__ have_ctors_dtors; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_9 (int VAR_2, int VAR_3, tree VAR_4)
{
  tree VAR_5;


  FUNC_5 (VAR_4);
  VAR_5 = FUNC_6 (0);
  FUNC_4 (VAR_5);




  if (VAR_0)
    return;

  if (VAR_1.have_ctors_dtors)
    {
      rtx VAR_6 = FUNC_1 (FUNC_0 (VAR_5), 0);
      FUNC_2 (FUNC_3 (VAR_5));
      if (VAR_2 == 'I')
 (* VAR_1.asm_out.constructor) (VAR_6, VAR_3);
      else
 (* VAR_1.asm_out.destructor) (VAR_6, VAR_3);
    }
}
