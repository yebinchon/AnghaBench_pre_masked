
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * go_params; } ;
struct p2p_go_neg_results {int dummy; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,struct p2p_go_neg_results*,int) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_0,
        struct p2p_go_neg_results *VAR_1)
{
 if (VAR_0->go_params == ((void*)0)) {
  VAR_0->go_params = FUNC_0(sizeof(*VAR_1));
  if (VAR_0->go_params == ((void*)0))
   return -1;
 }
 FUNC_1(VAR_0->go_params, VAR_1, sizeof(*VAR_1));
 return 0;
}
