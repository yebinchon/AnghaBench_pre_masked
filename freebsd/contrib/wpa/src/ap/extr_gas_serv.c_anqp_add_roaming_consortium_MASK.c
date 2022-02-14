
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_roaming_consortium {int len; int oi; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {unsigned int roaming_consortium_count; struct hostapd_roaming_consortium* roaming_consortium; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,struct wpabuf*,int ) ;
 int * FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*,int ,int ) ;
 int FUNC_4 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_1,
     struct wpabuf *VAR_2)
{
 unsigned int VAR_3;
 u8 *VAR_4;

 if (FUNC_0(VAR_1, VAR_2, VAR_0))
  return;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1->conf->roaming_consortium_count; VAR_3++) {
  struct hostapd_roaming_consortium *VAR_5;
  VAR_5 = &VAR_1->conf->roaming_consortium[VAR_3];
  FUNC_4(VAR_2, VAR_5->len);
  FUNC_3(VAR_2, VAR_5->oi, VAR_5->len);
 }
 FUNC_2(VAR_2, VAR_4);
}
