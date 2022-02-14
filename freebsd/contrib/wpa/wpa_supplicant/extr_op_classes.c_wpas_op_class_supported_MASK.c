
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_modes; int modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct wpa_ssid {int* freq_list; scalar_t__ disable_vht; scalar_t__ disable_ht; } ;
struct oper_class_map {int op_class; int min_chan; int max_chan; int bw; scalar_t__ inc; int mode; } ;
struct hostapd_hw_modes {int dummy; } ;


 size_t FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 struct hostapd_hw_modes* FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct hostapd_hw_modes*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_1,
       struct wpa_ssid *VAR_2,
       const struct oper_class_map *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 struct hostapd_hw_modes *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 VAR_6 = FUNC_1(VAR_1->hw.modes, VAR_1->hw.num_modes, VAR_3->mode);
 if (!VAR_6)
  return 0;



 if (VAR_2->freq_list && VAR_2->freq_list[0]) {
  for (VAR_8 = 0; ; VAR_8++) {
   int VAR_11 = VAR_2->freq_list[VAR_8];

   if (VAR_11 == 0)
    break;
   if (VAR_11 > 4000 && VAR_11 < 6000)
    VAR_10 = 1;
   else if (VAR_11 > 2400 && VAR_11 < 2500)
    VAR_9 = 1;
  }
 } else {


  VAR_9 = VAR_10 = 1;
 }

 if (VAR_3->op_class >= 115 && VAR_3->op_class <= 130 && !VAR_10)
  return 0;
 if (VAR_3->op_class >= 81 && VAR_3->op_class <= 84 && !VAR_9)
  return 0;
 if (VAR_3->op_class == 128) {
  u8 VAR_12[] = { 42, 58, 106, 122, 138, 155 };

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_12); VAR_5++) {
   if (FUNC_2(VAR_6, VAR_12[VAR_5], VAR_3->bw) !=
       VAR_0)
    return 1;
  }

  return 0;
 }

 if (VAR_3->op_class == 129) {

  return FUNC_2(VAR_6, 50, VAR_3->bw) != VAR_0 ||
   FUNC_2(VAR_6, 114, VAR_3->bw) != VAR_0;
 }

 if (VAR_3->op_class == 130) {

  VAR_7 = 0;

  if (FUNC_2(VAR_6, 42, VAR_3->bw) != VAR_0 ||
      FUNC_2(VAR_6, 58, VAR_3->bw) != VAR_0)
   VAR_7++;
  if (FUNC_2(VAR_6, 106, VAR_3->bw) != VAR_0 ||
      FUNC_2(VAR_6, 122, VAR_3->bw) != VAR_0 ||
      FUNC_2(VAR_6, 138, VAR_3->bw) != VAR_0)
   VAR_7++;
  if (FUNC_2(VAR_6, 106, VAR_3->bw) != VAR_0 &&
      FUNC_2(VAR_6, 138, VAR_3->bw) != VAR_0)
   VAR_7++;
  if (FUNC_2(VAR_6, 155, VAR_3->bw) != VAR_0)
   VAR_7++;

  if (VAR_7 >= 2)
   return 1;

  return 0;
 }

 VAR_7 = 0;
 for (VAR_4 = VAR_3->min_chan; VAR_4 <= VAR_3->max_chan;
      VAR_4 += VAR_3->inc) {
  if (FUNC_2(VAR_6, VAR_4, VAR_3->bw) != VAR_0) {
   VAR_7 = 1;
   break;
  }
 }

 return VAR_7;
}
