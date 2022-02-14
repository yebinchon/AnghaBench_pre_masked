
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eapol_sm {int dot1xSuppEapolFramesTx; int dot1xSuppEapolStartFramesTx; TYPE_1__* ctx; } ;
struct TYPE_2__ {int eapol_send_ctx; int (* eapol_send ) (int ,int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct eapol_sm *VAR_2)
{
 FUNC_1(VAR_1, "EAPOL: txStart");
 VAR_2->ctx->eapol_send(VAR_2->ctx->eapol_send_ctx,
       VAR_0, (u8 *) "", 0);
 VAR_2->dot1xSuppEapolStartFramesTx++;
 VAR_2->dot1xSuppEapolFramesTx++;
}
