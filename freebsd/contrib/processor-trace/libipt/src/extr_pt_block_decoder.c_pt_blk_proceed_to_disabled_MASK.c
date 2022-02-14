
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pt_insn_ext {int dummy; } ;
struct pt_insn {int dummy; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_9__ {TYPE_1__ disabled; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ ip_suppressed; } ;
struct TYPE_13__ {scalar_t__ skl014; } ;
struct TYPE_10__ {scalar_t__ addr_cfg; } ;
struct TYPE_11__ {TYPE_3__ config; } ;
struct TYPE_14__ {TYPE_6__ errata; TYPE_4__ addr_filter; } ;
struct TYPE_12__ {TYPE_7__ config; } ;
struct pt_block_decoder {TYPE_5__ query; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_1 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,int ) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct pt_block_decoder *VAR_2,
          struct pt_block *VAR_3,
          struct pt_insn *VAR_4,
          struct pt_insn_ext *VAR_5,
          const struct pt_event *VAR_6)
{
 if (!VAR_2 || !VAR_3 || !VAR_6)
  return -VAR_1;

 if (VAR_6->ip_suppressed) {
  if (VAR_2->query.config.addr_filter.config.addr_cfg &&
      VAR_2->query.config.errata.skl014)
   return FUNC_0(VAR_2, VAR_3, VAR_4,
           VAR_5);







  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_0);
 } else
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6->variant.disabled.ip);
}
