
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_data {int dummy; } ;
typedef int eapol_logger_level ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*,int const*,int ,int,char*,char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_4, const u8 *VAR_5,
         eapol_logger_level VAR_6, const char *VAR_7)
{

 struct hostapd_data *VAR_8 = VAR_4;
 int VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_1;
  break;
 case 130:
 default:
  VAR_9 = VAR_0;
  break;
 }

 FUNC_0(VAR_8, VAR_5, VAR_3, VAR_9, "%s",
         VAR_7);

}
