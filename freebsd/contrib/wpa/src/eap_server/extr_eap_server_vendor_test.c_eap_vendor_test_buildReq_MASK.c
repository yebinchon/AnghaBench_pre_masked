
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_vendor_test_data {scalar_t__ state; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_3(struct eap_sm *VAR_5, void *VAR_6,
      u8 VAR_7)
{
 struct eap_vendor_test_data *VAR_8 = VAR_6;
 struct wpabuf *VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_2, 1,
       VAR_0, VAR_7);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_4, "EAP-VENDOR-TEST: Failed to allocate "
      "memory for request");
  return ((void*)0);
 }

 FUNC_2(VAR_9, VAR_8->state == VAR_3 ? 1 : 3);

 return VAR_9;
}
