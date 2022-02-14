
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ base; } ;
struct TYPE_5__ {TYPE_1__ vmcs; } ;
struct pt_event {TYPE_2__ variant; } ;
struct TYPE_6__ {scalar_t__ vmcs; } ;
struct pt_block_decoder {scalar_t__ process_event; TYPE_3__ asid; int scache; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pt_block_decoder *VAR_1,
          const struct pt_event *VAR_2)
{
 uint64_t VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3 = VAR_2->variant.vmcs.base;
 if (VAR_1->asid.vmcs != VAR_3) {
  VAR_4 = FUNC_0(&VAR_1->scache);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_1->asid.vmcs = VAR_3;
 }

 VAR_1->process_event = 0;

 return 0;
}
