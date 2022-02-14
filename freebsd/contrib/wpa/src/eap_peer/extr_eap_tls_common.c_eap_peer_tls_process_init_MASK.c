
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ssl_data {unsigned int tls_in_left; unsigned int tls_in_total; int * tls_in; int ssl_ctx; } ;
struct eap_sm {int workaround; } ;
struct eap_method_ret {void* allowNotifications; int decision; int methodState; void* ignore; } ;
typedef scalar_t__ EapType ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 unsigned int FUNC_0 (int const*) ;
 int* FUNC_1 (int ,scalar_t__,struct wpabuf const*,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct wpabuf const*) ;

const u8 * FUNC_6(struct eap_sm *VAR_14,
         struct eap_ssl_data *VAR_15,
         EapType VAR_16,
         struct eap_method_ret *VAR_17,
         const struct wpabuf *VAR_18,
         size_t *VAR_19, u8 *VAR_20)
{
 const u8 *VAR_21;
 size_t VAR_22;
 unsigned int VAR_23;

 if (FUNC_2(VAR_15->ssl_ctx)) {
  FUNC_3(VAR_12, "SSL: TLS errors detected");
  VAR_17->ignore = VAR_13;
  return ((void*)0);
 }

 if (VAR_16 == VAR_2)
  VAR_21 = FUNC_1(VAR_5,
           VAR_4, VAR_18,
           &VAR_22);
 else if (VAR_16 == VAR_8)
  VAR_21 = FUNC_1(VAR_6,
           VAR_7, VAR_18,
           &VAR_22);
 else
  VAR_21 = FUNC_1(VAR_3, VAR_16, VAR_18,
           &VAR_22);
 if (VAR_21 == ((void*)0)) {
  VAR_17->ignore = VAR_13;
  return ((void*)0);
 }
 if (VAR_22 == 0) {
  FUNC_3(VAR_11, "SSL: Invalid TLS message: no Flags "
      "octet included");
  if (!VAR_14->workaround) {
   VAR_17->ignore = VAR_13;
   return ((void*)0);
  }

  FUNC_3(VAR_11, "SSL: Workaround - assume no Flags "
      "indicates ACK frame");
  *VAR_20 = 0;
 } else {
  *VAR_20 = *VAR_21++;
  VAR_22--;
 }
 FUNC_3(VAR_11, "SSL: Received packet(len=%lu) - "
     "Flags 0x%02x", (unsigned long) FUNC_5(VAR_18),
     *VAR_20);
 if (*VAR_20 & VAR_1) {
  if (VAR_22 < 4) {
   FUNC_3(VAR_12, "SSL: Short frame with TLS "
       "length");
   VAR_17->ignore = VAR_13;
   return ((void*)0);
  }
  VAR_23 = FUNC_0(VAR_21);
  FUNC_3(VAR_11, "SSL: TLS Message Length: %d",
      VAR_23);
  if (VAR_15->tls_in_left == 0) {
   VAR_15->tls_in_total = VAR_23;
   VAR_15->tls_in_left = VAR_23;
   FUNC_4(VAR_15->tls_in);
   VAR_15->tls_in = ((void*)0);
  }
  VAR_21 += 4;
  VAR_22 -= 4;

  if (VAR_22 > VAR_23) {
   FUNC_3(VAR_12, "SSL: TLS Message Length (%d "
       "bytes) smaller than this fragment (%d "
       "bytes)", (int) VAR_23, (int) VAR_22);
   VAR_17->ignore = VAR_13;
   return ((void*)0);
  }
 }

 VAR_17->ignore = VAR_9;
 VAR_17->methodState = VAR_10;
 VAR_17->decision = VAR_0;
 VAR_17->allowNotifications = VAR_13;

 *VAR_19 = VAR_22;
 return VAR_21;
}
