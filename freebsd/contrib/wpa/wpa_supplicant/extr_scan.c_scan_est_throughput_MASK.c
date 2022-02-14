
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int hw_capab; } ;
struct wpa_scan_res {int snr; int est_throughput; } ;
typedef enum local_hw_capab { ____Placeholder_local_hw_capab } local_hw_capab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* FUNC_3 (struct wpa_scan_res*,int ) ;
 int FUNC_4 (struct wpa_scan_res*) ;

void FUNC_5(struct wpa_supplicant *VAR_9,
    struct wpa_scan_res *VAR_10)
{
 enum local_hw_capab VAR_11 = VAR_9->hw_capab;
 int VAR_12;
 const u8 *VAR_13;
 unsigned int VAR_14, VAR_15;
 int VAR_16 = VAR_10->snr;

 if (VAR_10->est_throughput)
  return;


 VAR_12 = FUNC_4(VAR_10);


 if (VAR_12 > 1 * 2 && VAR_16 < 1)
  VAR_12 = 1 * 2;
 else if (VAR_12 > 2 * 2 && VAR_16 < 4)
  VAR_12 = 2 * 2;
 else if (VAR_12 > 6 * 2 && VAR_16 < 5)
  VAR_12 = 6 * 2;
 else if (VAR_12 > 9 * 2 && VAR_16 < 6)
  VAR_12 = 9 * 2;
 else if (VAR_12 > 12 * 2 && VAR_16 < 7)
  VAR_12 = 12 * 2;
 else if (VAR_12 > 18 * 2 && VAR_16 < 10)
  VAR_12 = 18 * 2;
 else if (VAR_12 > 24 * 2 && VAR_16 < 11)
  VAR_12 = 24 * 2;
 else if (VAR_12 > 36 * 2 && VAR_16 < 15)
  VAR_12 = 36 * 2;
 else if (VAR_12 > 48 * 2 && VAR_16 < 19)
  VAR_12 = 48 * 2;
 else if (VAR_12 > 54 * 2 && VAR_16 < 21)
  VAR_12 = 54 * 2;
 VAR_14 = VAR_12 * 500;

 if (VAR_11 == VAR_0 || VAR_11 == VAR_1 || VAR_11 == VAR_2) {
  VAR_13 = FUNC_3(VAR_10, VAR_5);
  if (VAR_13) {
   VAR_15 = FUNC_0(VAR_16);
   if (VAR_15 > VAR_14)
    VAR_14 = VAR_15;
  }
 }

 if (VAR_11 == VAR_1 || VAR_11 == VAR_2) {
  VAR_13 = FUNC_3(VAR_10, VAR_6);
  if (VAR_13 && VAR_13[1] >= 2 &&
      (VAR_13[3] & VAR_3)) {
   VAR_15 = FUNC_1(VAR_16);
   if (VAR_15 > VAR_14)
    VAR_14 = VAR_15;
  }
 }

 if (VAR_11 == VAR_2) {

  VAR_13 = FUNC_3(VAR_10, VAR_7);
  if (VAR_13) {
   VAR_15 = FUNC_0(VAR_16) + 1;
   if (VAR_15 > VAR_14)
    VAR_14 = VAR_15;

   VAR_13 = FUNC_3(VAR_10, VAR_6);
   if (VAR_13 && VAR_13[1] >= 2 &&
       (VAR_13[3] &
        VAR_3)) {
    VAR_15 = FUNC_1(VAR_16) + 1;
    if (VAR_15 > VAR_14)
     VAR_14 = VAR_15;
   }

   VAR_13 = FUNC_3(VAR_10, VAR_8);
   if (VAR_13 && VAR_13[1] >= 1 &&
       (VAR_13[2] & VAR_4)) {
    VAR_15 = FUNC_2(VAR_16) + 1;
    if (VAR_15 > VAR_14)
     VAR_14 = VAR_15;
   }
  }
 }



 VAR_10->est_throughput = VAR_14;
}
