
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; TYPE_1__* conf; } ;
struct hostapd_bss_config {char* ctrl_interface; int iface; } ;
struct hapd_interfaces {size_t count; struct hostapd_iface** iface; } ;
struct TYPE_2__ {struct hostapd_bss_config** bss; } ;


 int FUNC_0 (char*,int,char*,int ,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(struct hapd_interfaces *VAR_0,
         const char *VAR_1,
         char *VAR_2, int VAR_3)
{
 size_t VAR_4, VAR_5;
 int VAR_6;
 char *VAR_7, *VAR_8;
 struct hostapd_iface *VAR_9;
 int VAR_10 = 0;

 if (VAR_1)
  VAR_10 = !!FUNC_2(VAR_1, "ctrl");

 VAR_7 = VAR_2;
 VAR_8 = VAR_2 + VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++) {
  VAR_9 = VAR_0->iface[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_9->num_bss; VAR_5++) {
   struct hostapd_bss_config *VAR_11;

   VAR_11 = VAR_9->conf->bss[VAR_5];
   if (VAR_10)
    VAR_6 = FUNC_0(VAR_7, VAR_8 - VAR_7,
        "%s ctrl_iface=%s\n",
        VAR_11->iface,
        VAR_11->ctrl_interface ?
        VAR_11->ctrl_interface : "N/A");
   else
    VAR_6 = FUNC_0(VAR_7, VAR_8 - VAR_7, "%s\n",
        VAR_11->iface);
   if (FUNC_1(VAR_8 - VAR_7, VAR_6)) {
    *VAR_7 = '\0';
    return VAR_7 - VAR_2;
   }
   VAR_7 += VAR_6;
  }
 }

 return VAR_7 - VAR_2;
}
