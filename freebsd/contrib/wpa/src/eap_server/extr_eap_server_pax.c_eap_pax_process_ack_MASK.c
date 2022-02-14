
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pax_data {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct eap_sm *VAR_3,
    struct eap_pax_data *VAR_4,
    struct wpabuf *VAR_5)
{
 if (VAR_4->state != VAR_1)
  return;

 FUNC_0(VAR_0, "EAP-PAX: Received PAX-ACK - authentication "
     "completed successfully");
 VAR_4->state = VAR_2;
}
