
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


typedef int uint64_t ;
struct TYPE_11__ {int displacement; int is_direct; } ;
struct TYPE_12__ {TYPE_4__ branch; } ;
struct pt_insn_ext {TYPE_5__ variant; } ;
struct pt_insn {int iclass; int size; int ip; } ;
struct TYPE_13__ {int ip; } ;
struct TYPE_14__ {TYPE_6__ disabled; } ;
struct pt_event {TYPE_7__ variant; scalar_t__ ip_suppressed; } ;
struct TYPE_10__ {scalar_t__ skl014; } ;
struct TYPE_8__ {scalar_t__ addr_cfg; } ;
struct TYPE_9__ {TYPE_1__ config; } ;
struct pt_config {TYPE_3__ errata; TYPE_2__ addr_filter; } ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_event const*,struct pt_insn const*,struct pt_insn_ext const*,struct pt_config const*) ;
 scalar_t__ FUNC_1 (struct pt_insn const*,struct pt_insn_ext const*) ;
 scalar_t__ FUNC_2 (struct pt_insn const*,struct pt_insn_ext const*) ;
 scalar_t__ FUNC_3 (struct pt_insn const*,struct pt_insn_ext const*) ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static int FUNC_4(const struct pt_event *VAR_3,
         const struct pt_insn *VAR_4,
         const struct pt_insn_ext *VAR_5,
         const struct pt_config *VAR_6)
{
 if (!VAR_3 || !VAR_4 || !VAR_5 || !VAR_6)
  return -VAR_2;

 if (VAR_3->ip_suppressed) {
  if (FUNC_3(VAR_4, VAR_5) ||
      FUNC_1(VAR_4, VAR_5) ||
      FUNC_2(VAR_4, VAR_5))
   return 1;






  if (VAR_6->addr_filter.config.addr_cfg &&
      VAR_6->errata.skl014 &&
      FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6))
   return 1;
 } else {
  switch (VAR_4->iclass) {
  case 129:
  case 130:
   break;

  case 137:
  case 131:



   if (VAR_5->variant.branch.is_direct) {
    uint64_t VAR_7;

    VAR_7 = VAR_4->ip;
    VAR_7 += VAR_4->size;
    VAR_7 += (uint64_t) (int64_t)
     VAR_5->variant.branch.displacement;

    if (VAR_7 != VAR_3->variant.disabled.ip)
     break;
   }

   VAR_0;
  case 128:
  case 134:
  case 132:
  case 133:
  case 136:
   return 1;

  case 135:
   return -VAR_1;
  }
 }

 return 0;
}
