
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_tls_data {int ssl; } ;
struct eap_sm {int dummy; } ;


 int FUNC_0 (struct eap_sm*,int *,char*,size_t,int) ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_0, void *VAR_1, char *VAR_2,
         size_t VAR_3, int VAR_4)
{
 struct eap_tls_data *VAR_5 = VAR_1;
 return FUNC_0(VAR_0, &VAR_5->ssl, VAR_2, VAR_3, VAR_4);
}
