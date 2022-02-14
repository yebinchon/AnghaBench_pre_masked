
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, void *VAR_4)
{
 struct hostapd_data *VAR_5 = VAR_3;
 FUNC_2(VAR_0, "WPS: AP PIN timed out");
 FUNC_0(VAR_5);
 FUNC_1(VAR_5->msg_ctx, VAR_1, VAR_2);
}
