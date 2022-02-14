
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {unsigned int mac_addr_rand_supported; unsigned int mac_addr_rand_enable; int * mac_addr_pno; int * mac_addr_sched_scan; int * mac_addr_scan; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int ,char*,unsigned int,...) ;
 int FUNC_4 (struct wpa_supplicant*,unsigned int) ;

int FUNC_5(struct wpa_supplicant *VAR_5,
    unsigned int VAR_6, const u8 *VAR_7,
    const u8 *VAR_8)
{
 u8 *VAR_9 = ((void*)0);

 if ((VAR_5->mac_addr_rand_supported & VAR_6) != VAR_6 ) {
  FUNC_3(VAR_4,
      "scan: MAC randomization type %u != supported=%u",
      VAR_6, VAR_5->mac_addr_rand_supported);
  return -1;
 }

 FUNC_4(VAR_5, VAR_6);

 if (VAR_7) {
  VAR_9 = FUNC_1(2 * VAR_0);
  if (!VAR_9)
   return -1;
  FUNC_2(VAR_9, VAR_7, VAR_0);
  FUNC_2(VAR_9 + VAR_0, VAR_8, VAR_0);
 }

 if (VAR_6 == VAR_2) {
  VAR_5->mac_addr_scan = VAR_9;
 } else if (VAR_6 == VAR_3) {
  VAR_5->mac_addr_sched_scan = VAR_9;
 } else if (VAR_6 == VAR_1) {
  VAR_5->mac_addr_pno = VAR_9;
 } else {
  FUNC_3(VAR_4,
      "scan: Invalid MAC randomization type=0x%x",
      VAR_6);
  FUNC_0(VAR_9);
  return -1;
 }

 VAR_5->mac_addr_rand_enable |= VAR_6;
 return 0;
}
