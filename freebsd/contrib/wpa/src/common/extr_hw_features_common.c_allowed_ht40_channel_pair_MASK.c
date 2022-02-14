
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_hw_modes {scalar_t__ mode; } ;
struct hostapd_channel_data {int flag; int allowed_bw; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct hostapd_channel_data*) ;
 struct hostapd_channel_data* FUNC_2 (struct hostapd_hw_modes*,int,int *) ;
 int FUNC_3 (int ,char*,int,...) ;

int FUNC_4(struct hostapd_hw_modes *VAR_6, int VAR_7,
         int VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11[] = { 36, 44, 52, 60, 100, 108, 116, 124, 132, 140,
     149, 157, 165, 184, 192 };
 size_t VAR_12;
 struct hostapd_channel_data *VAR_13, *VAR_14;
 const int VAR_15 = VAR_7 < VAR_8;

 VAR_13 = FUNC_2(VAR_6, VAR_7, ((void*)0));
 if (!VAR_13)
  return 0;

 if (VAR_7 == VAR_8 || !VAR_8) {
  if (FUNC_1(VAR_13))
   return 1;

  FUNC_3(VAR_5, "Channel %d is not allowed as primary",
      VAR_7);
  return 0;
 }

 VAR_14 = FUNC_2(VAR_6, VAR_8, ((void*)0));
 if (!VAR_14)
  return 0;

 FUNC_3(VAR_4,
     "HT40: control channel: %d  secondary channel: %d",
     VAR_7, VAR_8);



 if ((VAR_14->flag & VAR_0) ||
     (VAR_15 && !(VAR_13->allowed_bw & VAR_2)) ||
     (!VAR_15 && !(VAR_13->allowed_bw & VAR_1))) {
  FUNC_3(VAR_5, "HT40 secondary channel %d not allowed",
      VAR_8);
  return 0;
 }







 if (VAR_6->mode != VAR_3)
  return 1;

 VAR_10 = VAR_7 < VAR_8 ? VAR_7 : VAR_8;

 VAR_9 = 0;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_11); VAR_12++) {
  if (VAR_10 == VAR_11[VAR_12]) {
   VAR_9 = 1;
   break;
  }
 }
 if (!VAR_9) {
  FUNC_3(VAR_5, "HT40 channel pair (%d, %d) not allowed",
      VAR_7, VAR_8);
  return 0;
 }

 return 1;
}
