
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_authenticator {int addr; int pmksa; } ;
struct eapol_state_machine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,size_t,int *,int *,int ,int ,int const*,int,struct eapol_state_machine*,int ) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;

int FUNC_2(struct wpa_authenticator *VAR_2,
          const u8 *VAR_3, size_t VAR_4, const u8 *VAR_5,
          int VAR_6,
          struct eapol_state_machine *VAR_7)
{
 if (VAR_2 == ((void*)0))
  return -1;

 FUNC_1(VAR_0, "RSN: Cache PMK from preauth", VAR_3, VAR_4);
 if (FUNC_0(VAR_2->pmksa, VAR_3, VAR_4, ((void*)0),
     ((void*)0), 0,
     VAR_2->addr,
     VAR_5, VAR_6, VAR_7,
     VAR_1))
  return 0;

 return -1;
}
