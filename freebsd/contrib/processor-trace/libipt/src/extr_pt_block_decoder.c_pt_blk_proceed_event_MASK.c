
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pt_insn_ext {int dummy; } ;
struct pt_insn {int dummy; } ;
struct TYPE_17__ {int ip; } ;
struct TYPE_16__ {int ip; } ;
struct TYPE_15__ {int ip; } ;
struct TYPE_14__ {int from; } ;
struct TYPE_10__ {int at; } ;
struct TYPE_18__ {TYPE_8__ mwait; TYPE_7__ exstop; TYPE_6__ tsx; TYPE_5__ async_branch; TYPE_1__ async_disabled; } ;
struct pt_event {int type; TYPE_9__ variant; int ip_suppressed; } ;
struct TYPE_11__ {int skd022; } ;
struct TYPE_12__ {TYPE_2__ errata; } ;
struct TYPE_13__ {TYPE_3__ config; } ;
struct pt_block_decoder {int bound_paging; int bound_vmcs; int bound_ptwrite; int enabled; TYPE_4__ query; struct pt_event event; int process_event; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_1 (struct pt_block_decoder*,struct pt_insn*,struct pt_insn_ext*) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_block*,struct pt_event*) ;
 int FUNC_3 (struct pt_block_decoder*,struct pt_block*,struct pt_event*) ;
 int FUNC_4 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,struct pt_event*) ;
 int FUNC_5 (struct pt_block_decoder*,struct pt_block*,struct pt_event*) ;
 int FUNC_6 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,int ) ;
 int FUNC_7 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,int ) ;
 int FUNC_8 (struct pt_block_decoder*,struct pt_block*,struct pt_insn*,struct pt_insn_ext*,struct pt_event*) ;
 int FUNC_9 (struct pt_block_decoder*,struct pt_insn*) ;
 int FUNC_10 (struct pt_block_decoder*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct pt_block_decoder *VAR_5,
    struct pt_block *VAR_6)
{
 struct pt_insn_ext VAR_7;
 struct pt_insn VAR_8;
 struct pt_event *VAR_9;
 int VAR_10;

 if (!VAR_5 || !VAR_5->process_event || !VAR_6)
  return -VAR_3;

 VAR_9 = &VAR_5->event;
 switch (VAR_9->type) {
 case 141:
  break;

 case 142:
  VAR_10 = FUNC_4(VAR_5, VAR_6, &VAR_8,
          &VAR_7, VAR_9);
  if (VAR_10 <= 0) {




   if (VAR_10 != -VAR_2)
    return VAR_10;

   VAR_10 = FUNC_9(VAR_5, &VAR_8);
   if (VAR_10 < 0)
    return VAR_10;
  }

  break;

 case 146:
  VAR_10 = FUNC_7(VAR_5, VAR_6, &VAR_8, &VAR_7,
           VAR_9->variant.async_disabled.at);
  if (VAR_10 <= 0)
   return VAR_10;

  if (VAR_5->query.config.errata.skd022) {
   VAR_10 = FUNC_0(VAR_5, VAR_9);
   if (VAR_10 != 0) {
    if (VAR_10 < 0)
     return VAR_10;




    return FUNC_11(VAR_5, VAR_6);
   }
  }

  break;

 case 147:
  VAR_10 = FUNC_7(VAR_5, VAR_6, &VAR_8, &VAR_7,
           VAR_9->variant.async_branch.from);
  if (VAR_10 <= 0)
   return VAR_10;

  break;

 case 135:
  if (!VAR_5->enabled)
   break;

  VAR_10 = FUNC_6(VAR_5, VAR_6, &VAR_8, &VAR_7,
      VAR_0);
  if (VAR_10 <= 0)
   return VAR_10;




  VAR_5->bound_paging = 1;

  return FUNC_1(VAR_5, &VAR_8, &VAR_7);

 case 145:
  VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_9);
  if (VAR_10 <= 0)
   return VAR_10;

  break;

 case 128:
  if (!VAR_5->enabled)
   break;

  VAR_10 = FUNC_6(VAR_5, VAR_6, &VAR_8, &VAR_7,
      VAR_1);
  if (VAR_10 <= 0)
   return VAR_10;




  VAR_5->bound_vmcs = 1;

  return FUNC_1(VAR_5, &VAR_8, &VAR_7);

 case 144:
  VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_9);
  if (VAR_10 <= 0)
   return VAR_10;

  break;

 case 136:
  break;

 case 140:
  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_9);
  if (VAR_10 <= 0)
   return VAR_10;

  break;

 case 129:
  if (VAR_9->ip_suppressed)
   break;

  VAR_10 = FUNC_7(VAR_5, VAR_6, &VAR_8, &VAR_7,
           VAR_9->variant.tsx.ip);
  if (VAR_10 <= 0)
   return VAR_10;

  break;

 case 131:
  break;

 case 139:
  if (!VAR_5->enabled || VAR_9->ip_suppressed)
   break;

  VAR_10 = FUNC_7(VAR_5, VAR_6, &VAR_8, &VAR_7,
           VAR_9->variant.exstop.ip);
  if (VAR_10 <= 0)
   return VAR_10;

  break;

 case 137:
  if (!VAR_5->enabled || VAR_9->ip_suppressed)
   break;

  VAR_10 = FUNC_7(VAR_5, VAR_6, &VAR_8, &VAR_7,
           VAR_9->variant.mwait.ip);
  if (VAR_10 <= 0)
   return VAR_10;

  break;

 case 133:
 case 132:
  break;

 case 134:
  if (!VAR_5->enabled)
   break;

  VAR_10 = FUNC_8(VAR_5, VAR_6, &VAR_8,
         &VAR_7, VAR_9);
  if (VAR_10 <= 0)
   return VAR_10;




  VAR_5->bound_ptwrite = 1;

  return FUNC_1(VAR_5, &VAR_8, &VAR_7);

 case 130:
 case 143:
 case 138:
  break;
 }

 return FUNC_10(VAR_5, VAR_4);
}
