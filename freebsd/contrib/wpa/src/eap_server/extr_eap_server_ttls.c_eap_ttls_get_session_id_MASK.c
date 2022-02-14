
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_ttls_data {scalar_t__ state; int ssl; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct eap_sm*,int *,int ,size_t*) ;

__attribute__((used)) static u8 * FUNC_1(struct eap_sm *VAR_2, void *VAR_3, size_t *VAR_4)
{
 struct eap_ttls_data *VAR_5 = VAR_3;

 if (VAR_5->state != VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_2, &VAR_5->ssl, VAR_0,
      VAR_4);
}
