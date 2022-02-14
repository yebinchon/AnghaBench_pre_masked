
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_4(struct hostapd_data *VAR_1,
          const char *VAR_2, char *VAR_3,
          size_t VAR_4)
{
 FUNC_3(VAR_0, "CTRL_IFACE: GET_CAPABILITY '%s'", VAR_2);
 FUNC_3(VAR_0, "CTRL_IFACE: Unknown GET_CAPABILITY field '%s'",
     VAR_2);

 return -1;
}
