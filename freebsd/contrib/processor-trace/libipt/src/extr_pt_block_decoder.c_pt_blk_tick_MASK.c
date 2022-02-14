
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef void* uint32_t ;
struct TYPE_3__ {scalar_t__ ip; } ;
struct TYPE_4__ {TYPE_1__ tick; } ;
struct pt_event {scalar_t__ tsc; int has_tsc; void* lost_cyc; void* lost_mtc; TYPE_2__ variant; int type; } ;
struct pt_block_decoder {int process_event; struct pt_event event; int query; int enabled; } ;


 int FUNC_0 (struct pt_event*,int ,int) ;
 int FUNC_1 (int *,scalar_t__*,void**,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pt_block_decoder *VAR_3, uint64_t VAR_4)
{
 struct pt_event *VAR_5;
 uint64_t VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 if (!VAR_3)
  return -VAR_0;


 if (!VAR_3->enabled)
  return -VAR_0;
 if (VAR_3->process_event)
  return 0;

 VAR_9 = FUNC_1(&VAR_3->query, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9 < 0) {

  if (VAR_9 != -VAR_1)
   return VAR_9;
 }

 VAR_5 = &VAR_3->event;


 if (VAR_6 == VAR_5->tsc)
  return 0;


 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->type = VAR_2;
 VAR_5->variant.tick.ip = VAR_4;


 if (VAR_9 != -VAR_1)
  VAR_5->has_tsc = 1;
 VAR_5->tsc = VAR_6;
 VAR_5->lost_mtc = VAR_7;
 VAR_5->lost_cyc = VAR_8;


 VAR_3->process_event = 1;

 return 1;
}
