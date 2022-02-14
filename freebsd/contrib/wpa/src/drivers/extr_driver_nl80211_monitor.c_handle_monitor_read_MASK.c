
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_nl80211_data {int ctx; } ;
struct ieee80211_radiotap_iterator {int this_arg_index; int* this_arg; int _max_length; } ;
typedef int s8 ;
typedef int le16 ;
typedef int buf ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*,unsigned char*,int,int,int) ;
 int FUNC_1 (int ,unsigned char*,int,int) ;
 scalar_t__ FUNC_2 (struct ieee80211_radiotap_iterator*,void*,int,int *) ;
 int FUNC_3 (struct ieee80211_radiotap_iterator*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,unsigned char*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static void FUNC_8(int VAR_6, void *VAR_7, void *VAR_8)
{
 struct wpa_driver_nl80211_data *VAR_9 = VAR_7;
 int VAR_10;
 unsigned char VAR_11[3000];
 struct ieee80211_radiotap_iterator VAR_12;
 int VAR_13;
 int VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

 VAR_10 = FUNC_5(VAR_6, VAR_11, sizeof(VAR_11), 0);
 if (VAR_10 < 0) {
  FUNC_7(VAR_3, "nl80211: Monitor socket recv failed: %s",
      FUNC_6(VAR_5));
  return;
 }

 if (FUNC_2(&VAR_12, (void *) VAR_11, VAR_10, ((void*)0))) {
  FUNC_7(VAR_4, "nl80211: received invalid radiotap frame");
  return;
 }

 while (1) {
  VAR_13 = FUNC_3(&VAR_12);
  if (VAR_13 == -VAR_0)
   break;
  if (VAR_13) {
   FUNC_7(VAR_4, "nl80211: received invalid radiotap frame (%d)",
       VAR_13);
   return;
  }
  switch (VAR_12.this_arg_index) {
  case 131:
   if (*VAR_12.this_arg & VAR_1)
    VAR_10 -= 4;
   break;
  case 129:
   VAR_18 = 1;
   break;
  case 128:
   VAR_16 = 1;
   VAR_17 = FUNC_4((*(le16 *) VAR_12.this_arg)) &
     VAR_2;
   break;
  case 133:
   break;
  case 134:

   break;
  case 130:
   VAR_14 = *VAR_12.this_arg * 5;
   break;
  case 132:
   VAR_15 = (s8) *VAR_12.this_arg;
   break;
  }
 }

 if (VAR_18 && VAR_16)
  return;

 if (!VAR_16)
  FUNC_0(VAR_9, VAR_11 + VAR_12._max_length,
        VAR_10 - VAR_12._max_length, VAR_14, VAR_15);
 else
  FUNC_1(VAR_9->ctx, VAR_11 + VAR_12._max_length,
       VAR_10 - VAR_12._max_length, !VAR_17);
}
