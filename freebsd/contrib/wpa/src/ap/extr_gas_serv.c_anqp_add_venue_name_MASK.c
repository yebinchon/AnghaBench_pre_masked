
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_lang_string {int name_len; int name; int lang; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int venue_group; int venue_type; unsigned int venue_name_count; struct hostapd_lang_string* venue_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,struct wpabuf*,int ) ;
 int * FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int *) ;
 int FUNC_3 (struct wpabuf*,int ,int) ;
 int FUNC_4 (struct wpabuf*,int) ;

__attribute__((used)) static void FUNC_5(struct hostapd_data *VAR_1, struct wpabuf *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_0))
  return;

 if (VAR_1->conf->venue_name) {
  u8 *VAR_3;
  unsigned int VAR_4;
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_4(VAR_2, VAR_1->conf->venue_group);
  FUNC_4(VAR_2, VAR_1->conf->venue_type);
  for (VAR_4 = 0; VAR_4 < VAR_1->conf->venue_name_count; VAR_4++) {
   struct hostapd_lang_string *VAR_5;
   VAR_5 = &VAR_1->conf->venue_name[VAR_4];
   FUNC_4(VAR_2, 3 + VAR_5->name_len);
   FUNC_3(VAR_2, VAR_5->lang, 3);
   FUNC_3(VAR_2, VAR_5->name, VAR_5->name_len);
  }
  FUNC_2(VAR_2, VAR_3);
 }
}
