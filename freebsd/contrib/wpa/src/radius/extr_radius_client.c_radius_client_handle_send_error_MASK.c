
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_client_data {int ctx; } ;
typedef scalar_t__ RadiusType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *,int ,int ,char*) ;
 int FUNC_1 (struct radius_client_data*) ;
 int FUNC_2 (struct radius_client_data*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct radius_client_data *VAR_12,
        int VAR_13, RadiusType VAR_14)
{

 int VAR_15 = VAR_11;
 FUNC_4(VAR_8, "send[RADIUS,s=%d]: %s", VAR_13, FUNC_3(VAR_11));
 if (VAR_15 == VAR_5 || VAR_15 == VAR_2 || VAR_15 == VAR_3 ||
     VAR_15 == VAR_1 || VAR_15 == VAR_4 || VAR_15 == VAR_0) {
  FUNC_0(VAR_12->ctx, ((void*)0), VAR_7,
          VAR_6,
          "Send failed - maybe interface status changed -"
          " try to connect again");
  if (VAR_14 == VAR_9 ||
      VAR_14 == VAR_10) {
   FUNC_1(VAR_12);
   return 0;
  } else {
   FUNC_2(VAR_12);
   return 1;
  }
 }


 return 0;
}
