
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_insn_ext {int dummy; } ;
struct TYPE_8__ {scalar_t__ bdm64; } ;
struct TYPE_9__ {TYPE_3__ errata; } ;
struct TYPE_10__ {TYPE_4__ config; } ;
struct pt_insn_decoder {scalar_t__ ip; TYPE_5__ query; } ;
struct pt_insn {int dummy; } ;
struct TYPE_6__ {scalar_t__ ip; } ;
struct TYPE_7__ {TYPE_1__ tsx; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ ip_suppressed; } ;


 int FUNC_0 (struct pt_insn_decoder*,struct pt_event const*,struct pt_insn const*,struct pt_insn_ext const*) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct pt_insn_decoder *VAR_1,
           const struct pt_insn *VAR_2,
           const struct pt_insn_ext *VAR_3,
           const struct pt_event *VAR_4)
{
 int VAR_5;

 if (!VAR_1 || !VAR_4)
  return -VAR_0;

 if (VAR_4->ip_suppressed)
  return 0;

 if (VAR_2 && VAR_3 && VAR_1->query.config.errata.bdm64) {
  VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_2, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_1->ip != VAR_4->variant.tsx.ip)
  return 1;

 return 0;
}
