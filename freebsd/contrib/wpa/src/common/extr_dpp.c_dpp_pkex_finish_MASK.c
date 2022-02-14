
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dpp_pkex {int * peer_bootstrap_key; TYPE_1__* own_bi; } ;
struct dpp_global {int bootstrap; } ;
struct dpp_bootstrap_info {int num_freq; unsigned int* freq; int list; int * pubkey; int curve; int mac_addr; int type; int id; } ;
struct TYPE_2__ {int curve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct dpp_bootstrap_info*) ;
 scalar_t__ FUNC_2 (struct dpp_bootstrap_info*) ;
 int FUNC_3 (struct dpp_global*) ;
 int FUNC_4 (struct dpp_pkex*) ;
 int FUNC_5 (int ,int const*,int ) ;
 struct dpp_bootstrap_info* FUNC_6 (int) ;

struct dpp_bootstrap_info *
FUNC_7(struct dpp_global *VAR_2, struct dpp_pkex *VAR_3, const u8 *VAR_4,
  unsigned int VAR_5)
{
 struct dpp_bootstrap_info *VAR_6;

 VAR_6 = FUNC_6(sizeof(*VAR_6));
 if (!VAR_6)
  return ((void*)0);
 VAR_6->id = FUNC_3(VAR_2);
 VAR_6->type = VAR_0;
 FUNC_5(VAR_6->mac_addr, VAR_4, VAR_1);
 VAR_6->num_freq = 1;
 VAR_6->freq[0] = VAR_5;
 VAR_6->curve = VAR_3->own_bi->curve;
 VAR_6->pubkey = VAR_3->peer_bootstrap_key;
 VAR_3->peer_bootstrap_key = ((void*)0);
 if (FUNC_2(VAR_6) < 0) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }
 FUNC_4(VAR_3);
 FUNC_0(&VAR_2->bootstrap, &VAR_6->list);
 return VAR_6;
}
