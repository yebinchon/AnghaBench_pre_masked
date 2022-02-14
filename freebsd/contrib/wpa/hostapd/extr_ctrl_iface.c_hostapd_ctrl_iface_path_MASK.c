
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int * iface; int * ctrl_interface; } ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,size_t,char*,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static char * FUNC_3(struct hostapd_data *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;

 if (VAR_0->conf->ctrl_interface == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0->conf->ctrl_interface) +
  FUNC_2(VAR_0->conf->iface) + 2;
 VAR_1 = FUNC_0(VAR_2);
 if (VAR_1 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_1, VAR_2, "%s/%s",
      VAR_0->conf->ctrl_interface, VAR_0->conf->iface);
 VAR_1[VAR_2 - 1] = '\0';
 return VAR_1;
}
