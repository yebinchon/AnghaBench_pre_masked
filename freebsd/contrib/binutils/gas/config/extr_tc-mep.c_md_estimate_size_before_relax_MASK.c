
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ segT ;
struct TYPE_9__ {TYPE_2__* insn; } ;
struct TYPE_10__ {int fr_subtype; TYPE_3__ fr_cgen; int fr_symbol; } ;
typedef TYPE_4__ fragS ;
struct TYPE_11__ {int insn_for_extern; int insn; int growth; } ;
struct TYPE_8__ {TYPE_1__* base; } ;
struct TYPE_7__ {int num; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 void* FUNC_2 (int) ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;

int
FUNC_3 (fragS * VAR_5, segT VAR_6)
{
  if (VAR_5->fr_subtype == 1)
    VAR_5->fr_subtype = FUNC_2 (VAR_5->fr_cgen.insn->base->num);

  if (FUNC_0 (VAR_5->fr_symbol) != VAR_6)
    {
      int VAR_7;

      VAR_7 = VAR_4[VAR_5->fr_subtype].insn_for_extern;
      VAR_5->fr_subtype = FUNC_2 (VAR_7);
    }

  if (VAR_0 && ! VAR_1
      && (FUNC_1 (VAR_3, VAR_6) & VAR_2))
    {

      switch (VAR_5->fr_cgen.insn->base->num)
 {
 case 128:
   VAR_5->fr_subtype = FUNC_2
     (VAR_4[VAR_5->fr_subtype].insn_for_extern);
   break;
 case 130:
   VAR_5->fr_subtype ++;
   break;
 case 129:
   VAR_5->fr_subtype ++;
   break;
 }
    }

  if (VAR_5->fr_cgen.insn->base
      && VAR_5->fr_cgen.insn->base->num
         != VAR_4[VAR_5->fr_subtype].insn)
    {
      int VAR_8= VAR_4[VAR_5->fr_subtype].insn;
      if (VAR_8 != -1)
 {
   VAR_5->fr_cgen.insn = (VAR_5->fr_cgen.insn
     - VAR_5->fr_cgen.insn->base->num
     + VAR_8);
 }
    }

  return VAR_4[VAR_5->fr_subtype].growth;
}
