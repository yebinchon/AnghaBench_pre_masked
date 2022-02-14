
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct hostapd_data {int dummy; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,unsigned char*,int) ;
 int FUNC_1 (struct hostapd_data*,char*,char*,int const,struct sockaddr_storage*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int,char*,int,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_9 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,char*,char*,int) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*,int,int ,int) ;

__attribute__((used)) static void FUNC_14(int VAR_6, void *VAR_7,
           void *VAR_8)
{
 struct hostapd_data *VAR_9 = VAR_7;
 char VAR_10[4096];
 int VAR_11;
 struct sockaddr_storage VAR_12;
 socklen_t VAR_13 = sizeof(VAR_12);
 char *VAR_14, *VAR_15 = VAR_10;
 const int VAR_16 = 4096;
 int VAR_17;
 int VAR_18 = VAR_1;




 VAR_11 = FUNC_8(VAR_6, VAR_10, sizeof(VAR_10) - 1, 0,
         (struct sockaddr *) &VAR_12, &VAR_13);
 if (VAR_11 < 0) {
  FUNC_12(VAR_2, "recvfrom(ctrl_iface): %s",
      FUNC_10(VAR_5));
  return;
 }
 VAR_10[VAR_11] = '\0';

 VAR_14 = FUNC_3(VAR_16);
 if (VAR_14 == ((void*)0)) {
  if (FUNC_9(VAR_6, "FAIL\n", 5, 0, (struct sockaddr *) &VAR_12,
      VAR_13) < 0) {
   FUNC_12(VAR_1, "CTRL: sendto failed: %s",
       FUNC_10(VAR_5));
  }
  return;
 }
 if (FUNC_6(VAR_15, "PING") == 0)
  VAR_18 = VAR_3;
 FUNC_11(VAR_18, "RX ctrl_iface", VAR_15, VAR_11);

 VAR_17 = FUNC_1(VAR_9, VAR_15,
             VAR_14, VAR_16,
             &VAR_12, VAR_13);




 if (FUNC_9(VAR_6, VAR_14, VAR_17, 0, (struct sockaddr *) &VAR_12,
     VAR_13) < 0) {
  FUNC_12(VAR_1, "CTRL: sendto failed: %s",
      FUNC_10(VAR_5));
 }
 FUNC_2(VAR_14);
}
