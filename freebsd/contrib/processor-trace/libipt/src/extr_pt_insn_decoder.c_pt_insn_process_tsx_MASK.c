
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int speculative; } ;
struct TYPE_5__ {TYPE_1__ tsx; } ;
struct TYPE_6__ {TYPE_2__ variant; } ;
struct pt_insn_decoder {TYPE_3__ event; int speculative; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pt_insn_decoder *VAR_1)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->speculative = VAR_1->event.variant.tsx.speculative;

 return 0;
}
