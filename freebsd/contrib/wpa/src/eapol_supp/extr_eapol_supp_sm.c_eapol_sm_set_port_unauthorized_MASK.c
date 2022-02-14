
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eapol_sm {scalar_t__ suppPortStatus; TYPE_1__* ctx; scalar_t__ force_authorized_update; } ;
struct TYPE_2__ {int ctx; int (* port_cb ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct eapol_sm *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->suppPortStatus != VAR_1 || VAR_2->force_authorized_update;
 VAR_2->force_authorized_update = VAR_0;
 VAR_2->suppPortStatus = VAR_1;
 if (VAR_3 && VAR_2->ctx->port_cb)
  VAR_2->ctx->port_cb(VAR_2->ctx->ctx, 0);
}
