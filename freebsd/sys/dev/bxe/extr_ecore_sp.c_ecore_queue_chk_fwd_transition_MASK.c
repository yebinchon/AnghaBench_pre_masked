
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ tx_only; } ;
struct ecore_queue_state_params {int cmd; TYPE_2__ params; } ;
struct ecore_queue_sp_obj {int state; int next_state; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_queue_cmd { ____Placeholder_ecore_queue_cmd } ecore_queue_cmd ;
typedef enum ecore_q_state { ____Placeholder_ecore_q_state } ecore_q_state ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;

 int VAR_6 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct bxe_softc *VAR_7,
       struct ecore_queue_sp_obj *VAR_8,
     struct ecore_queue_state_params *VAR_9)
{
 enum ecore_q_state VAR_10 = VAR_8->state, VAR_11 = VAR_5;
 enum ecore_queue_cmd VAR_12 = VAR_9->cmd;

 switch (VAR_10) {
 case 128:
  if (VAR_12 == VAR_2)
   VAR_11 = 129;

  break;
 case 129:
  if (VAR_12 == VAR_3) {
   if (FUNC_2(VAR_4,
        &VAR_9->params.tx_only.flags))
    VAR_11 = 131;
   else
    VAR_11 = 130;
  }

  break;
 case 131:
 case 130:
  if (VAR_12 == VAR_1)
   VAR_11 = 128;

  break;
 default:
  FUNC_0("Illegal state: %d\n", VAR_10);
 }


 if (VAR_11 != VAR_5) {
  FUNC_1(VAR_7, "Good state transition: %d(%d)->%d\n",
     VAR_10, VAR_12, VAR_11);
  VAR_8->next_state = VAR_11;
  return VAR_6;
 }

 FUNC_1(VAR_7, "Bad state transition request: %d %d\n", VAR_10, VAR_12);
 return VAR_0;
}
