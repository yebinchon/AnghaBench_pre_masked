
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct pt_insn_ext {int dummy; } ;
struct pt_insn {scalar_t__ iclass; } ;
struct pt_conf_addr_filter {int dummy; } ;
struct TYPE_8__ {scalar_t__ end_on_jump; scalar_t__ end_on_call; } ;
struct TYPE_9__ {TYPE_3__ block; } ;
struct TYPE_10__ {TYPE_4__ variant; } ;
struct TYPE_6__ {struct pt_conf_addr_filter addr_filter; } ;
struct TYPE_7__ {TYPE_1__ config; } ;
struct pt_block_decoder {TYPE_5__ flags; int ip; TYPE_2__ query; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,int ) ;
 int FUNC_1 (struct pt_conf_addr_filter const*,int ) ;
 scalar_t__ FUNC_2 (struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_3 (int *,struct pt_insn*,struct pt_insn_ext*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct pt_block_decoder *VAR_4,
     struct pt_block *VAR_5, struct pt_insn *VAR_6,
     struct pt_insn_ext *VAR_7)
{
 const struct pt_conf_addr_filter *VAR_8;
 int VAR_9;

 if (!VAR_4 || !VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_1;

 VAR_8 = &VAR_4->query.config.addr_filter;
 for (;;) {
  uint64_t VAR_10;

  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_0);
  if (VAR_9 <= 0)
   break;




  if (FUNC_2(VAR_6, VAR_7))
   break;


  VAR_9 = FUNC_3(&VAR_10, VAR_6, VAR_7);
  if (VAR_9 < 0)
   break;

  VAR_9 = FUNC_1(VAR_8, VAR_10);
  if (VAR_9 <= 0) {





   if (!VAR_9)
    VAR_9 = 1;

   break;
  }




  VAR_4->ip = VAR_10;







  if ((VAR_4->flags.variant.block.end_on_call &&
      (VAR_6->iclass == VAR_2)) ||
      (VAR_4->flags.variant.block.end_on_jump &&
      (VAR_6->iclass == VAR_3)))
   break;
 }

 return VAR_9;
}
