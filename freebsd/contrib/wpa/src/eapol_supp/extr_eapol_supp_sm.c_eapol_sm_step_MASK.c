
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eapol_sm {scalar_t__ cb_status; TYPE_1__* ctx; int eap; void* changed; int eap_proxy; scalar_t__ use_eap_proxy; } ;
typedef enum eapol_supp_result { ____Placeholder_eapol_supp_result } eapol_supp_result ;
struct TYPE_2__ {int cb_ctx; int (* cb ) (struct eapol_sm*,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,int *,struct eapol_sm*) ;
 int FUNC_5 (int ,int ,int ,int *,struct eapol_sm*) ;
 int FUNC_6 (struct eapol_sm*,int,int ) ;

void FUNC_7(struct eapol_sm *VAR_11)
{
 int VAR_12;





 for (VAR_12 = 0; VAR_12 < 100; VAR_12++) {
  VAR_11->changed = VAR_5;
  FUNC_0(VAR_8);
  FUNC_0(VAR_6);
  FUNC_0(VAR_7);







  if (FUNC_1(VAR_11->eap))
   VAR_11->changed = VAR_9;
  if (!VAR_11->changed)
   break;
 }

 if (VAR_11->changed) {


  FUNC_4(VAR_10, ((void*)0), VAR_11);
  FUNC_5(0, 0, VAR_10, ((void*)0), VAR_11);
 }

 if (VAR_11->ctx->cb && VAR_11->cb_status != VAR_0) {
  enum eapol_supp_result VAR_13;
  if (VAR_11->cb_status == VAR_1)
   VAR_13 = VAR_4;
  else if (FUNC_2(VAR_11->eap))
   VAR_13 = VAR_2;
  else
   VAR_13 = VAR_3;
  VAR_11->cb_status = VAR_0;
  VAR_11->ctx->cb(VAR_11, VAR_13, VAR_11->ctx->cb_ctx);
 }
}
