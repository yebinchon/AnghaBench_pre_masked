
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {int dummy; } ;


 int FUNC_0 (struct hostapd_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_0, struct wpabuf *VAR_1,
        u16 VAR_2)
{
 if (FUNC_1(VAR_0, VAR_2)) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  return 1;
 }

 return 0;
}
