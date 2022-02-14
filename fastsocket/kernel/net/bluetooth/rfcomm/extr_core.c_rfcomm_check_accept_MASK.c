
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int flags; int (* state_change ) (struct rfcomm_dlc*,int ) ;int state; scalar_t__ defer_setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rfcomm_dlc*) ;
 int FUNC_1 (struct rfcomm_dlc*) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 (struct rfcomm_dlc*,int ) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct rfcomm_dlc*,int ) ;

__attribute__((used)) static void FUNC_7(struct rfcomm_dlc *VAR_4)
{
 if (FUNC_0(VAR_4)) {
  if (VAR_4->defer_setup) {
   FUNC_5(VAR_3, &VAR_4->flags);
   FUNC_3(VAR_4, VAR_2);

   FUNC_2(VAR_4);
   VAR_4->state = VAR_0;
   VAR_4->state_change(VAR_4, 0);
   FUNC_4(VAR_4);
  } else
   FUNC_1(VAR_4);
 } else {
  FUNC_5(VAR_1, &VAR_4->flags);
  FUNC_3(VAR_4, VAR_2);
 }
}
