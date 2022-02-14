
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wps_data {TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int ap_encr_type; int ap_auth_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_6, struct wpabuf *VAR_7)
{
 u16 VAR_8 = VAR_6->wps->ap_encr_type;






 if (VAR_6->wps->ap_auth_type & (VAR_2 | VAR_3)) {
  if (VAR_8 & VAR_4)
   VAR_8 = VAR_4;
  else if (VAR_8 & VAR_5)
   VAR_8 = VAR_5;
 }

 FUNC_0(VAR_1, "WPS:  * Encryption Type (0x%x)", VAR_8);
 FUNC_1(VAR_7, VAR_0);
 FUNC_1(VAR_7, 2);
 FUNC_1(VAR_7, VAR_8);
 return 0;
}
