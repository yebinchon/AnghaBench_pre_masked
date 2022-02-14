
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wps_data {TYPE_1__* wps; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int wps_state; scalar_t__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int ) ;

__attribute__((used)) static int FUNC_3(struct wps_data *VAR_3, struct wpabuf *VAR_4)
{
 u8 VAR_5;
 if (VAR_3->wps->ap)
  VAR_5 = VAR_3->wps->wps_state;
 else
  VAR_5 = VAR_2;
 FUNC_0(VAR_1, "WPS:  * Wi-Fi Protected Setup State (%d)",
     VAR_5);
 FUNC_1(VAR_4, VAR_0);
 FUNC_1(VAR_4, 1);
 FUNC_2(VAR_4, VAR_5);
 return 0;
}
