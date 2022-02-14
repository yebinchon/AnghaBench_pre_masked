
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int dummy; } ;
struct rfcomm_dlc {int state; int tx_queue; int (* state_change ) (struct rfcomm_dlc*,int) ;int flags; int dlci; struct rfcomm_session* session; } ;


 int VAR_0 ;




 int FUNC_0 (char*,struct rfcomm_dlc*,int,int ,int,struct rfcomm_session*) ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rfcomm_dlc*) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 (struct rfcomm_dlc*,int) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_dlc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct rfcomm_session*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rfcomm_dlc*,int) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct rfcomm_dlc *VAR_6, int VAR_7)
{
 struct rfcomm_session *VAR_8 = VAR_6->session;
 if (!VAR_8)
  return 0;

 FUNC_0("dlc %p state %ld dlci %d err %d session %p",
   VAR_6, VAR_6->state, VAR_6->dlci, VAR_7, VAR_8);

 switch (VAR_6->state) {
 case 131:
 case 132:
  if (FUNC_13(VAR_3, &VAR_6->flags)) {
   FUNC_9(VAR_2, &VAR_6->flags);
   FUNC_7(VAR_5);
   break;
  }


 case 129:
  VAR_6->state = VAR_1;
  if (FUNC_10(&VAR_6->tx_queue)) {
   FUNC_8(VAR_8, VAR_6->dlci);
   FUNC_3(VAR_6, VAR_4);
  } else {
   FUNC_6(VAR_6);
   FUNC_3(VAR_6, VAR_4 * 2);
  }
  break;

 case 128:
 case 130:
  if (FUNC_13(VAR_3, &VAR_6->flags)) {
   FUNC_9(VAR_2, &VAR_6->flags);
   FUNC_7(VAR_5);
   break;
  }


 default:
  FUNC_1(VAR_6);

  FUNC_2(VAR_6);
  VAR_6->state = VAR_0;
  VAR_6->state_change(VAR_6, VAR_7);
  FUNC_5(VAR_6);

  FUNC_11(&VAR_6->tx_queue);
  FUNC_4(VAR_6);
 }

 return 0;
}
