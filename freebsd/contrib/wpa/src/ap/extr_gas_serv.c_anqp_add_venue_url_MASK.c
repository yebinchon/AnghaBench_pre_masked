
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_venue_url {scalar_t__ url_len; int url; scalar_t__ venue_number; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {unsigned int venue_url_count; struct hostapd_venue_url* venue_url; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,struct wpabuf*,int ) ;
 int * FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*,int ,scalar_t__) ;
 int FUNC_4 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_1, struct wpabuf *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_0))
  return;

 if (VAR_1->conf->venue_url) {
  u8 *VAR_3;
  unsigned int VAR_4;

  VAR_3 = FUNC_1(VAR_2, VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_1->conf->venue_url_count; VAR_4++) {
   struct hostapd_venue_url *VAR_5;

   VAR_5 = &VAR_1->conf->venue_url[VAR_4];
   FUNC_4(VAR_2, 1 + VAR_5->url_len);
   FUNC_4(VAR_2, VAR_5->venue_number);
   FUNC_3(VAR_2, VAR_5->url, VAR_5->url_len);
  }
  FUNC_2(VAR_2, VAR_3);
 }
}
