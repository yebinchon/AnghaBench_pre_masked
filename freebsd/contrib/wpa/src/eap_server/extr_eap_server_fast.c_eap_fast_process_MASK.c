
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_fast_data {int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_fast_data*,int ) ;
 scalar_t__ FUNC_1 (struct eap_sm*,int *,struct wpabuf*,struct eap_fast_data*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_4, void *VAR_5,
        struct wpabuf *VAR_6)
{
 struct eap_fast_data *VAR_7 = VAR_5;
 if (FUNC_1(VAR_4, &VAR_7->ssl, VAR_6, VAR_7,
       VAR_0, VAR_3,
       VAR_2) < 0)
  FUNC_0(VAR_7, VAR_1);
}
