
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,int *) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct hostapd_data *VAR_2,
          const char *VAR_3)
{
 u8 VAR_4[VAR_0];

 if (FUNC_1(VAR_3, VAR_4)) {
  FUNC_2(VAR_1, "CTRL: REQ_LCI: Invalid MAC address");
  return -1;
 }

 return FUNC_0(VAR_2, VAR_4);
}
