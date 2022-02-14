
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_insn_ext {int dummy; } ;
struct TYPE_4__ {int config; } ;
struct TYPE_5__ {unsigned long long ip; } ;
struct TYPE_6__ {TYPE_2__ ptwrite; } ;
struct pt_event {int type; TYPE_3__ variant; int ip_suppressed; } ;
struct pt_insn_decoder {unsigned long long ip; int bound_paging; int bound_vmcs; int bound_ptwrite; TYPE_1__ query; struct pt_event event; } ;
struct pt_insn {unsigned long long ip; unsigned long long size; int iclass; } ;


 int FUNC_0 (struct pt_insn_decoder*) ;
 int FUNC_1 (struct pt_event*,struct pt_insn const*,struct pt_insn_ext const*,int *) ;
 int FUNC_2 (struct pt_insn const*,struct pt_insn_ext const*) ;
 int FUNC_3 (struct pt_insn const*,struct pt_insn_ext const*) ;
 int FUNC_4 (struct pt_insn const*,struct pt_insn_ext const*) ;
 int FUNC_5 (unsigned long long*,struct pt_insn const*,struct pt_insn_ext const*) ;
 int FUNC_6 (struct pt_insn_decoder*,struct pt_insn const*,struct pt_insn_ext const*) ;
 int FUNC_7 (struct pt_insn_decoder*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct pt_insn_decoder *VAR_3,
        const struct pt_insn *VAR_4,
        const struct pt_insn_ext *VAR_5)
{
 struct pt_event *VAR_6;
 int VAR_7;

 if (!VAR_3)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 <= 0)
  return VAR_7;

 VAR_6 = &VAR_3->event;
 switch (VAR_6->type) {
 case 143:
 case 138:
 case 147:
 case 146:
 case 148:
 case 149:
 case 142:
 case 131:
 case 133:
 case 141:
 case 139:
 case 135:
 case 134:
 case 132:
 case 145:
 case 140:

  return 0;

 case 144:
  VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5,
         &VAR_3->query.config);
  if (VAR_7 <= 0)
   return VAR_7;





  VAR_7 = FUNC_5(&VAR_3->ip, VAR_4, VAR_5);
  if (VAR_7 < 0) {

   VAR_3->ip = 0ull;
   if (VAR_7 != -VAR_0)
    return VAR_7;

   switch (VAR_4->iclass) {
   case 129:
   case 128:
    VAR_3->ip = VAR_4->ip + VAR_4->size;
    break;

   default:
    break;
   }
  }

  break;

 case 137:

  if (VAR_3->bound_paging)
   return 0;

  if (!FUNC_2(VAR_4, VAR_5))
   return 0;




  VAR_3->bound_paging = 1;

  return FUNC_6(VAR_3, VAR_4, VAR_5);

 case 130:

  if (VAR_3->bound_vmcs)
   return 0;

  if (!FUNC_3(VAR_4, VAR_5))
   return 0;




  VAR_3->bound_vmcs = 1;

  return FUNC_6(VAR_3, VAR_4, VAR_5);

 case 136:

  if (VAR_3->bound_ptwrite)
   return 0;

  if (VAR_6->ip_suppressed) {
   if (!FUNC_4(VAR_4, VAR_5))
    return 0;




   VAR_6->variant.ptwrite.ip = VAR_3->ip;
   VAR_6->ip_suppressed = 0;
  } else {







   if (VAR_3->ip != VAR_6->variant.ptwrite.ip)
    return 0;
  }




  VAR_3->bound_ptwrite = 1;

  return FUNC_6(VAR_3, VAR_4, VAR_5);
 }

 return FUNC_7(VAR_3, VAR_2);
}
