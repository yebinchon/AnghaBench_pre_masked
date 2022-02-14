
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ tls_v13; } ;
struct eap_tls_data {scalar_t__ state; TYPE_1__ ssl; } ;
struct eap_sm {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (struct eap_sm*,TYPE_1__*,char const*,int const*,size_t,int) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_6(struct eap_sm *VAR_5, void *VAR_6, size_t *VAR_7)
{
 struct eap_tls_data *VAR_8 = VAR_6;
 u8 *VAR_9, *VAR_10;
 const char *VAR_11;
 const u8 VAR_12[] = { VAR_2 };
 const u8 *VAR_13 = ((void*)0);
 size_t VAR_14 = 0;

 if (VAR_8->state != VAR_4)
  return ((void*)0);

 if (VAR_8->ssl.tls_v13) {
  VAR_11 = "EXPORTER_EAP_TLS_Key_Material";
  VAR_13 = VAR_12;
  VAR_14 = 1;
 } else {
  VAR_11 = "client EAP encryption";
 }
 VAR_9 = FUNC_1(VAR_5, &VAR_8->ssl, VAR_11,
            VAR_13, VAR_14,
            VAR_1 + VAR_0);
 if (VAR_9) {
  VAR_10 = FUNC_2(VAR_0);
  if (VAR_10)
   FUNC_3(VAR_10, VAR_9 + VAR_1,
      VAR_0);
  FUNC_0(VAR_9, VAR_1 + VAR_0);
 } else
  VAR_10 = ((void*)0);

 if (VAR_10) {
  *VAR_7 = VAR_0;
  FUNC_4(VAR_3, "EAP-TLS: Derived EMSK",
       VAR_10, VAR_0);
 } else {
  FUNC_5(VAR_3, "EAP-TLS: Failed to derive EMSK");
 }

 return VAR_10;
}
