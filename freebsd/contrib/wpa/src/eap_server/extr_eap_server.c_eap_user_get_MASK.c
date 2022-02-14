
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_user {int dummy; } ;
struct eap_sm {scalar_t__ user_eap_method_index; struct eap_user* user; int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct TYPE_2__ {scalar_t__ (* get_eap_user ) (int ,int const*,size_t,int,struct eap_user*) ;} ;


 int FUNC_0 (struct eap_user*) ;
 struct eap_user* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int const*,size_t,int,struct eap_user*) ;

int FUNC_3(struct eap_sm *VAR_0, const u8 *VAR_1, size_t VAR_2,
   int VAR_3)
{
 struct eap_user *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_0->eapol_cb == ((void*)0) ||
     VAR_0->eapol_cb->get_eap_user == ((void*)0))
  return -1;

 FUNC_0(VAR_0->user);
 VAR_0->user = ((void*)0);

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
     return -1;

 if (VAR_0->eapol_cb->get_eap_user(VAR_0->eapol_ctx, VAR_1,
           VAR_2, VAR_3, VAR_4) != 0) {
  FUNC_0(VAR_4);
  return -1;
 }

 VAR_0->user = VAR_4;
 VAR_0->user_eap_method_index = 0;

 return 0;
}
