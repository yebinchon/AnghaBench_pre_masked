
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct if_ath_ant_comb_state {int quick_scan_cnt; void* main_conf; void* first_quick_scan_conf; void* second_quick_scan_conf; int rssi_first; int rssi_second; int total_pkt_count; int rssi_third; int rssi_lna1; int rssi_lna2; void* second_ratio; void* first_ratio; void* scan; void* scan_not_start; void* alt_good; } ;
struct TYPE_3__ {void* main_lna_conf; void* alt_lna_conf; } ;
typedef TYPE_1__ HAL_ANT_COMB_CONFIG ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int,int ,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct if_ath_ant_comb_state *VAR_10,
    HAL_ANT_COMB_CONFIG *VAR_11, int VAR_12,
    int VAR_13, int VAR_14)
{

 switch (VAR_10->quick_scan_cnt) {
 case 0:

  VAR_11->main_lna_conf = VAR_10->main_conf;
  VAR_11->alt_lna_conf = VAR_10->first_quick_scan_conf;
  break;
 case 1:

  VAR_11->main_lna_conf = VAR_10->main_conf;
  VAR_11->alt_lna_conf = VAR_10->second_quick_scan_conf;
  VAR_10->rssi_first = VAR_12;
  VAR_10->rssi_second = VAR_13;

  if (VAR_10->main_conf == VAR_7) {

   if (FUNC_0(VAR_14,
      VAR_3,
      VAR_4,
      VAR_12, VAR_13,
      VAR_10->total_pkt_count))
    VAR_10->first_ratio = VAR_1;
   else
    VAR_10->first_ratio = VAR_0;
  } else if (VAR_10->main_conf == VAR_9) {
   if (FUNC_0(VAR_14,
      VAR_5,
      VAR_4,
      VAR_12, VAR_13,
      VAR_10->total_pkt_count))
    VAR_10->first_ratio = VAR_1;
   else
    VAR_10->first_ratio = VAR_0;
  } else {
   if ((((VAR_14 >= VAR_2) &&
       (VAR_13 > VAR_12 +
       VAR_3)) ||
       (VAR_13 > VAR_12)) &&
       (VAR_10->total_pkt_count > 50))
    VAR_10->first_ratio = VAR_1;
   else
    VAR_10->first_ratio = VAR_0;
  }
  break;
 case 2:
  VAR_10->alt_good = VAR_0;
  VAR_10->scan_not_start = VAR_0;
  VAR_10->scan = VAR_0;
  VAR_10->rssi_first = VAR_12;
  VAR_10->rssi_third = VAR_13;

  if (VAR_10->second_quick_scan_conf == VAR_7)
   VAR_10->rssi_lna1 = VAR_13;
  else if (VAR_10->second_quick_scan_conf ==
    VAR_9)
   VAR_10->rssi_lna2 = VAR_13;
  else if (VAR_10->second_quick_scan_conf ==
    VAR_8) {
   if (VAR_10->main_conf == VAR_9)
    VAR_10->rssi_lna2 = VAR_12;
   else if (VAR_10->main_conf == VAR_7)
    VAR_10->rssi_lna1 = VAR_12;
  }

  if (VAR_10->rssi_lna2 > VAR_10->rssi_lna1 +
      VAR_6)
   VAR_11->main_lna_conf = VAR_9;
  else
   VAR_11->main_lna_conf = VAR_7;

  if (VAR_10->main_conf == VAR_7) {
   if (FUNC_0(VAR_14,
      VAR_3,
      VAR_4,
      VAR_12, VAR_13,
      VAR_10->total_pkt_count))
    VAR_10->second_ratio = VAR_1;
   else
    VAR_10->second_ratio = VAR_0;
  } else if (VAR_10->main_conf == VAR_9) {
   if (FUNC_0(VAR_14,
      VAR_5,
      VAR_4,
      VAR_12, VAR_13,
      VAR_10->total_pkt_count))
    VAR_10->second_ratio = VAR_1;
   else
    VAR_10->second_ratio = VAR_0;
  } else {
   if ((((VAR_14 >= VAR_2) &&
       (VAR_13 > VAR_12 +
       VAR_3)) ||
       (VAR_13 > VAR_12)) &&
       (VAR_10->total_pkt_count > 50))
    VAR_10->second_ratio = VAR_1;
   else
    VAR_10->second_ratio = VAR_0;
  }


  if (VAR_10->first_ratio && VAR_10->second_ratio) {
   if (VAR_10->rssi_second > VAR_10->rssi_third) {

    if ((VAR_10->first_quick_scan_conf ==
        VAR_7) ||
        (VAR_10->first_quick_scan_conf ==
        VAR_9))

     if (VAR_11->main_lna_conf ==
         VAR_9)
      VAR_11->alt_lna_conf =
       VAR_7;
     else
      VAR_11->alt_lna_conf =
       VAR_9;
    else

     VAR_11->alt_lna_conf =
      VAR_10->first_quick_scan_conf;
   } else if ((VAR_10->second_quick_scan_conf ==
       VAR_7) ||
       (VAR_10->second_quick_scan_conf ==
       VAR_9)) {

    if (VAR_11->main_lna_conf ==
        VAR_9)
     VAR_11->alt_lna_conf =
      VAR_7;
    else
     VAR_11->alt_lna_conf =
      VAR_9;
   } else {

    VAR_11->alt_lna_conf =
     VAR_10->second_quick_scan_conf;
   }
  } else if (VAR_10->first_ratio) {

   if ((VAR_10->first_quick_scan_conf ==
       VAR_7) ||
       (VAR_10->first_quick_scan_conf ==
       VAR_9))

    if (VAR_11->main_lna_conf ==
        VAR_9)
     VAR_11->alt_lna_conf =
       VAR_7;
    else
     VAR_11->alt_lna_conf =
       VAR_9;
   else

    VAR_11->alt_lna_conf =
      VAR_10->first_quick_scan_conf;
  } else if (VAR_10->second_ratio) {

   if ((VAR_10->second_quick_scan_conf ==
       VAR_7) ||
       (VAR_10->second_quick_scan_conf ==
       VAR_9))

    if (VAR_11->main_lna_conf ==
        VAR_9)
     VAR_11->alt_lna_conf =
      VAR_7;
    else
     VAR_11->alt_lna_conf =
      VAR_9;
   else

    VAR_11->alt_lna_conf =
      VAR_10->second_quick_scan_conf;
  } else {

   if ((VAR_10->main_conf == VAR_7) ||
       (VAR_10->main_conf == VAR_9))

    if (VAR_11->main_lna_conf ==
        VAR_9)
     VAR_11->alt_lna_conf =
       VAR_7;
    else
     VAR_11->alt_lna_conf =
       VAR_9;
   else

    VAR_11->alt_lna_conf = VAR_10->main_conf;
  }
  break;
 default:
  break;
 }
}
