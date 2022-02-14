
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root; scalar_t__ count; } ;
struct mesh_area {int * jostle_last; int * jostle_first; int * forever_last; int * forever_first; scalar_t__ num_forever_states; scalar_t__ num_detached_states; scalar_t__ num_reply_states; scalar_t__ num_reply_addrs; TYPE_1__ all; TYPE_1__ run; int stats_dropped; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;

void
FUNC_2(struct mesh_area* VAR_1)
{

 while(VAR_1->all.count)
  FUNC_0(VAR_1->all.root);
 VAR_1->stats_dropped += VAR_1->num_reply_addrs;

 FUNC_1(&VAR_1->run, &VAR_0);
 FUNC_1(&VAR_1->all, &VAR_0);
 VAR_1->num_reply_addrs = 0;
 VAR_1->num_reply_states = 0;
 VAR_1->num_detached_states = 0;
 VAR_1->num_forever_states = 0;
 VAR_1->forever_first = ((void*)0);
 VAR_1->forever_last = ((void*)0);
 VAR_1->jostle_first = ((void*)0);
 VAR_1->jostle_last = ((void*)0);
}
