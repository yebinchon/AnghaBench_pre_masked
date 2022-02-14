
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int ip; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_6__ {TYPE_2__ disabled; TYPE_1__ async_disabled; } ;
struct pt_event {TYPE_3__ variant; int type; } ;
struct pt_insn_decoder {struct pt_event event; } ;


 int FUNC_0 (struct pt_insn_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct pt_insn_decoder *VAR_2)
{
 struct pt_event *VAR_3;
 uint64_t VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 <= 0)
  return VAR_5;




 VAR_3 = &VAR_2->event;

 VAR_4 = VAR_3->variant.async_disabled.ip;

 VAR_3->type = VAR_1;
 VAR_3->variant.disabled.ip = VAR_4;

 return 1;
}
