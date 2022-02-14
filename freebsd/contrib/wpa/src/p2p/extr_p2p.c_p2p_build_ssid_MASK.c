
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {size_t ssid_postfix_len; int ssid_postfix; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(struct p2p_data *VAR_2, u8 *VAR_3, size_t *VAR_4)
{
 FUNC_0(VAR_3, VAR_0, VAR_1);
 FUNC_1((char *) &VAR_3[VAR_1], 2);
 FUNC_0(&VAR_3[VAR_1 + 2],
    VAR_2->cfg->ssid_postfix, VAR_2->cfg->ssid_postfix_len);
 *VAR_4 = VAR_1 + 2 + VAR_2->cfg->ssid_postfix_len;
}
