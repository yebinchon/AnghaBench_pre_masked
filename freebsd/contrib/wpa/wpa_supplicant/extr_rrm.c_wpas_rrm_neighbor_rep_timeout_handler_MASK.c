
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrm_data {int * neighbor_rep_cb_ctx; int (* notify_neighbor_rep ) (int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct rrm_data *VAR_4 = VAR_2;

 if (!VAR_4->notify_neighbor_rep) {
  FUNC_1(VAR_1,
      "RRM: Unexpected neighbor report timeout");
  return;
 }

 FUNC_1(VAR_0, "RRM: Notifying neighbor report - NONE");
 VAR_4->notify_neighbor_rep(VAR_4->neighbor_rep_cb_ctx, ((void*)0));

 VAR_4->notify_neighbor_rep = ((void*)0);
 VAR_4->neighbor_rep_cb_ctx = ((void*)0);
}
