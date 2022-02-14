
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_mschapv2_data {int prev_challenge; } ;


 int FUNC_0 (struct wpabuf const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct eap_mschapv2_data *VAR_0,
     const struct wpabuf *VAR_1)
{




 FUNC_1(VAR_0->prev_challenge);
 VAR_0->prev_challenge = FUNC_0(VAR_1);
}
