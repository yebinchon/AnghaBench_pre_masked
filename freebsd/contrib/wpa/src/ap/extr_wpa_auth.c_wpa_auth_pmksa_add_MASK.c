
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int kck_len; int kck; } ;
struct wpa_state_machine {scalar_t__ wpa; int wpa_key_mgmt; int addr; TYPE_3__* wpa_auth; TYPE_2__ PTK; } ;
struct eapol_state_machine {int dummy; } ;
struct TYPE_4__ {scalar_t__ disable_pmksa_caching; } ;
struct TYPE_6__ {int addr; int pmksa; TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int const*,unsigned int,int *,int ,int ,int ,int ,int,struct eapol_state_machine*,int ) ;
 int FUNC_1 (int ,char*,int const*,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct wpa_state_machine *VAR_4, const u8 *VAR_5,
         unsigned int VAR_6,
         int VAR_7, struct eapol_state_machine *VAR_8)
{
 if (VAR_4 == ((void*)0) || VAR_4->wpa != VAR_3 ||
     VAR_4->wpa_auth->conf.disable_pmksa_caching)
  return -1;
 if (FUNC_3(VAR_4->wpa_key_mgmt)) {
  if (VAR_6 > VAR_2)
   VAR_6 = VAR_2;
 } else if (VAR_6 > VAR_1) {
  VAR_6 = VAR_1;
 }

 FUNC_1(VAR_0, "RSN: Cache PMK", VAR_5, VAR_6);
 if (FUNC_0(VAR_4->wpa_auth->pmksa, VAR_5, VAR_6, ((void*)0),
     VAR_4->PTK.kck, VAR_4->PTK.kck_len,
     VAR_4->wpa_auth->addr, VAR_4->addr, VAR_7,
     VAR_8, VAR_4->wpa_key_mgmt))
  return 0;

 return -1;
}
