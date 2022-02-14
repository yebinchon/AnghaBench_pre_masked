
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sake_data {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sake_data*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_3,
          struct eap_sake_data *VAR_4,
          const struct wpabuf *VAR_5,
          const u8 *VAR_6, size_t VAR_7)
{
 if (VAR_4->state != VAR_1)
  return;

 FUNC_1(VAR_2, "EAP-SAKE: Received Response/Identity");

 FUNC_0(VAR_4, VAR_0);
}
