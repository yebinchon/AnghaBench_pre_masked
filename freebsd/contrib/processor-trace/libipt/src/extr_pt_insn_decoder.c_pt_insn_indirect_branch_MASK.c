
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ enable_tick_events; } ;
struct TYPE_5__ {TYPE_1__ insn; } ;
struct TYPE_6__ {TYPE_2__ variant; } ;
struct pt_insn_decoder {TYPE_3__ flags; int query; int ip; } ;


 int FUNC_0 (struct pt_insn_decoder*,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct pt_insn_decoder *VAR_1,
       uint64_t *VAR_2)
{
 uint64_t VAR_3;
 int VAR_4, VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = VAR_1->ip;

 VAR_4 = FUNC_1(&VAR_1->query, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_1->flags.variant.insn.enable_tick_events) {
  VAR_5 = FUNC_0(VAR_1, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return VAR_4;
}
