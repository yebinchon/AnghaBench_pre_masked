
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct o2quo_state {scalar_t__ qs_connected; int qs_lock; int qs_hb_bm; int qs_conn_bm; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (int,char*,int ,scalar_t__) ;
 int FUNC_3 (struct o2quo_state*,int ) ;
 struct o2quo_state VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;

void FUNC_7(u8 VAR_1)
{
 struct o2quo_state *VAR_2 = &VAR_0;

 FUNC_4(&VAR_2->qs_lock);

 if (FUNC_6(VAR_1, VAR_2->qs_conn_bm)) {
  VAR_2->qs_connected--;
  FUNC_2(VAR_2->qs_connected < 0,
    "node %u, connected %d\n",
    VAR_1, VAR_2->qs_connected);

  FUNC_0(VAR_1, VAR_2->qs_conn_bm);
 }

 FUNC_1(0, "node %u, %d total\n", VAR_1, VAR_2->qs_connected);

 if (FUNC_6(VAR_1, VAR_2->qs_hb_bm))
  FUNC_3(VAR_2, VAR_1);

 FUNC_5(&VAR_2->qs_lock);
}
