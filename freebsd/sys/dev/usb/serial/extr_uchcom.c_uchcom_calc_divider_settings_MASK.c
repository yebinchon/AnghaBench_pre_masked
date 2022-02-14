
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {size_t dv_div; int dv_prescaler; } ;
struct uchcom_divider_record {int dvr_high; int dvr_low; int dvr_base_clock; TYPE_1__ dvr_divider; } ;
struct uchcom_divider {size_t dv_div; int dv_mod; int dv_prescaler; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct uchcom_divider_record* VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct uchcom_divider *VAR_5, uint32_t VAR_6)
{
 const struct uchcom_divider_record *VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint8_t VAR_11;


 for (VAR_11 = 0; VAR_11 != VAR_0; VAR_11++) {
  if (VAR_4[VAR_11].dvr_high >= VAR_6 &&
      VAR_4[VAR_11].dvr_low <= VAR_6) {
   VAR_7 = &VAR_4[VAR_11];
   goto found;
  }
 }
 return (-1);

found:
 VAR_5->dv_prescaler = VAR_7->dvr_divider.dv_prescaler;
 if (VAR_7->dvr_base_clock == VAR_1)
  VAR_5->dv_div = VAR_7->dvr_divider.dv_div;
 else {
  VAR_8 = VAR_7->dvr_base_clock / VAR_6;
  VAR_9 = VAR_7->dvr_base_clock % VAR_6;
  if (VAR_8 == 0 || VAR_8 >= 0xFF)
   return (-1);
  if ((VAR_9 << 1) >= VAR_6)
   VAR_8 += 1;
  VAR_5->dv_div = (uint8_t)-VAR_8;
 }

 VAR_10 = (VAR_2 / VAR_6) + VAR_3;
 VAR_10 = VAR_10 + (VAR_10 / 2);

 VAR_5->dv_mod = (VAR_10 + 0xFF) / 0x100;

 return (0);
}
