
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct hapd_interfaces {int dummy; } ;
typedef int socklen_t ;


 int FUNC_0 (struct hostapd_data*,char*,char*,int,struct sockaddr_storage*,int ) ;
 struct hostapd_data* FUNC_1 (struct hapd_interfaces*,char const*) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct hapd_interfaces *VAR_0,
         const char *VAR_1,
         char *VAR_2, char *VAR_3,
         int VAR_4,
         struct sockaddr_storage *VAR_5,
         socklen_t VAR_6)
{
 struct hostapd_data *VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1);
 if (VAR_7 == ((void*)0)) {
  int VAR_8;

  VAR_8 = FUNC_2(VAR_3, VAR_4, "FAIL-NO-IFNAME-MATCH\n");
  if (FUNC_3(VAR_4, VAR_8))
   return -1;
  return VAR_8;
 }

 return FUNC_0(VAR_7, VAR_2, VAR_3,VAR_4,
        VAR_5, VAR_6);
}
