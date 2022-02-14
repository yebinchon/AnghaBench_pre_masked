
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct wpa_bss {int caps; int beacon_int; int tsf; } ;
struct rrm_measurement_report_element {int dummy; } ;
struct rrm_measurement_beacon_report {int dummy; } ;
struct bitfield {int dummy; } ;
typedef enum beacon_report_detail { ____Placeholder_beacon_report_detail } beacon_report_detail ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,int ) ;
 scalar_t__ FUNC_2 (struct bitfield*,unsigned int) ;
 int FUNC_3 (unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct bitfield *VAR_5,
       enum beacon_report_detail VAR_6,
       struct wpa_bss *VAR_7, u8 *VAR_8,
       size_t VAR_9, u8 **VAR_10,
       size_t *VAR_11, int VAR_12)
{
 u8 *VAR_13 = *VAR_10;
 size_t VAR_14 = *VAR_11;
 u8 *VAR_15 = VAR_8;
 int VAR_16;

 VAR_16 = 255 - sizeof(struct rrm_measurement_beacon_report) -
  sizeof(struct rrm_measurement_report_element) - 2 -
  VAR_3;

 if (VAR_6 > VAR_0) {
  FUNC_4(VAR_2,
      "Beacon Request: Invalid reporting detail: %d",
      VAR_6);
  return -1;
 }

 if (VAR_6 == VAR_1)
  return 0;





 if (VAR_12 && VAR_9 < 14)
  return -1;

 *VAR_15++ = VAR_4;

 VAR_15++;

 if (VAR_12) {
  FUNC_1(VAR_15, VAR_7->tsf);
  VAR_15 += sizeof(VAR_7->tsf);
  FUNC_0(VAR_15, VAR_7->beacon_int);
  VAR_15 += 2;
  FUNC_0(VAR_15, VAR_7->caps);
  VAR_15 += 2;
 }

 VAR_16 -= VAR_15 - VAR_8;
 while (VAR_14 > 2 && 2U + VAR_13[1] <= VAR_14 && VAR_16 > 0) {
  if (VAR_6 == VAR_0 ||
      (VAR_5 && FUNC_2(VAR_5, VAR_13[0]))) {
   u8 VAR_17 = VAR_13[1];

   if (2 + VAR_17 > VAR_8 + VAR_9 - VAR_15 ||
       2 + VAR_17 > VAR_16)
    break;

   *VAR_15++ = VAR_13[0];
   *VAR_15++ = VAR_17;
   FUNC_3(VAR_15, VAR_13 + 2, VAR_17);
   VAR_15 += VAR_17;
   VAR_16 -= 2 + VAR_17;
  }

  VAR_14 -= 2 + VAR_13[1];
  VAR_13 += 2 + VAR_13[1];
 }

 *VAR_11 = VAR_14;
 *VAR_10 = VAR_13;


 VAR_8[1] = VAR_15 - VAR_8 - 2;
 return VAR_15 - VAR_8;
}
