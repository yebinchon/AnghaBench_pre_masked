
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_4__ {int next_neighbor_rep_token; int * neighbor_rep_cb_ctx; int (* notify_neighbor_rep ) (int *,struct wpabuf*) ;} ;
struct wpa_supplicant {TYPE_1__ rrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) (TYPE_1__*,int *),TYPE_1__*,int *) ;
 int FUNC_1 (int *,struct wpabuf*) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*,...) ;
 struct wpabuf* FUNC_4 (size_t) ;
 int FUNC_5 (struct wpabuf*,int const*,size_t) ;
 int FUNC_6 (TYPE_1__*,int *) ;

void FUNC_7(struct wpa_supplicant *VAR_2,
       const u8 *VAR_3, size_t VAR_4)
{
 struct wpabuf *VAR_5;

 FUNC_2(VAR_0, "RRM: New Neighbor Report", VAR_3, VAR_4);
 if (VAR_4 < 1)
  return;

 if (VAR_3[0] != VAR_2->rrm.next_neighbor_rep_token - 1) {
  FUNC_3(VAR_0,
      "RRM: Discarding neighbor report with token %d (expected %d)",
      VAR_3[0], VAR_2->rrm.next_neighbor_rep_token - 1);
  return;
 }

 FUNC_0(FUNC_6, &VAR_2->rrm,
        ((void*)0));

 if (!VAR_2->rrm.notify_neighbor_rep) {
  FUNC_3(VAR_1, "RRM: Unexpected neighbor report");
  return;
 }


 VAR_5 = FUNC_4(VAR_4 - 1);
 if (!VAR_5) {
  FUNC_6(&VAR_2->rrm, ((void*)0));
  return;
 }
 FUNC_5(VAR_5, VAR_3 + 1, VAR_4 - 1);
 FUNC_3(VAR_0, "RRM: Notifying neighbor report (token = %d)",
     VAR_3[0]);
 VAR_2->rrm.notify_neighbor_rep(VAR_2->rrm.neighbor_rep_cb_ctx,
           VAR_5);
 VAR_2->rrm.notify_neighbor_rep = ((void*)0);
 VAR_2->rrm.neighbor_rep_cb_ctx = ((void*)0);
}
