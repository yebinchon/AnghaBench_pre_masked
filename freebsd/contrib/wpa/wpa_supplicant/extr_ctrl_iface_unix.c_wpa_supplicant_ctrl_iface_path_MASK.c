
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {char* ifname; TYPE_1__* conf; } ;
struct TYPE_2__ {int * ctrl_interface; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,char*,char*) ;
 scalar_t__ FUNC_3 (size_t,int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static char * FUNC_8(struct wpa_supplicant *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;
 char *VAR_3, *VAR_4 = ((void*)0);
 int VAR_5;

 if (VAR_0->conf->ctrl_interface == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_4(VAR_0->conf->ctrl_interface);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (FUNC_6(VAR_3, "DIR=", 4) == 0) {
  char *VAR_6;
  VAR_4 = VAR_3 + 4;
  VAR_6 = FUNC_7(VAR_4, " GROUP=");
  if (VAR_6)
   *VAR_6 = '\0';
 } else
  VAR_4 = VAR_3;

 VAR_2 = FUNC_5(VAR_4) + FUNC_5(VAR_0->ifname) + 2;
 VAR_1 = FUNC_1(VAR_2);
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2, "%s/%s", VAR_4, VAR_0->ifname);
 if (FUNC_3(VAR_2, VAR_5)) {
  FUNC_0(VAR_3);
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 FUNC_0(VAR_3);
 return VAR_1;
}
