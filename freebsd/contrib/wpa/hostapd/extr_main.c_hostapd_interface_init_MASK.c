
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hostapd_iface {TYPE_4__** bss; TYPE_3__* conf; struct hapd_interfaces* interfaces; } ;
struct hapd_interfaces {int dummy; } ;
struct TYPE_8__ {TYPE_1__* conf; } ;
struct TYPE_7__ {TYPE_2__** bss; } ;
struct TYPE_6__ {char* iface; } ;
struct TYPE_5__ {scalar_t__ logger_stdout_level; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 struct hostapd_iface* FUNC_1 (struct hapd_interfaces*,char const*) ;
 int FUNC_2 (struct hostapd_iface*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static struct hostapd_iface *
FUNC_5(struct hapd_interfaces *VAR_1, const char *VAR_2,
         const char *VAR_3, int VAR_4)
{
 struct hostapd_iface *VAR_5;
 int VAR_6;

 FUNC_4(VAR_0, "Configuration file: %s", VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_2) {
  FUNC_3(VAR_5->conf->bss[0]->iface, VAR_2,
      sizeof(VAR_5->conf->bss[0]->iface));
 }

 VAR_5->interfaces = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_5->bss[0]->conf->logger_stdout_level > 0)
   VAR_5->bss[0]->conf->logger_stdout_level--;
 }

 if (VAR_5->conf->bss[0]->iface[0] == '\0' &&
     !FUNC_0(VAR_5->bss[0])) {
  FUNC_4(VAR_0,
      "Interface name not specified in %s, nor by '-i' parameter",
      VAR_3);
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
