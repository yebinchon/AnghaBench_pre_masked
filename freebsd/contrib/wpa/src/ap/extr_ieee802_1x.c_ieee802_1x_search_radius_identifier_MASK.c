
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_id_search {struct eapol_state_machine* sm; int identifier; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {int dummy; } ;


 int FUNC_0 (struct hostapd_data*,int ,struct sta_id_search*) ;
 int VAR_0 ;

__attribute__((used)) static struct eapol_state_machine *
FUNC_1(struct hostapd_data *VAR_1, u8 VAR_2)
{
 struct sta_id_search VAR_3;
 VAR_3.identifier = VAR_2;
 VAR_3.sm = ((void*)0);
 FUNC_0(VAR_1, VAR_0, &VAR_3);
 return VAR_3.sm;
}
