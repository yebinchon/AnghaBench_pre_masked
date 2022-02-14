
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int * web_srv; int web_port; int ip_addr; } ;
struct in_addr {int s_addr; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct in_addr*,int,int ,struct upnp_wps_device_sm*) ;
 int VAR_0 ;
 int FUNC_2 (struct upnp_wps_device_sm*) ;

int FUNC_3(struct upnp_wps_device_sm *VAR_1)
{
 struct in_addr VAR_2;
 VAR_2.s_addr = VAR_1->ip_addr;
 VAR_1->web_srv = FUNC_1(&VAR_2, -1, VAR_0,
           VAR_1);
 if (VAR_1->web_srv == ((void*)0)) {
  FUNC_2(VAR_1);
  return -1;
 }
 VAR_1->web_port = FUNC_0(VAR_1->web_srv);

 return 0;
}
