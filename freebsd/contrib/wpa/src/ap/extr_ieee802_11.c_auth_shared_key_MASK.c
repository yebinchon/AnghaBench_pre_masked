
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_info {int * challenge; int wpa_sm; int flags; int addr; } ;
struct hostapd_data {int dummy; } ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hostapd_data*,int ,int ,int ,char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int const*,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int ,int *,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static u16 FUNC_7(struct hostapd_data *VAR_8, struct sta_info *VAR_9,
      u16 VAR_10, const u8 *VAR_11,
      int VAR_12)
{
 FUNC_0(VAR_8, VAR_9->addr, VAR_2,
         VAR_0,
         "authentication (shared key, transaction %d)",
         VAR_10);

 if (VAR_10 == 1) {
  if (!VAR_9->challenge) {

   u8 VAR_13[8];

   VAR_9->challenge = FUNC_4(VAR_3);
   if (VAR_9->challenge == ((void*)0))
    return VAR_5;

   if (FUNC_2(VAR_13, sizeof(VAR_13)) < 0) {
    FUNC_1(VAR_9->challenge);
    VAR_9->challenge = ((void*)0);
    return VAR_5;
   }

   FUNC_5(VAR_13, sizeof(VAR_13), 0,
     VAR_9->challenge, VAR_3);
  }
  return 0;
 }

 if (VAR_10 != 3)
  return VAR_5;


 if (!VAR_12 || !VAR_9->challenge || !VAR_11 ||
     FUNC_3(VAR_9->challenge, VAR_11,
       VAR_3)) {
  FUNC_0(VAR_8, VAR_9->addr, VAR_2,
          VAR_1,
          "shared key authentication - invalid "
          "challenge-response");
  return VAR_4;
 }

 FUNC_0(VAR_8, VAR_9->addr, VAR_2,
         VAR_0,
         "authentication OK (shared key)");
 VAR_9->flags |= VAR_6;
 FUNC_6(VAR_9->wpa_sm, VAR_7);
 FUNC_1(VAR_9->challenge);
 VAR_9->challenge = ((void*)0);

 return 0;
}
