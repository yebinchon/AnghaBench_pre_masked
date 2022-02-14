
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpa_supplicant {TYPE_1__* conf; } ;
struct ieee802_1x_hdr {int length; int type; int version; } ;
struct TYPE_2__ {int eapol_version; } ;


 int FUNC_0 (int) ;
 struct ieee802_1x_hdr* FUNC_1 (size_t) ;
 int FUNC_2 (struct ieee802_1x_hdr*,void const*,int) ;
 int FUNC_3 (struct ieee802_1x_hdr*,int ,int) ;

__attribute__((used)) static u8 * FUNC_4(const struct wpa_supplicant *VAR_0, u8 VAR_1,
       const void *VAR_2, u16 VAR_3,
       size_t *VAR_4, void **VAR_5)
{
 struct ieee802_1x_hdr *VAR_6;

 *VAR_4 = sizeof(*VAR_6) + VAR_3;
 VAR_6 = FUNC_1(*VAR_4);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->version = VAR_0->conf->eapol_version;
 VAR_6->type = VAR_1;
 VAR_6->length = FUNC_0(VAR_3);

 if (VAR_2)
  FUNC_2(VAR_6 + 1, VAR_2, VAR_3);
 else
  FUNC_3(VAR_6 + 1, 0, VAR_3);

 if (VAR_5)
  *VAR_5 = VAR_6 + 1;

 return (u8 *) VAR_6;
}
