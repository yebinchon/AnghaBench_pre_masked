
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int ip; } ;
struct TYPE_19__ {int ip; } ;
struct TYPE_18__ {int ip; } ;
struct TYPE_17__ {int ip; } ;
struct TYPE_16__ {int ip; } ;
struct TYPE_15__ {int ip; } ;
struct TYPE_14__ {int from; } ;
struct TYPE_13__ {int at; } ;
struct TYPE_12__ {int resumed; int ip; } ;
struct TYPE_11__ {TYPE_9__ mwait; TYPE_8__ exstop; TYPE_7__ tsx; TYPE_6__ exec_mode; TYPE_5__ async_vmcs; TYPE_4__ async_paging; TYPE_3__ async_branch; TYPE_2__ async_disabled; TYPE_1__ enabled; } ;
struct pt_event {int type; TYPE_10__ variant; int ip_suppressed; } ;
struct pt_block_decoder {int process_event; int ip; int enabled; struct pt_event event; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_event*,struct pt_event*,size_t) ;
 int FUNC_1 (struct pt_block_decoder*,int *) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_3 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_4 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_5 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_6 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_7 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_8 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_9 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_10 (struct pt_block_decoder*,struct pt_event*) ;
 int VAR_1 ;
 int VAR_2 ;
int FUNC_11(struct pt_block_decoder *VAR_3, struct pt_event *VAR_4,
   size_t VAR_5)
{
 struct pt_event *VAR_6;
 int VAR_7;

 if (!VAR_3 || !VAR_4)
  return -VAR_2;


 if (!VAR_3->process_event)
  return -VAR_1;

 VAR_6 = &VAR_3->event;
 switch (VAR_6->type) {
 case 141:




  if (VAR_6->variant.enabled.ip == VAR_3->ip)
   VAR_6->variant.enabled.resumed = 1;

  VAR_7 = FUNC_4(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 146:
  if (VAR_3->ip != VAR_6->variant.async_disabled.at)
   return -VAR_1;

  VAR_0;
 case 142:

  VAR_7 = FUNC_3(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 147:
  if (VAR_3->ip != VAR_6->variant.async_branch.from)
   return -VAR_1;

  VAR_7 = FUNC_2(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 145:
  if (!VAR_6->ip_suppressed &&
      VAR_3->ip != VAR_6->variant.async_paging.ip)
   return -VAR_1;

  VAR_0;
 case 135:
  VAR_7 = FUNC_7(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 144:
  if (!VAR_6->ip_suppressed &&
      VAR_3->ip != VAR_6->variant.async_vmcs.ip)
   return -VAR_1;

  VAR_0;
 case 128:
  VAR_7 = FUNC_10(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 136:
  VAR_7 = FUNC_6(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 140:
  if (!VAR_6->ip_suppressed &&
      VAR_3->ip != VAR_6->variant.exec_mode.ip)
   return -VAR_1;

  VAR_7 = FUNC_5(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 129:
  if (!VAR_6->ip_suppressed && VAR_3->ip != VAR_6->variant.tsx.ip)
   return -VAR_1;

  VAR_7 = FUNC_9(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 131:
  VAR_7 = FUNC_8(VAR_3, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  break;

 case 139:
  if (!VAR_6->ip_suppressed && VAR_3->enabled &&
      VAR_3->ip != VAR_6->variant.exstop.ip)
   return -VAR_1;

  VAR_3->process_event = 0;
  break;

 case 137:
  if (!VAR_6->ip_suppressed && VAR_3->enabled &&
      VAR_3->ip != VAR_6->variant.mwait.ip)
   return -VAR_1;

  VAR_3->process_event = 0;
  break;

 case 133:
 case 132:
 case 134:
 case 130:
 case 143:
 case 138:
  VAR_3->process_event = 0;
  break;
 }







 if (sizeof(*VAR_6) < VAR_5)
  VAR_5 = sizeof(*VAR_6);

 FUNC_0(VAR_4, VAR_6, VAR_5);


 return FUNC_1(VAR_3, ((void*)0));
}
