
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {scalar_t__ iclass; } ;
struct TYPE_4__ {scalar_t__ end_on_jump; scalar_t__ end_on_call; } ;
struct TYPE_5__ {TYPE_1__ block; } ;
struct TYPE_6__ {TYPE_2__ variant; } ;
struct pt_block_decoder {scalar_t__ ip; TYPE_3__ flags; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_1 (scalar_t__*,struct pt_insn*,struct pt_insn_ext*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pt_block_decoder *VAR_3,
    struct pt_block *VAR_4, struct pt_insn *VAR_5,
    struct pt_insn_ext *VAR_6, uint64_t VAR_7)
{
 int VAR_8;

 if (!VAR_3 || !VAR_5)
  return -VAR_0;

 for (;;) {



  if (VAR_3->ip == VAR_7)
   return 1;

  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_8 <= 0)
   return VAR_8;


  VAR_8 = FUNC_1(&VAR_3->ip, VAR_5, VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
  if ((VAR_3->flags.variant.block.end_on_call &&
       (VAR_5->iclass == VAR_1)) ||
      (VAR_3->flags.variant.block.end_on_jump &&
       (VAR_5->iclass == VAR_2))) {
   return (VAR_3->ip == VAR_7 ? 1 : 0);
  }
 }
}
