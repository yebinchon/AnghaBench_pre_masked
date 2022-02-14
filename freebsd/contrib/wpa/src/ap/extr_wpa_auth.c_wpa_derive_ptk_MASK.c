
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_state_machine {scalar_t__ wpa_key_mgmt; int pairwise; int ANonce; int addr; TYPE_1__* wpa_auth; scalar_t__ dpp_z; int pmk_r1_name; int SNonce; int pmk_r1_len; int pmk_r1; scalar_t__ ft_completed; } ;
struct wpa_ptk {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_state_machine*,struct wpa_ptk*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,struct wpa_ptk*,int *,scalar_t__,int ) ;
 int FUNC_3 (int const*,unsigned int,char*,int ,int ,int ,int const*,struct wpa_ptk*,scalar_t__,int ,int const*,size_t) ;
 int * FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct wpa_state_machine *VAR_2, const u8 *VAR_3,
     const u8 *VAR_4, unsigned int VAR_5,
     struct wpa_ptk *VAR_6)
{
 const u8 *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;
 return FUNC_3(VAR_4, VAR_5, "Pairwise key expansion",
         VAR_2->wpa_auth->addr, VAR_2->addr, VAR_2->ANonce, VAR_3,
         VAR_6, VAR_2->wpa_key_mgmt, VAR_2->pairwise, VAR_7, VAR_8);
}
