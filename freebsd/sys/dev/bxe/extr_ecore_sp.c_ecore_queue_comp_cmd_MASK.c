
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_sp_obj {unsigned long pending; scalar_t__ next_tx_only; scalar_t__ max_cos; scalar_t__ num_tx_only; int next_state; int state; int * cids; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_queue_cmd { ____Placeholder_ecore_queue_cmd } ecore_queue_cmd ;


 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,...) ;
 int VAR_0 ;
 int FUNC_2 (struct bxe_softc*,char*,int,scalar_t__,...) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int,unsigned long*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct bxe_softc *VAR_4,
    struct ecore_queue_sp_obj *VAR_5,
    enum ecore_queue_cmd VAR_6)
{
 unsigned long VAR_7 = VAR_5->pending;

 if (!FUNC_4(VAR_6, &VAR_7)) {
  FUNC_1("Bad MC reply %d for queue %d in state %d pending 0x%lx, next_state %d\n",
     VAR_6, VAR_5->cids[VAR_1],
     VAR_5->state, VAR_7, VAR_5->next_state);
  return VAR_0;
 }

 if (VAR_5->next_tx_only >= VAR_5->max_cos)



  FUNC_1("illegal value for next tx_only: %d. max cos was %d",
     VAR_5->next_tx_only, VAR_5->max_cos);

 FUNC_2(VAR_4,
    "Completing command %d for queue %d, setting state to %d\n",
    VAR_6, VAR_5->cids[VAR_1], VAR_5->next_state);

 if (VAR_5->next_tx_only)
  FUNC_2(VAR_4, "primary cid %d: num tx-only cons %d\n",
     VAR_5->cids[VAR_1], VAR_5->next_tx_only);

 VAR_5->state = VAR_5->next_state;
 VAR_5->num_tx_only = VAR_5->next_tx_only;
 VAR_5->next_state = VAR_2;




 FUNC_5();

 FUNC_0(VAR_6, &VAR_5->pending);
 FUNC_3();

 return VAR_3;
}
