
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int expected_failure; } ;
struct eap_peer_config {int pac_file; } ;
struct eap_method_ret {int methodState; void* decision; } ;
struct eap_fast_pac {int dummy; } ;
struct eap_fast_data {scalar_t__ success; scalar_t__ anon_provisioning; scalar_t__ provisioning; int pac; scalar_t__ use_pac_binary_format; int max_pac_list_len; int current_pac; } ;
typedef int entry ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,struct eap_fast_pac*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct eap_fast_pac*) ;
 scalar_t__ FUNC_3 (struct eap_fast_pac*,int *,size_t) ;
 int FUNC_4 (struct eap_sm*,int ,int ) ;
 int FUNC_5 (struct eap_sm*,int ,int ) ;
 struct wpabuf* FUNC_6 () ;
 struct eap_peer_config* FUNC_7 (struct eap_sm*) ;
 int FUNC_8 (struct eap_fast_pac*,int ,int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct eap_sm *VAR_4,
         struct eap_fast_data *VAR_5,
         struct eap_method_ret *VAR_6,
         u8 *VAR_7, size_t VAR_8)
{
 struct eap_peer_config *VAR_9 = FUNC_7(VAR_4);
 struct eap_fast_pac VAR_10;

 FUNC_8(&VAR_10, 0, sizeof(VAR_10));
 if (FUNC_3(&VAR_10, VAR_7, VAR_8) ||
     FUNC_2(&VAR_10))
  return ((void*)0);

 FUNC_0(&VAR_5->pac, &VAR_5->current_pac, &VAR_10);
 FUNC_1(VAR_5->pac, VAR_5->max_pac_list_len);
 if (VAR_5->use_pac_binary_format)
  FUNC_5(VAR_4, VAR_5->pac, VAR_9->pac_file);
 else
  FUNC_4(VAR_4, VAR_5->pac, VAR_9->pac_file);

 if (VAR_5->provisioning) {
  if (VAR_5->anon_provisioning) {





   VAR_5->success = 0;
   VAR_6->decision = VAR_1;
  } else {




   VAR_6->decision = VAR_0;
  }
  FUNC_9(VAR_3, "EAP-FAST: Send PAC-Acknowledgement TLV "
      "- Provisioning completed successfully");
  VAR_4->expected_failure = 1;
 } else {
  FUNC_9(VAR_3, "EAP-FAST: Send PAC-Acknowledgement TLV "
      "- PAC refreshing completed successfully");
  VAR_6->decision = VAR_0;
 }
 VAR_6->methodState = VAR_2;
 return FUNC_6();
}
