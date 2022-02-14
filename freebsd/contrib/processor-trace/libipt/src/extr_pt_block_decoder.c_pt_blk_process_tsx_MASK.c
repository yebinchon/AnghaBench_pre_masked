
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speculative; } ;
struct TYPE_4__ {TYPE_1__ tsx; } ;
struct pt_event {TYPE_2__ variant; } ;
struct pt_block_decoder {scalar_t__ process_event; int speculative; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pt_block_decoder *VAR_1,
         const struct pt_event *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_1->speculative = VAR_2->variant.tsx.speculative;
 VAR_1->process_event = 0;

 return 0;
}
