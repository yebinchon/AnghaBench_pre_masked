
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,int ) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct hostapd_data *VAR_2, char *VAR_3,
      char *VAR_4, size_t VAR_5)
{
 int VAR_6;

 FUNC_4(VAR_0, "CTRL_IFACE GET '%s'", VAR_3);

 if (FUNC_2(VAR_3, "version") == 0) {
  VAR_6 = FUNC_0(VAR_4, VAR_5, "%s", VAR_1);
  if (FUNC_1(VAR_5, VAR_6))
   return -1;
  return VAR_6;
 } else if (FUNC_2(VAR_3, "tls_library") == 0) {
  VAR_6 = FUNC_3(VAR_4, VAR_5);
  if (FUNC_1(VAR_5, VAR_6))
   return -1;
  return VAR_6;
 }

 return -1;
}
