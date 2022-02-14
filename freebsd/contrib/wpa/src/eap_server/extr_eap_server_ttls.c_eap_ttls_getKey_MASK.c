
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ttls_data {scalar_t__ state; int ssl; } ;
struct eap_sm {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (struct eap_sm*,int *,char*,int *,int ,size_t) ;
 int FUNC_1 (int ,char*,int *,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_3(struct eap_sm *VAR_3, void *VAR_4, size_t *VAR_5)
{
 struct eap_ttls_data *VAR_6 = VAR_4;
 u8 *VAR_7;

 if (VAR_6->state != VAR_2)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_3, &VAR_6->ssl,
            "ttls keying material", ((void*)0), 0,
            VAR_0);
 if (VAR_7) {
  *VAR_5 = VAR_0;
  FUNC_1(VAR_1, "EAP-TTLS: Derived key",
    VAR_7, VAR_0);
 } else {
  FUNC_2(VAR_1, "EAP-TTLS: Failed to derive key");
 }

 return VAR_7;
}
