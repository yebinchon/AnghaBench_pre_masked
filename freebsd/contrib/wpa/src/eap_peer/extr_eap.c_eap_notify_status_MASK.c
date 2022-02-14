
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {int (* notify_status ) (int ,char const*,char const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,char const*) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_1, const char *VAR_2,
          const char *VAR_3)
{
 FUNC_1(VAR_0, "EAP: Status notification: %s (param=%s)",
     VAR_2, VAR_3);
 if (VAR_1->eapol_cb->notify_status)
  VAR_1->eapol_cb->notify_status(VAR_1->eapol_ctx, VAR_2, VAR_3);
}
