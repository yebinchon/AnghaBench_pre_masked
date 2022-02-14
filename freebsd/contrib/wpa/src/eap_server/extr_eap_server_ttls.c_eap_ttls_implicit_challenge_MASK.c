
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ttls_data {int ssl; } ;
struct eap_sm {int dummy; } ;


 int * FUNC_0 (struct eap_sm*,int *,char*,int *,int ,size_t) ;

__attribute__((used)) static u8 * FUNC_1(struct eap_sm *VAR_0,
     struct eap_ttls_data *VAR_1, size_t VAR_2)
{
 return FUNC_0(VAR_0, &VAR_1->ssl, "ttls challenge",
      ((void*)0), 0, VAR_2);
}
