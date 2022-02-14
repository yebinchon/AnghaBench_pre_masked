
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct pt_insn_ext {int dummy; } ;
struct TYPE_15__ {int skd022; } ;
struct TYPE_16__ {TYPE_2__ errata; } ;
struct TYPE_17__ {TYPE_3__ config; } ;
struct TYPE_12__ {int ip; } ;
struct TYPE_22__ {int ip; } ;
struct TYPE_21__ {int ip; } ;
struct TYPE_20__ {int ip; } ;
struct TYPE_19__ {int ip; } ;
struct TYPE_18__ {int from; } ;
struct TYPE_14__ {int at; } ;
struct TYPE_13__ {TYPE_10__ mwait; TYPE_9__ exstop; TYPE_8__ async_vmcs; TYPE_7__ async_paging; TYPE_6__ exec_mode; TYPE_5__ async_branch; TYPE_1__ async_disabled; } ;
struct pt_event {int type; TYPE_11__ variant; int ip_suppressed; } ;
struct pt_insn_decoder {int enabled; int ip; TYPE_4__ query; struct pt_event event; } ;
struct pt_insn {int dummy; } ;


 int FUNC_0 (struct pt_insn_decoder*) ;
 int FUNC_1 (struct pt_insn_decoder*) ;
 int FUNC_2 (struct pt_insn_decoder*,struct pt_insn const*,struct pt_insn_ext const*,struct pt_event*) ;
 int FUNC_3 (struct pt_insn_decoder*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct pt_insn_decoder *VAR_2,
      const struct pt_insn *VAR_3,
      const struct pt_insn_ext *VAR_4)
{
 struct pt_event *VAR_5;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 <= 0) {
  if (VAR_6 < 0)
   return VAR_6;

  return FUNC_3(VAR_2, 0);
 }

 VAR_5 = &VAR_2->event;
 switch (VAR_5->type) {
 case 142:
  break;

 case 141:
  return FUNC_3(VAR_2, VAR_1);

 case 146:
  if (VAR_5->variant.async_disabled.at != VAR_2->ip)
   break;

  if (VAR_2->query.config.errata.skd022) {
   int VAR_7;

   VAR_7 = FUNC_1(VAR_2);
   if (VAR_7 != 0) {
    if (VAR_7 < 0)
     return VAR_7;





    break;
   }
  }

  return FUNC_3(VAR_2, VAR_1);

 case 129:
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_6 != 0) {
   if (VAR_6 < 0)
    return VAR_6;

   break;
  }

  return FUNC_3(VAR_2, VAR_1);

 case 147:
  if (VAR_5->variant.async_branch.from != VAR_2->ip)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 136:
  return FUNC_3(VAR_2, VAR_1);

 case 140:
  if (!VAR_5->ip_suppressed &&
      VAR_5->variant.exec_mode.ip != VAR_2->ip)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 135:
  if (VAR_2->enabled)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 145:
  if (!VAR_5->ip_suppressed &&
      VAR_5->variant.async_paging.ip != VAR_2->ip)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 128:
  if (VAR_2->enabled)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 144:
  if (!VAR_5->ip_suppressed &&
      VAR_5->variant.async_vmcs.ip != VAR_2->ip)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 131:
  return FUNC_3(VAR_2, VAR_1);

 case 139:
  if (!VAR_5->ip_suppressed && VAR_2->enabled &&
      VAR_2->ip != VAR_5->variant.exstop.ip)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 137:
  if (!VAR_5->ip_suppressed && VAR_2->enabled &&
      VAR_2->ip != VAR_5->variant.mwait.ip)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 133:
 case 132:
  return FUNC_3(VAR_2, VAR_1);

 case 134:
  if (VAR_2->enabled)
   break;

  return FUNC_3(VAR_2, VAR_1);

 case 130:
 case 143:
 case 138:
  return FUNC_3(VAR_2, VAR_1);
 }

 return FUNC_3(VAR_2, 0);
}
