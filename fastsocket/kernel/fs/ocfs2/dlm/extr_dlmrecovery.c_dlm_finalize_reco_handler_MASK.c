
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_finalize_reco {int flags; int node_idx; int dead_node; } ;
struct TYPE_2__ {int state; int new_master; int dead_node; } ;
struct dlm_ctxt {TYPE_1__ reco; int name; int spinlock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dlm_ctxt*,int ,int ) ;
 int FUNC_2 (struct dlm_ctxt*) ;
 int FUNC_3 (struct dlm_ctxt*) ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (struct dlm_ctxt*) ;
 int FUNC_6 (struct dlm_ctxt*) ;
 int FUNC_7 (int ,char*,int ,int ,int,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct o2net_msg *VAR_3, u32 VAR_4, void *VAR_5,
         void **VAR_6)
{
 struct dlm_ctxt *VAR_7 = VAR_5;
 struct dlm_finalize_reco *VAR_8 = (struct dlm_finalize_reco *)VAR_3->buf;
 int VAR_9 = 1;


 if (!FUNC_2(VAR_7))
  return 0;

 if (VAR_8->flags & VAR_0)
  VAR_9 = 2;

 FUNC_7(0, "%s: node %u finalizing recovery stage%d of "
      "node %u (%u:%u)\n", VAR_7->name, VAR_8->node_idx, VAR_9,
      VAR_8->dead_node, VAR_7->reco.dead_node, VAR_7->reco.new_master);

 FUNC_8(&VAR_7->spinlock);

 if (VAR_7->reco.new_master != VAR_8->node_idx) {
  FUNC_7(VAR_2, "node %u sent recovery finalize msg, but node "
       "%u is supposed to be the new master, dead=%u\n",
       VAR_8->node_idx, VAR_7->reco.new_master, VAR_8->dead_node);
  FUNC_0();
 }
 if (VAR_7->reco.dead_node != VAR_8->dead_node) {
  FUNC_7(VAR_2, "node %u sent recovery finalize msg for dead "
       "node %u, but node %u is supposed to be dead\n",
       VAR_8->node_idx, VAR_8->dead_node, VAR_7->reco.dead_node);
  FUNC_0();
 }

 switch (VAR_9) {
  case 1:
   FUNC_1(VAR_7, VAR_8->dead_node, VAR_8->node_idx);
   if (VAR_7->reco.state & VAR_1) {
    FUNC_7(VAR_2, "%s: received finalize1 from "
         "new master %u for dead node %u, but "
         "this node has already received it!\n",
         VAR_7->name, VAR_8->node_idx, VAR_8->dead_node);
    FUNC_4(VAR_7);
    FUNC_0();
   }
   VAR_7->reco.state |= VAR_1;
   FUNC_9(&VAR_7->spinlock);
   break;
  case 2:
   if (!(VAR_7->reco.state & VAR_1)) {
    FUNC_7(VAR_2, "%s: received finalize2 from "
         "new master %u for dead node %u, but "
         "this node did not have finalize1!\n",
         VAR_7->name, VAR_8->node_idx, VAR_8->dead_node);
    FUNC_4(VAR_7);
    FUNC_0();
   }
   VAR_7->reco.state &= ~VAR_1;
   FUNC_9(&VAR_7->spinlock);
   FUNC_6(VAR_7);
   FUNC_3(VAR_7);
   break;
  default:
   FUNC_0();
 }

 FUNC_7(0, "%s: recovery done, reco master was %u, dead now %u, master now %u\n",
      VAR_7->name, VAR_8->node_idx, VAR_7->reco.dead_node, VAR_7->reco.new_master);

 FUNC_5(VAR_7);
 return 0;
}
