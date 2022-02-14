
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int ip; } ;
struct TYPE_14__ {int ip; } ;
struct TYPE_13__ {int ip; } ;
struct TYPE_12__ {int ip; } ;
struct TYPE_11__ {int from; } ;
struct TYPE_10__ {int at; } ;
struct TYPE_9__ {int resumed; int ip; } ;
struct TYPE_16__ {TYPE_7__ mwait; TYPE_6__ exstop; TYPE_5__ async_vmcs; TYPE_4__ async_paging; TYPE_3__ async_branch; TYPE_2__ async_disabled; TYPE_1__ enabled; } ;
struct pt_event {int type; TYPE_8__ variant; int ip_suppressed; } ;
struct pt_insn_decoder {int iext; int insn; scalar_t__ process_insn; scalar_t__ process_event; int ip; int enabled; struct pt_event event; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_event*,struct pt_event*,size_t) ;
 int FUNC_1 (struct pt_insn_decoder*,int *,int *) ;
 int FUNC_2 (struct pt_insn_decoder*,int *,int *) ;
 int FUNC_3 (struct pt_insn_decoder*) ;
 int FUNC_4 (struct pt_insn_decoder*) ;
 int FUNC_5 (struct pt_insn_decoder*) ;
 int FUNC_6 (struct pt_insn_decoder*) ;
 int FUNC_7 (struct pt_insn_decoder*) ;
 int FUNC_8 (struct pt_insn_decoder*) ;
 int FUNC_9 (struct pt_insn_decoder*) ;
 int FUNC_10 (struct pt_insn_decoder*) ;
 int FUNC_11 (struct pt_insn_decoder*) ;
 int FUNC_12 (struct pt_insn_decoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_13(struct pt_insn_decoder *VAR_4, struct pt_event *VAR_5,
    size_t VAR_6)
{
 struct pt_event *VAR_7;
 int VAR_8;

 if (!VAR_4 || !VAR_5)
  return -VAR_2;


 if (!VAR_4->process_event)
  return -VAR_1;

 VAR_7 = &VAR_4->event;
 switch (VAR_7->type) {
 default:





  return -VAR_1;

 case 141:




  if (VAR_4->ip == VAR_7->variant.enabled.ip)
   VAR_7->variant.enabled.resumed = 1;

  VAR_8 = FUNC_6(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 146:
  if (!VAR_7->ip_suppressed &&
      VAR_4->ip != VAR_7->variant.async_disabled.at)
   return -VAR_1;

  VAR_0;
 case 142:
  VAR_8 = FUNC_5(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 147:
  if (VAR_4->ip != VAR_7->variant.async_branch.from)
   return -VAR_1;

  VAR_8 = FUNC_4(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 145:
  if (!VAR_7->ip_suppressed &&
      VAR_4->ip != VAR_7->variant.async_paging.ip)
   return -VAR_1;

  VAR_0;
 case 135:
  VAR_8 = FUNC_9(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 144:
  if (!VAR_7->ip_suppressed &&
      VAR_4->ip != VAR_7->variant.async_vmcs.ip)
   return -VAR_1;

  VAR_0;
 case 128:
  VAR_8 = FUNC_12(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 136:
  VAR_8 = FUNC_8(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 140:
  VAR_8 = FUNC_7(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 129:
  VAR_8 = FUNC_11(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 131:
  VAR_8 = FUNC_10(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  break;

 case 139:
  if (!VAR_7->ip_suppressed && VAR_4->enabled &&
      VAR_4->ip != VAR_7->variant.exstop.ip)
   return -VAR_1;

  break;

 case 137:
  if (!VAR_7->ip_suppressed && VAR_4->enabled &&
      VAR_4->ip != VAR_7->variant.mwait.ip)
   return -VAR_1;

  break;

 case 133:
 case 132:
 case 134:
 case 130:
 case 143:
 case 138:
  break;
 }







 if (sizeof(*VAR_7) < VAR_6)
  VAR_6 = sizeof(*VAR_7);

 FUNC_0(VAR_5, VAR_7, VAR_6);


 VAR_4->process_event = 0;







 if (VAR_4->process_insn) {
  VAR_8 = FUNC_1(VAR_4, &VAR_4->insn,
        &VAR_4->iext);

  if (VAR_8 != 0) {
   if (VAR_8 < 0)
    return VAR_8;

   if (VAR_8 & VAR_3)
    return VAR_8;
  }


  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8 < 0)
   return VAR_8;
 }


 return FUNC_2(VAR_4, ((void*)0), ((void*)0));
}
