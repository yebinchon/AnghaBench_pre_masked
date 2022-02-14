
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_state_machine {TYPE_1__* group; struct wpa_authenticator* wpa_auth; int p2p_dev_addr; int addr; } ;
struct wpa_authenticator {TYPE_1__* group; } ;
struct TYPE_2__ {scalar_t__ wpa_group_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 struct wpa_state_machine* FUNC_1 (int) ;
 int FUNC_2 (struct wpa_authenticator*,TYPE_1__*) ;

struct wpa_state_machine *
FUNC_3(struct wpa_authenticator *VAR_2, const u8 *VAR_3,
    const u8 *VAR_4)
{
 struct wpa_state_machine *VAR_5;

 if (VAR_2->group->wpa_group_state == VAR_1)
  return ((void*)0);

 VAR_5 = FUNC_1(sizeof(struct wpa_state_machine));
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_0(VAR_5->addr, VAR_3, VAR_0);
 if (VAR_4)
  FUNC_0(VAR_5->p2p_dev_addr, VAR_4, VAR_0);

 VAR_5->wpa_auth = VAR_2;
 VAR_5->group = VAR_2->group;
 FUNC_2(VAR_5->wpa_auth, VAR_5->group);

 return VAR_5;
}
