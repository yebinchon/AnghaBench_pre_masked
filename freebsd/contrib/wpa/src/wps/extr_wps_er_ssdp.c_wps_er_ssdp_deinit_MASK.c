
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er {scalar_t__ multicast_sd; scalar_t__ ssdp_sd; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct wps_er *VAR_1)
{
 if (VAR_1->multicast_sd >= 0) {
  FUNC_1(VAR_1->multicast_sd, VAR_0);
  FUNC_0(VAR_1->multicast_sd);
 }
 if (VAR_1->ssdp_sd >= 0) {
  FUNC_1(VAR_1->ssdp_sd, VAR_0);
  FUNC_0(VAR_1->ssdp_sd);
 }
}
