
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {scalar_t__ pno; scalar_t__ sched_scanning; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,unsigned int,int const*,int const*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*) ;

int FUNC_5(struct wpa_supplicant *VAR_4,
           unsigned int VAR_5, const u8 *VAR_6,
           const u8 *VAR_7)
{
 if ((VAR_6 && !VAR_7) || (!VAR_6 && VAR_7)) {
  FUNC_0(VAR_3,
      "MAC_ADDR_RAND_SCAN invalid addr/mask combination");
  return -1;
 }

 if (VAR_6 && VAR_7 && (!(VAR_7[0] & 0x01) || (VAR_6[0] & 0x01))) {
  FUNC_0(VAR_3,
      "MAC_ADDR_RAND_SCAN cannot allow multicast address");
  return -1;
 }

 if (VAR_5 & VAR_1) {
  if (FUNC_1(VAR_4, VAR_1,
      VAR_6, VAR_7))
   return -1;
 }

 if (VAR_5 & VAR_2) {
  if (FUNC_1(VAR_4, VAR_2,
      VAR_6, VAR_7))
   return -1;

  if (VAR_4->sched_scanning && !VAR_4->pno)
   FUNC_2(VAR_4);
 }

 if (VAR_5 & VAR_0) {
  if (FUNC_1(VAR_4, VAR_0,
      VAR_6, VAR_7))
   return -1;

  if (VAR_4->pno) {
   FUNC_4(VAR_4);
   FUNC_3(VAR_4);
  }
 }

 return 0;
}
