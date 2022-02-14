
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int freqs; } ;
struct beacon_rep_data {TYPE_1__ scan_params; int eids; } ;
struct wpa_supplicant {struct beacon_rep_data beacon_rep_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct beacon_rep_data*,int ,int) ;
 int VAR_0 ;

void FUNC_4(struct wpa_supplicant *VAR_1)
{
 struct beacon_rep_data *VAR_2 = &VAR_1->beacon_rep_data;

 FUNC_1(VAR_0, VAR_1, ((void*)0));
 FUNC_0(VAR_2->eids);
 FUNC_2(VAR_2->scan_params.freqs);
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
}
