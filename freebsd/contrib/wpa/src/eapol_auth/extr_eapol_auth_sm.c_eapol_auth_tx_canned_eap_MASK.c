
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct eapol_state_machine {int dot1xAuthEapolFramesTx; int sta; TYPE_3__* eapol; int addr; scalar_t__ last_eap_id; } ;
struct eap_hdr {scalar_t__ identifier; int length; int code; } ;
typedef int eap ;
struct TYPE_5__ {int ctx; } ;
struct TYPE_4__ {int (* eapol_send ) (int ,int ,int ,int *,int) ;} ;
struct TYPE_6__ {TYPE_2__ conf; TYPE_1__ cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,char*,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct eap_hdr*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct eapol_state_machine *VAR_4,
         int VAR_5)
{
 struct eap_hdr VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.code = VAR_5 ? VAR_2 : VAR_1;
 VAR_6.identifier = ++VAR_4->last_eap_id;
 VAR_6.length = FUNC_1(sizeof(VAR_6));

 FUNC_0(VAR_4->eapol, VAR_4->addr, VAR_0,
      "Sending canned EAP packet %s (identifier %d)",
      VAR_5 ? "SUCCESS" : "FAILURE", VAR_6.identifier);
 VAR_4->eapol->cb.eapol_send(VAR_4->eapol->conf.ctx, VAR_4->sta,
     VAR_3,
     (u8 *) &VAR_6, sizeof(VAR_6));
 VAR_4->dot1xAuthEapolFramesTx++;
}
