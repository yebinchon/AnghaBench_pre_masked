
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct p2p_group {TYPE_3__* cfg; TYPE_2__* p2p; } ;
struct TYPE_6__ {int ssid_len; int ssid; } ;
struct TYPE_5__ {TYPE_1__* cfg; } ;
struct TYPE_4__ {int dev_addr; } ;


 int FUNC_0 (struct wpabuf*,int ,int ,int ) ;

void FUNC_1(struct p2p_group *VAR_0, struct wpabuf *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->p2p->cfg->dev_addr, VAR_0->cfg->ssid,
        VAR_0->cfg->ssid_len);
}
