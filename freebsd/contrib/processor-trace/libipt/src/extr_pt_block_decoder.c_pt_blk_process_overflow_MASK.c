
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long ip; } ;
struct TYPE_4__ {TYPE_1__ overflow; } ;
struct pt_event {TYPE_2__ variant; scalar_t__ ip_suppressed; scalar_t__ status_update; } ;
struct pt_block_decoder {int enabled; unsigned long long ip; scalar_t__ process_event; scalar_t__ speculative; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pt_block_decoder *VAR_2,
       const struct pt_event *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_1;


 if (VAR_3->status_update)
  return -VAR_0;




 if (VAR_3->ip_suppressed) {





  VAR_2->enabled = 0;
  VAR_2->ip = 0ull;
 } else {



  VAR_2->enabled = 1;
  VAR_2->ip = VAR_3->variant.overflow.ip;
 }







 VAR_2->speculative = 0;
 VAR_2->process_event = 0;

 return 0;
}
