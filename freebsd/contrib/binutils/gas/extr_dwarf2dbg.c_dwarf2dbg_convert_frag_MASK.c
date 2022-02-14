
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_3__ {int fr_var; scalar_t__ fr_offset; int fr_type; scalar_t__ fr_subtype; scalar_t__ fr_fix; scalar_t__ fr_literal; int fr_symbol; } ;
typedef TYPE_1__ fragS ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

void
FUNC_3 (fragS *VAR_1)
{
  offsetT VAR_2;

  VAR_2 = FUNC_2 (VAR_1->fr_symbol);




  FUNC_0 (VAR_1->fr_var >= (int) VAR_1->fr_subtype);

  FUNC_1 (VAR_1->fr_offset, VAR_2,
        VAR_1->fr_literal + VAR_1->fr_fix, VAR_1->fr_subtype);

  VAR_1->fr_fix += VAR_1->fr_subtype;
  VAR_1->fr_type = VAR_0;
  VAR_1->fr_var = 0;
  VAR_1->fr_offset = 0;
}
