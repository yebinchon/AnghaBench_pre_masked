
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_go_neg_results {int passphrase; int ssid_len; int ssid; } ;
struct p2p_data {TYPE_1__* cfg; scalar_t__ ssid_set; int ssid_len; int ssid; } ;
struct TYPE_2__ {int passphrase_len; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct p2p_data*,int ,int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct p2p_data *VAR_0, struct p2p_go_neg_results *VAR_1)
{
 if (VAR_0->ssid_set) {
  FUNC_0(VAR_1->ssid, VAR_0->ssid, VAR_0->ssid_len);
  VAR_1->ssid_len = VAR_0->ssid_len;
 } else {
  FUNC_1(VAR_0, VAR_1->ssid, &VAR_1->ssid_len);
 }
 VAR_0->ssid_set = 0;

 FUNC_2(VAR_1->passphrase, VAR_0->cfg->passphrase_len);
 return 0;
}
