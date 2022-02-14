
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int forced_tx; int forced_rx; int autoneg; } ;
struct TYPE_4__ {int forced_speed; int advertised_speeds; int autoneg; } ;
struct ecore_mcp_link_params {int loopback_mode; TYPE_1__ pause; TYPE_2__ speed; } ;
struct ecore_bulletin_content {int req_loopback; int req_forced_tx; int req_forced_rx; int req_autoneg_pause; int req_forced_speed; int req_adv_speed; int req_autoneg; } ;


 int FUNC_0 (struct ecore_mcp_link_params*,int ,int) ;

void FUNC_1(struct ecore_mcp_link_params *VAR_0,
    struct ecore_bulletin_content *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->speed.autoneg = VAR_1->req_autoneg;
 VAR_0->speed.advertised_speeds = VAR_1->req_adv_speed;
 VAR_0->speed.forced_speed = VAR_1->req_forced_speed;
 VAR_0->pause.autoneg = VAR_1->req_autoneg_pause;
 VAR_0->pause.forced_rx = VAR_1->req_forced_rx;
 VAR_0->pause.forced_tx = VAR_1->req_forced_tx;
 VAR_0->loopback_mode = VAR_1->req_loopback;
}
