
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_global {scalar_t__ p2p_init_wpa_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int const) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int const) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,char*,int const*,int ) ;
 char* FUNC_10 (scalar_t__,char*,size_t*) ;
 scalar_t__ FUNC_11 (struct wpa_global*,char*) ;
 int FUNC_12 (struct wpa_global*,char*,char*,int const) ;
 int FUNC_13 (struct wpa_global*,char*,int const) ;
 scalar_t__ FUNC_14 (struct wpa_global*,char*) ;
 int FUNC_15 (struct wpa_global*) ;
 scalar_t__ FUNC_16 (struct wpa_global*,char*) ;
 int FUNC_17 (struct wpa_global*,char*,char*,int const) ;
 int FUNC_18 (struct wpa_global*,char*,char*,int const) ;
 char* FUNC_19 (struct wpa_global*,char*,char*,size_t*) ;
 char* FUNC_20 (struct wpa_global*,char*,size_t*) ;
 scalar_t__ FUNC_21 (struct wpa_global*) ;
 scalar_t__ FUNC_22 (struct wpa_global*,char*) ;
 int FUNC_23 (struct wpa_global*,char*,int const) ;
 scalar_t__ FUNC_24 () ;
 int FUNC_25 (struct wpa_global*) ;
 int FUNC_26 (struct wpa_global*) ;

char * FUNC_27(struct wpa_global *VAR_2,
      char *VAR_3, size_t *VAR_4)
{
 char *VAR_5;
 const int VAR_6 = 2048;
 int VAR_7;
 int VAR_8 = VAR_0;

 if (FUNC_7(VAR_3, "IFNAME=", 7) == 0) {
  char *VAR_9 = FUNC_4(VAR_3 + 7, ' ');
  if (VAR_9) {
   *VAR_9++ = '\0';
   return FUNC_19(VAR_2,
            VAR_3 + 7, VAR_9,
            VAR_4);
  }
 }

 VAR_5 = FUNC_20(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_5(VAR_3, "PING") == 0)
  VAR_8 = VAR_1;
 FUNC_9(VAR_8, "RX global ctrl_iface",
     (const u8 *) VAR_3, FUNC_6(VAR_3));

 VAR_5 = FUNC_2(VAR_6);
 if (VAR_5 == ((void*)0)) {
  *VAR_4 = 1;
  return ((void*)0);
 }

 FUNC_3(VAR_5, "OK\n", 3);
 VAR_7 = 3;

 if (FUNC_5(VAR_3, "PING") == 0) {
  FUNC_3(VAR_5, "PONG\n", 5);
  VAR_7 = 5;
 } else if (FUNC_7(VAR_3, "INTERFACE_ADD ", 14) == 0) {
  if (FUNC_11(VAR_2, VAR_3 + 14))
   VAR_7 = -1;
 } else if (FUNC_7(VAR_3, "INTERFACE_REMOVE ", 17) == 0) {
  if (FUNC_14(VAR_2, VAR_3 + 17))
   VAR_7 = -1;
 } else if (FUNC_5(VAR_3, "INTERFACE_LIST") == 0) {
  VAR_7 = FUNC_13(
   VAR_2, VAR_5, VAR_6);
 } else if (FUNC_7(VAR_3, "INTERFACES", 10) == 0) {
  VAR_7 = FUNC_12(
   VAR_2, VAR_3 + 10, VAR_5, VAR_6);
 } else if (FUNC_5(VAR_3, "TERMINATE") == 0) {
  FUNC_15(VAR_2);
 } else if (FUNC_5(VAR_3, "SUSPEND") == 0) {
  FUNC_26(VAR_2);
 } else if (FUNC_5(VAR_3, "RESUME") == 0) {
  FUNC_25(VAR_2);
 } else if (FUNC_7(VAR_3, "SET ", 4) == 0) {
  if (FUNC_22(VAR_2, VAR_3 + 4)) {
   VAR_7 = -1;
  }
 } else if (FUNC_7(VAR_3, "DUP_NETWORK ", 12) == 0) {
  if (FUNC_16(VAR_2, VAR_3 + 12))
   VAR_7 = -1;

 } else if (FUNC_5(VAR_3, "SAVE_CONFIG") == 0) {
  if (FUNC_21(VAR_2))
   VAR_7 = -1;

 } else if (FUNC_5(VAR_3, "STATUS") == 0) {
  VAR_7 = FUNC_23(VAR_2, VAR_5,
         VAR_6);





 } else if (FUNC_7(VAR_3, "RELOG", 5) == 0) {
  if (FUNC_8() < 0)
   VAR_7 = -1;
 } else {
  FUNC_3(VAR_5, "UNKNOWN COMMAND\n", 16);
  VAR_7 = 16;
 }

 if (VAR_7 < 0) {
  FUNC_3(VAR_5, "FAIL\n", 5);
  VAR_7 = 5;
 }

 *VAR_4 = VAR_7;
 return VAR_5;
}
