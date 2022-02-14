
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct eap_ssl_data {int conn; } ;
struct eap_sm {int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* FUNC_0 (int ,int,struct wpabuf const*,size_t*) ;
 int FUNC_1 (struct eap_ssl_data*) ;
 int FUNC_2 (struct eap_ssl_data*,int,int const**,size_t*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (struct wpabuf const*) ;

int FUNC_6(struct eap_sm *VAR_10, struct eap_ssl_data *VAR_11,
      struct wpabuf *VAR_12, void *VAR_13, int VAR_14,
      int (*VAR_15)(struct eap_sm *VAR_16, void *VAR_17,
            int VAR_18),
      void (*VAR_19)(struct eap_sm *VAR_20, void *VAR_21,
         const struct wpabuf *VAR_22))
{
 const u8 *VAR_23;
 u8 VAR_24;
 size_t VAR_25;
 int VAR_26, VAR_27 = 0;

 if (VAR_14 == VAR_1)
  VAR_23 = FUNC_0(VAR_4,
           VAR_3, VAR_12,
           &VAR_25);
 else if (VAR_14 == VAR_7)
  VAR_23 = FUNC_0(VAR_5,
           VAR_6, VAR_12,
           &VAR_25);
 else
  VAR_23 = FUNC_0(VAR_2, VAR_14, VAR_12,
           &VAR_25);
 if (VAR_23 == ((void*)0) || VAR_25 < 1)
  return 0;
 VAR_24 = *VAR_23++;
 VAR_25--;
 FUNC_4(VAR_8, "SSL: Received packet(len=%lu) - Flags 0x%02x",
     (unsigned long) FUNC_5(VAR_12), VAR_24);

 if (VAR_15 &&
     VAR_15(VAR_10, VAR_13, VAR_24 & VAR_0) < 0)
  return -1;

 VAR_26 = FUNC_2(VAR_11, VAR_24, &VAR_23, &VAR_25);
 if (VAR_26 < 0) {
  VAR_27 = -1;
  goto done;
 } else if (VAR_26 == 1)
  return 0;

 if (VAR_19)
  VAR_19(VAR_10, VAR_13, VAR_12);

 if (FUNC_3(VAR_10->ssl_ctx, VAR_11->conn) > 1) {
  FUNC_4(VAR_9, "SSL: Locally detected fatal error in "
      "TLS processing");
  VAR_27 = -1;
 }

done:
 FUNC_1(VAR_11);

 return VAR_27;
}
