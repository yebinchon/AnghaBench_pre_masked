
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eapol_sm {int startWhen; TYPE_1__* ctx; int SUPP_PAE_state; int cached_pmk; } ;
struct TYPE_2__ {int ctx; int (* aborted_cached ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eapol_sm*) ;
 int FUNC_1 (struct eapol_sm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct eapol_sm *VAR_3)
{
 FUNC_3(VAR_1, "RSN: Authenticator did not accept PMKID, "
     "doing full EAP authentication");
 if (VAR_3 == ((void*)0))
  return;
 VAR_3->cached_pmk = VAR_0;
 VAR_3->SUPP_PAE_state = VAR_2;
 FUNC_1(VAR_3);



 VAR_3->startWhen = 3;
 FUNC_0(VAR_3);

 if (VAR_3->ctx->aborted_cached)
  VAR_3->ctx->aborted_cached(VAR_3->ctx->ctx);
}
