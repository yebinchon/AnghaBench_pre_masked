
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ sched_scanning; scalar_t__ pno; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,unsigned int) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;

int FUNC_4(struct wpa_supplicant *VAR_2,
     unsigned int VAR_3)
{
 FUNC_0(VAR_2, VAR_3);
 if (VAR_2->pno) {
  if (VAR_3 & VAR_0) {
   FUNC_3(VAR_2);
   FUNC_2(VAR_2);
  }
 } else if (VAR_2->sched_scanning && (VAR_3 & VAR_1)) {
  FUNC_1(VAR_2);
 }

 return 0;
}
