
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long valueT ;
struct TYPE_5__ {long fx_where; int fx_r_type; int fx_line; int fx_file; int fx_addsy; TYPE_1__* fx_frag; } ;
typedef TYPE_2__ fixS ;
struct TYPE_4__ {long fr_address; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

long
FUNC_3 (fixS *VAR_1)
{
  valueT VAR_2 = VAR_1->fx_where + VAR_1->fx_frag->fr_address;
  switch (VAR_1->fx_r_type)
    {
    case 129:
    case 128:

      return VAR_2 + 4;
    default:

      if (VAR_1->fx_addsy && FUNC_0 (VAR_1->fx_addsy) != VAR_0)
 FUNC_2 (VAR_1->fx_file, VAR_1->fx_line,
        FUNC_1("PC relative MIPS16 instruction references a different section"));
      return VAR_2;
    }
}
