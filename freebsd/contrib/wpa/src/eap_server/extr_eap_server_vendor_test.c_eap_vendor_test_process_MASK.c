
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_vendor_test_data {scalar_t__ state; } ;
struct eap_sm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (struct eap_vendor_test_data*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_6, void *VAR_7,
        struct wpabuf *VAR_8)
{
 struct eap_vendor_test_data *VAR_9 = VAR_7;
 const u8 *VAR_10;
 size_t VAR_11;

 VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_8, &VAR_11);
 if (VAR_10 == ((void*)0) || VAR_11 < 1)
  return;

 if (VAR_9->state == VAR_4) {
  if (*VAR_10 == 2)
   FUNC_1(VAR_9, VAR_0);
  else
   FUNC_1(VAR_9, VAR_3);
 } else if (VAR_9->state == VAR_0) {
  if (*VAR_10 == 4)
   FUNC_1(VAR_9, VAR_5);
  else
   FUNC_1(VAR_9, VAR_3);
 } else
  FUNC_1(VAR_9, VAR_3);
}
