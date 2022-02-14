
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdeque {int dummy; } ;
struct TYPE_2__ {scalar_t__ last_block_length; scalar_t__ last_block_start; struct cdeque filters; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cdeque*) ;
 int FUNC_1 (struct filter_info**) ;
 scalar_t__ FUNC_2 (struct cdeque*,int ) ;
 scalar_t__ FUNC_3 (struct cdeque*) ;
 int FUNC_4 (struct filter_info*) ;

__attribute__((used)) static void FUNC_5(struct rar5* VAR_1) {
 struct cdeque* VAR_2 = &VAR_1->cstate.filters;
 while(FUNC_3(VAR_2) > 0) {
  struct filter_info* VAR_3 = ((void*)0);


  if (VAR_0 == FUNC_2(VAR_2, FUNC_1(&VAR_3)))
   FUNC_4(VAR_3);
 }

 FUNC_0(VAR_2);


 VAR_1->cstate.last_block_start = 0;
 VAR_1->cstate.last_block_length = 0;
}
