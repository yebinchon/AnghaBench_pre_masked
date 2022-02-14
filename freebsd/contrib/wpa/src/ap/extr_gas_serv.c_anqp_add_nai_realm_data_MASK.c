
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_nai_realm_data {int * realm; scalar_t__ encoding; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpabuf*,struct hostapd_nai_realm_data*) ;
 int FUNC_1 (struct wpabuf*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int * FUNC_4 (struct wpabuf*,int) ;
 int FUNC_5 (struct wpabuf*,int ) ;
 int FUNC_6 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct wpabuf *VAR_1,
        struct hostapd_nai_realm_data *VAR_2,
        unsigned int VAR_3)
{
 u8 *VAR_4;

 FUNC_3(VAR_0, "realm=%s, len=%d", VAR_2->realm[VAR_3],
     (int) FUNC_2(VAR_2->realm[VAR_3]));
 VAR_4 = FUNC_4(VAR_1, 2);
 FUNC_6(VAR_1, VAR_2->encoding);
 FUNC_6(VAR_1, FUNC_2(VAR_2->realm[VAR_3]));
 FUNC_5(VAR_1, VAR_2->realm[VAR_3]);
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_4);
}
