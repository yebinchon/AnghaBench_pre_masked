
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wpa_ctrl*,char*) ;

__attribute__((used)) static int FUNC_4(struct wpa_ctrl *VAR_0,
           int VAR_1, char *VAR_2[])
{
 char VAR_3[256];
 int VAR_4;
 int VAR_5;
 char *VAR_6;
 int VAR_7;

 if (VAR_1 < 2) {
  FUNC_2("Invalid chan_switch command: needs at least two "
         "arguments (count and freq)\n"
         "usage: <cs_count> <freq> [sec_channel_offset=] "
         "[center_freq1=] [center_freq2=] [bandwidth=] "
         "[blocktx] [ht|vht]\n");
  return -1;
 }

 VAR_4 = FUNC_0(VAR_3, sizeof(VAR_3), "CHAN_SWITCH %s %s",
     VAR_2[0], VAR_2[1]);
 if (FUNC_1(sizeof(VAR_3), VAR_4)) {
  FUNC_2("Too long CHAN_SWITCH command.\n");
  return -1;
 }

 VAR_7 = VAR_4;
 for (VAR_5 = 2; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = VAR_3 + VAR_7;
  VAR_4 = FUNC_0(VAR_6, sizeof(VAR_3) - VAR_7, " %s", VAR_2[VAR_5]);
  if (FUNC_1(sizeof(VAR_3) - VAR_7, VAR_4)) {
   FUNC_2("Too long CHAN_SWITCH command.\n");
   return -1;
  }
  VAR_7 += VAR_4;
 }
 return FUNC_3(VAR_0, VAR_3);
}
