
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
struct hs20_osu_client {char* ifname; } ;
typedef int fname ;
typedef int dir ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct hs20_osu_client*,char*,int,int,char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct wpa_ctrl*,char*,char*,int) ;
 int * FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,int) ;
 struct wpa_ctrl* FUNC_5 (char const*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (struct wpa_ctrl*) ;
 int FUNC_10 (struct wpa_ctrl*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct hs20_osu_client*,char*) ;

__attribute__((used)) static int FUNC_13(struct hs20_osu_client *VAR_7, int VAR_8,
        const char *VAR_9)
{
 char VAR_10[255];
 char VAR_11[300], VAR_12[400];
 struct wpa_ctrl *VAR_13;
 const char *VAR_14;
 int VAR_15;

 VAR_14 = VAR_7->ifname;

 if (FUNC_3(VAR_10, sizeof(VAR_10)) == ((void*)0))
  return -1;

 FUNC_6(VAR_11, sizeof(VAR_11), "%s/osu-info", VAR_10);
 if (FUNC_4(VAR_11, VAR_4 | VAR_3 | VAR_2 | VAR_5) < 0 &&
     VAR_6 != VAR_0) {
  FUNC_11(VAR_1, "mkdir(%s) failed: %s",
      VAR_11, FUNC_7(VAR_6));
  return -1;
 }

 FUNC_0(VAR_11, VAR_4 | VAR_3 | VAR_2 | VAR_5);

 FUNC_6(VAR_12, sizeof(VAR_12), "SET osu_dir %s", VAR_11);
 if (FUNC_8(VAR_14, VAR_12) < 0) {
  FUNC_11(VAR_1, "Failed to configure osu_dir to wpa_supplicant");
  return -1;
 }

 VAR_13 = FUNC_5(VAR_14);
 if (VAR_13 == ((void*)0))
  return -1;

 FUNC_11(VAR_1, "Starting OSU fetch");
 FUNC_12(VAR_7, "Starting OSU provider information fetch");
 if (FUNC_8(VAR_14, "FETCH_OSU") < 0) {
  FUNC_11(VAR_1, "Could not start OSU fetch");
  FUNC_10(VAR_13);
  FUNC_9(VAR_13);
  return -1;
 }
 VAR_15 = FUNC_2(VAR_13, "OSU provider fetch completed",
    VAR_12, sizeof(VAR_12));

 FUNC_10(VAR_13);
 FUNC_9(VAR_13);

 if (VAR_15 < 0) {
  FUNC_11(VAR_1, "OSU fetch did not complete");
  FUNC_12(VAR_7, "OSU fetch did not complete");
  return -1;
 }
 FUNC_11(VAR_1, "OSU provider fetch completed");

 return FUNC_1(VAR_7, VAR_11, 1, VAR_8, VAR_9);
}
