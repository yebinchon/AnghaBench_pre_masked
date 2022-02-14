
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_ip_addr {scalar_t__ af; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (struct hostapd_ip_addr*,char*,int) ;
 scalar_t__ FUNC_1 (char*,struct hostapd_ip_addr*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_4 = 0;
 struct hostapd_ip_addr VAR_5;
 char VAR_6[100];

 FUNC_2(VAR_3, "ip_addr tests");

 if (FUNC_1("1.2.3.4", &VAR_5) != 0 ||
     VAR_5.af != VAR_0 ||
     FUNC_0(((void*)0), VAR_6, sizeof(VAR_6)) != ((void*)0) ||
     FUNC_0(&VAR_5, VAR_6, 1) != VAR_6 || VAR_6[0] != '\0' ||
     FUNC_0(&VAR_5, VAR_6, 0) != ((void*)0) ||
     FUNC_0(&VAR_5, VAR_6, sizeof(VAR_6)) != VAR_6)
  VAR_4++;

 if (FUNC_1("::", &VAR_5) != 0 ||
     VAR_5.af != VAR_1 ||
     FUNC_0(&VAR_5, VAR_6, 1) != VAR_6 || VAR_6[0] != '\0' ||
     FUNC_0(&VAR_5, VAR_6, sizeof(VAR_6)) != VAR_6)
  VAR_4++;

 if (VAR_4) {
  FUNC_2(VAR_2, "%d ip_addr test(s) failed", VAR_4);
  return -1;
 }

 return 0;
}
