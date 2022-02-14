
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct p2p_group {TYPE_3__* cfg; TYPE_2__* p2p; } ;
struct TYPE_6__ {size_t ssid_len; int ssid; } ;
struct TYPE_5__ {TYPE_1__* cfg; } ;
struct TYPE_4__ {int dev_addr; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,size_t) ;

int FUNC_1(struct p2p_group *VAR_1, const u8 *VAR_2,
    size_t VAR_3)
{
 if (VAR_3 != VAR_0 + VAR_1->cfg->ssid_len)
  return 0;
 if (FUNC_0(VAR_2, VAR_1->p2p->cfg->dev_addr, VAR_0) != 0)
  return 0;
 return FUNC_0(VAR_2 + VAR_0, VAR_1->cfg->ssid,
    VAR_1->cfg->ssid_len) == 0;
}
