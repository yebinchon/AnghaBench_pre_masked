
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tls_data {scalar_t__ eap_type; } ;
struct eap_sm {int dummy; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int ,scalar_t__,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_10, void *VAR_11,
        struct wpabuf *VAR_12)
{
 struct eap_tls_data *VAR_13 = VAR_11;
 const u8 *VAR_14;
 size_t VAR_15;

 if (VAR_13->eap_type == VAR_0)
  VAR_14 = FUNC_0(VAR_3,
           VAR_2, VAR_12,
           &VAR_15);
 else if (VAR_13->eap_type == VAR_6)
  VAR_14 = FUNC_0(VAR_4,
           VAR_5, VAR_12,
           &VAR_15);
 else
  VAR_14 = FUNC_0(VAR_1, VAR_13->eap_type,
           VAR_12, &VAR_15);
 if (VAR_14 == ((void*)0) || VAR_15 < 1) {
  FUNC_1(VAR_8, "EAP-TLS: Invalid frame");
  return VAR_9;
 }

 return VAR_7;
}
