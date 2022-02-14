
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int addr; struct eapol_state_machine* eapol_sm; } ;
struct radius_msg {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {size_t identity_len; int * identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,char*,char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct radius_msg*,int ,int **,size_t*,int *) ;

__attribute__((used)) static void FUNC_4(struct hostapd_data *VAR_3,
        struct sta_info *VAR_4,
        struct radius_msg *VAR_5)
{
 u8 *VAR_6, *VAR_7;
 size_t VAR_8;
 struct eapol_state_machine *VAR_9 = VAR_4->eapol_sm;

 if (VAR_9 == ((void*)0))
  return;

 if (FUNC_3(VAR_5, VAR_2, &VAR_6, &VAR_8,
        ((void*)0)) < 0)
  return;

 VAR_7 = (u8 *) FUNC_0(VAR_6, VAR_8);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_1(VAR_3, VAR_4->addr, VAR_1,
         VAR_0, "old identity '%s' updated with "
         "User-Name from Access-Accept '%s'",
         VAR_9->identity ? (char *) VAR_9->identity : "N/A",
         (char *) VAR_7);

 FUNC_2(VAR_9->identity);
 VAR_9->identity = VAR_7;
 VAR_9->identity_len = VAR_8;
}
