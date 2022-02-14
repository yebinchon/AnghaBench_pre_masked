
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {size_t ssid_postfix_len; int ssid_postfix; } ;


 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (struct p2p_data*,char*,int ) ;
 int FUNC_2 (int const*,size_t) ;

int FUNC_3(struct p2p_data *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_0, "New SSID postfix: %s", FUNC_2(VAR_1, VAR_2));
 if (VAR_1 == ((void*)0)) {
  VAR_0->cfg->ssid_postfix_len = 0;
  return 0;
 }
 if (VAR_2 > sizeof(VAR_0->cfg->ssid_postfix))
  return -1;
 FUNC_0(VAR_0->cfg->ssid_postfix, VAR_1, VAR_2);
 VAR_0->cfg->ssid_postfix_len = VAR_2;
 return 0;
}
