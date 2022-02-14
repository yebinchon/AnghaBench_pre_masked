
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_insn_ext {int dummy; } ;
struct pt_insn {int ip; } ;
struct TYPE_3__ {int ip; } ;
struct TYPE_4__ {TYPE_1__ ptwrite; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ ip_suppressed; } ;
struct pt_block_decoder {int dummy; } ;
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
         struct pt_event *VAR_6)
{
 int VAR_7;

 if (!VAR_4 || !VAR_6)
  return -VAR_1;
 if (VAR_6->ip_suppressed) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_0);
  if (VAR_7 <= 0)
   return VAR_7;





  VAR_6->variant.ptwrite.ip = VAR_4->ip;
  VAR_6->ip_suppressed = 0;
 } else {
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6->variant.ptwrite.ip);
  if (VAR_7 <= 0)
   return VAR_7;
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_7 <= 0)
   return VAR_7;
 }

 return 1;
}
