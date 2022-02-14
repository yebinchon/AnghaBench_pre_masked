
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_state_machine {int pmkid_set; int pmkid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;

void FUNC_1(struct wpa_state_machine *VAR_1, const u8 *VAR_2)
{
 FUNC_0(VAR_1->pmkid, VAR_2, VAR_0);
 VAR_1->pmkid_set = 1;
}
