
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ tls_v13; } ;
struct eap_tls_data {scalar_t__ state; TYPE_1__ ssl; } ;
struct eap_sm {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (struct eap_sm*,TYPE_1__*,char const*,int const*,size_t,scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,int *,size_t) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_4(struct eap_sm *VAR_5, void *VAR_6, size_t *VAR_7)
{
 struct eap_tls_data *VAR_8 = VAR_6;
 u8 *VAR_9;
 const char *VAR_10;
 const u8 VAR_11[] = { VAR_2 };
 const u8 *VAR_12 = ((void*)0);
 size_t VAR_13 = 0;

 if (VAR_8->state != VAR_4)
  return ((void*)0);

 if (VAR_8->ssl.tls_v13) {
  VAR_10 = "EXPORTER_EAP_TLS_Key_Material";
  VAR_12 = VAR_11;
  VAR_13 = 1;
 } else {
  VAR_10 = "client EAP encryption";
 }
 VAR_9 = FUNC_0(VAR_5, &VAR_8->ssl, VAR_10,
            VAR_12, VAR_13,
            VAR_1 + VAR_0);
 if (VAR_9) {
  *VAR_7 = VAR_1;
  FUNC_2(VAR_3, "EAP-TLS: Derived key",
       VAR_9, VAR_1);
  FUNC_1(VAR_9 + VAR_1, 0, VAR_0);
 } else {
  FUNC_3(VAR_3, "EAP-TLS: Failed to derive key");
 }

 return VAR_9;
}
