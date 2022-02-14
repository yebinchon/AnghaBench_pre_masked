
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ last_gtk_len; TYPE_2__* conf; int wpa; int last_gtk; TYPE_1__* global; } ;
struct TYPE_4__ {scalar_t__* country; } ;
struct TYPE_3__ {int wifi_display; scalar_t__ p2p_disabled; int * p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,size_t,char*,int,...) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*,TYPE_2__*,char*,size_t) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,size_t,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct wpa_supplicant *VAR_3,
      char *VAR_4, char *VAR_5, size_t VAR_6)
{
 int VAR_7 = -1;

 FUNC_6(VAR_0, "CTRL_IFACE GET '%s'", VAR_4);

 if (FUNC_3(VAR_4, "version") == 0) {
  VAR_7 = FUNC_0(VAR_5, VAR_6, "%s", VAR_1);
 } else if (FUNC_2(VAR_4, "country") == 0) {
  if (VAR_3->conf->country[0] && VAR_3->conf->country[1])
   VAR_7 = FUNC_0(VAR_5, VAR_6, "%c%c",
       VAR_3->conf->country[0],
       VAR_3->conf->country[1]);
 } else if (FUNC_3(VAR_4, "tls_library") == 0) {
  VAR_7 = FUNC_4(VAR_5, VAR_6);






 } else {
  VAR_7 = FUNC_5(VAR_4, VAR_3->conf, VAR_5, VAR_6);
 }

 if (FUNC_1(VAR_6, VAR_7))
  return -1;
 return VAR_7;
}
