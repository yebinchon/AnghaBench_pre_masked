
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_14__ {int ip; } ;
struct TYPE_13__ {int ip; } ;
struct TYPE_24__ {int ip; } ;
struct TYPE_23__ {int ip; } ;
struct TYPE_22__ {int ip; } ;
struct TYPE_21__ {int from; } ;
struct TYPE_17__ {int at; } ;
struct TYPE_16__ {int ip; } ;
struct TYPE_15__ {TYPE_11__ mwait; TYPE_10__ exstop; TYPE_9__ exec_mode; TYPE_8__ async_vmcs; TYPE_7__ async_paging; TYPE_6__ async_branch; TYPE_2__ async_disabled; TYPE_1__ disabled; } ;
struct pt_event {int type; int ip_suppressed; TYPE_12__ variant; } ;
struct TYPE_18__ {int skd022; } ;
struct TYPE_19__ {TYPE_3__ errata; } ;
struct TYPE_20__ {TYPE_4__ config; } ;
struct pt_block_decoder {int bound_paging; int bound_vmcs; int bound_ptwrite; int iext; int insn; int process_insn; int enabled; int ip; TYPE_5__ query; struct pt_event event; } ;
struct pt_block {int dummy; } ;


 int FUNC_0 (struct pt_block_decoder*) ;
 int FUNC_1 (struct pt_block_decoder*) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_event*) ;
 int FUNC_3 (struct pt_block_decoder*,struct pt_block*,struct pt_event*) ;
 int FUNC_4 (struct pt_block_decoder*) ;
 int FUNC_5 (struct pt_block_decoder*,int *) ;
 int FUNC_6 (struct pt_block_decoder*,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(struct pt_block_decoder *VAR_3,
      struct pt_block *VAR_4)
{
 struct pt_event *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 <= 0) {
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  return FUNC_6(VAR_3, 0);
 }

 VAR_5 = &VAR_3->event;
 switch (VAR_5->type) {
 case 142:



  if (!VAR_3->process_insn)
   break;


  if (VAR_5->ip_suppressed &&
      FUNC_9(&VAR_3->insn, &VAR_3->iext))
   return FUNC_6(VAR_3, VAR_2);







  VAR_6 = FUNC_11(&VAR_3->ip, &VAR_3->insn,
      &VAR_3->iext);
  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_0)
    return VAR_6;

   VAR_6 = FUNC_5(VAR_3,
             &VAR_3->insn);
   if (VAR_6 < 0)
    return VAR_6;

   return FUNC_6(VAR_3, VAR_2);
  }


  VAR_6 = FUNC_0(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;


  if (!VAR_5->ip_suppressed &&
      VAR_3->ip == VAR_5->variant.disabled.ip)
   return FUNC_6(VAR_3, VAR_2);

  break;

 case 141:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  return FUNC_6(VAR_3, VAR_2);

 case 146:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  if (VAR_3->ip != VAR_5->variant.async_disabled.at)
   break;

  if (VAR_3->query.config.errata.skd022) {
   VAR_6 = FUNC_2(VAR_3, VAR_5);
   if (VAR_6 != 0) {
    if (VAR_6 < 0)
     return VAR_6;






    break;
   }
  }

  return FUNC_6(VAR_3, VAR_2);

 case 147:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  if (VAR_3->ip != VAR_5->variant.async_branch.from)
   break;

  return FUNC_6(VAR_3, VAR_2);

 case 135:

  if (!VAR_3->enabled)
   return FUNC_6(VAR_3, VAR_2);







  if (!VAR_3->process_insn || VAR_3->bound_paging)
   break;





  if (!FUNC_7(&VAR_3->insn, &VAR_3->iext))
   break;




  VAR_3->bound_paging = 1;

  return FUNC_6(VAR_3, VAR_2);

 case 145:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  if (!VAR_5->ip_suppressed &&
      VAR_3->ip != VAR_5->variant.async_paging.ip)
   break;

  return FUNC_6(VAR_3, VAR_2);

 case 128:

  if (!VAR_3->enabled)
   return FUNC_6(VAR_3, VAR_2);







  if (!VAR_3->process_insn || VAR_3->bound_vmcs)
   break;





  if (!FUNC_8(&VAR_3->insn, &VAR_3->iext))
   break;




  VAR_3->bound_vmcs = 1;

  return FUNC_6(VAR_3, VAR_2);

 case 144:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  if (!VAR_5->ip_suppressed &&
      VAR_3->ip != VAR_5->variant.async_vmcs.ip)
   break;

  return FUNC_6(VAR_3, VAR_2);

 case 136:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  return FUNC_6(VAR_3, VAR_2);

 case 140:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  if (!VAR_5->ip_suppressed &&
      VAR_3->ip != VAR_5->variant.exec_mode.ip)
   break;

  return FUNC_6(VAR_3, VAR_2);

 case 129:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (VAR_6 != 0) {
   if (VAR_6 < 0)
    return VAR_6;

   break;
  }

  return FUNC_6(VAR_3, VAR_2);

 case 131:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  return FUNC_6(VAR_3, VAR_2);

 case 139:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  if (!VAR_5->ip_suppressed && VAR_3->enabled &&
      VAR_3->ip != VAR_5->variant.exstop.ip)
   break;

  return FUNC_6(VAR_3, VAR_2);

 case 137:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  if (!VAR_5->ip_suppressed && VAR_3->enabled &&
      VAR_3->ip != VAR_5->variant.mwait.ip)
   break;

  return FUNC_6(VAR_3, VAR_2);

 case 133:
 case 132:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  return FUNC_6(VAR_3, VAR_2);

 case 134:

  if (!VAR_3->enabled)
   return FUNC_6(VAR_3, VAR_2);






  if (!VAR_3->process_insn || VAR_3->bound_ptwrite)
   break;





  if (!VAR_5->ip_suppressed ||
      !FUNC_10(&VAR_3->insn, &VAR_3->iext))
   break;




  VAR_3->bound_ptwrite = 1;

  return FUNC_6(VAR_3, VAR_2);

 case 130:
 case 143:
 case 138:

  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  return FUNC_6(VAR_3, VAR_2);
 }


 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_6(VAR_3, 0);
}
