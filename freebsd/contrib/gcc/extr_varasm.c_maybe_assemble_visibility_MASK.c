
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum symbol_visibility { ____Placeholder_symbol_visibility } symbol_visibility ;
struct TYPE_3__ {int (* visibility ) (int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 TYPE_2__ VAR_1 ;

int
FUNC_2 (tree VAR_2)
{
  enum symbol_visibility VAR_3 = FUNC_0 (VAR_2);

  if (VAR_3 != VAR_0)
    {
      VAR_1.asm_out.visibility (VAR_2, VAR_3);
      return 1;
    }
  else
    return 0;
}
