
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_teap_pac {int dummy; } ;
struct eap_teap_data {scalar_t__ provisioning; int pac; scalar_t__ use_pac_binary_format; int max_pac_list_len; int current_pac; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {int pac_file; } ;
struct eap_method_ret {int dummy; } ;
typedef int entry ;


 int VAR_0 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (int *,int *,struct eap_teap_pac*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct eap_teap_pac*) ;
 scalar_t__ FUNC_4 (struct eap_teap_pac*,int *,size_t) ;
 int FUNC_5 (struct eap_sm*,int ,int ) ;
 int FUNC_6 (struct eap_sm*,int ,int ) ;
 struct wpabuf* FUNC_7 () ;
 int FUNC_8 (struct eap_teap_pac*,int ,int) ;
 int FUNC_9 (int ,char*,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct eap_sm *VAR_1,
         struct eap_teap_data *VAR_2,
         struct eap_method_ret *VAR_3,
         u8 *VAR_4, size_t VAR_5)
{
 struct eap_peer_config *VAR_6 = FUNC_0(VAR_1);
 struct eap_teap_pac VAR_7;

 FUNC_8(&VAR_7, 0, sizeof(VAR_7));
 if (FUNC_4(&VAR_7, VAR_4, VAR_5) ||
     FUNC_3(&VAR_7))
  return ((void*)0);

 FUNC_1(&VAR_2->pac, &VAR_2->current_pac, &VAR_7);
 FUNC_2(VAR_2->pac, VAR_2->max_pac_list_len);
 if (VAR_2->use_pac_binary_format)
  FUNC_6(VAR_1, VAR_2->pac, VAR_6->pac_file);
 else
  FUNC_5(VAR_1, VAR_2->pac, VAR_6->pac_file);

 FUNC_9(VAR_0,
     "EAP-TEAP: Send PAC-Acknowledgement - %s initiated provisioning completed successfully",
     VAR_2->provisioning ? "peer" : "server");
 return FUNC_7();
}
