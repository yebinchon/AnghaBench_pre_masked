
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2_packet_data {size_t refcount; int rx_avail; int rx_processed; int ready_for_read; int stop_request; int rx_thread; int first_proto; int ** l2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ,int *,int ,int *,int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 struct l2_packet_data* VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct l2_packet_data*) ;
 int FUNC_10 (int ,char*,...) ;

void FUNC_11(struct l2_packet_data *VAR_4)
{
 if (VAR_4 == ((void*)0))
  return;

 if (VAR_3) {
  VAR_3->refcount--;
  VAR_3->l2[VAR_3->refcount] = ((void*)0);
  if (VAR_3->refcount) {
   FUNC_10(VAR_2, "L2(NDISUIO): restore filtering "
       "ethertype to %04x",
       VAR_3->first_proto);
   FUNC_8(
    VAR_3->first_proto);
   return;
  }
  FUNC_9(VAR_3);
  VAR_3 = ((void*)0);
 }


 FUNC_0(FUNC_6());


 FUNC_7(VAR_4->rx_avail, sizeof(VAR_4->rx_avail));
 FUNC_1(VAR_4->rx_avail);
 FUNC_9(VAR_4);
}
