
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int mac_addr_rand_enable; int * mac_addr_pno; int * mac_addr_sched_scan; int * mac_addr_scan; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct wpa_supplicant *VAR_4,
        unsigned int VAR_5)
{
 VAR_5 &= VAR_0;
 VAR_4->mac_addr_rand_enable &= ~VAR_5;

 if (VAR_5 & VAR_2) {
  FUNC_0(VAR_4->mac_addr_scan);
  VAR_4->mac_addr_scan = ((void*)0);
 }

 if (VAR_5 & VAR_3) {
  FUNC_0(VAR_4->mac_addr_sched_scan);
  VAR_4->mac_addr_sched_scan = ((void*)0);
 }

 if (VAR_5 & VAR_1) {
  FUNC_0(VAR_4->mac_addr_pno);
  VAR_4->mac_addr_pno = ((void*)0);
 }
}
