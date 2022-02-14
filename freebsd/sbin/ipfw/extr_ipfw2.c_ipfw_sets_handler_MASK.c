
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct format_opts {int set; int new_set; scalar_t__ start_rule; void* end_rule; int flags; } ;
typedef int rt ;
typedef struct format_opts ipfw_range_tlv ;
struct TYPE_4__ {int set_mask; } ;
typedef TYPE_1__ ipfw_cfg_lheader ;
typedef int fo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 void* FUNC_1 (char*) ;
 int VAR_10 ;
 int FUNC_2 (int,struct format_opts*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,struct format_opts*,TYPE_1__**,size_t*) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (struct format_opts*,int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;

void
FUNC_11(char *VAR_11[])
{
 ipfw_range_tlv VAR_12;
 char *VAR_13;
 size_t VAR_14;
 uint32_t VAR_15[2];
 int VAR_16;
 uint16_t VAR_17;
 uint8_t VAR_18;

 VAR_11++;
 FUNC_8(&VAR_12, 0, sizeof(VAR_12));

 if (VAR_11[0] == ((void*)0))
  FUNC_4(VAR_2, "set needs command");
 if (FUNC_0(*VAR_11, "show") == 0) {
  struct format_opts VAR_19;
  ipfw_cfg_lheader *VAR_20;

  FUNC_8(&VAR_19, 0, sizeof(VAR_19));
  if (FUNC_6(&VAR_10, &VAR_19, &VAR_20, &VAR_14) != 0)
   FUNC_3(VAR_1, "requesting config failed");

  for (VAR_16 = 0, VAR_13 = "disable"; VAR_16 < VAR_9; VAR_16++)
   if ((VAR_20->set_mask & (1<<VAR_16)) == 0) {
    FUNC_9("%s %d", VAR_13, VAR_16);
    VAR_13 = "";
   }
  VAR_13 = (VAR_20->set_mask != (uint32_t)-1) ? " enable" : "enable";
  for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
   if ((VAR_20->set_mask & (1<<VAR_16)) != 0) {
    FUNC_9("%s %d", VAR_13, VAR_16);
    VAR_13 = "";
   }
  FUNC_9("\n");
  FUNC_5(VAR_20);
 } else if (FUNC_0(*VAR_11, "swap") == 0) {
  VAR_11++;
  if ( VAR_11[0] == ((void*)0) || VAR_11[1] == ((void*)0) )
   FUNC_4(VAR_2, "set swap needs 2 set numbers\n");
  VAR_12.set = FUNC_1(VAR_11[0]);
  VAR_12.new_set = FUNC_1(VAR_11[1]);
  if (!FUNC_7(*(VAR_11[0])) || VAR_12.set > VAR_9)
   FUNC_4(VAR_0, "invalid set number %s\n", VAR_11[0]);
  if (!FUNC_7(*(VAR_11[1])) || VAR_12.new_set > VAR_9)
   FUNC_4(VAR_0, "invalid set number %s\n", VAR_11[1]);
  VAR_16 = FUNC_2(VAR_7, &VAR_12);
 } else if (FUNC_0(*VAR_11, "move") == 0) {
  VAR_11++;
  if (VAR_11[0] && FUNC_0(*VAR_11, "rule") == 0) {
   VAR_12.flags = VAR_4;
   VAR_18 = VAR_8;
   VAR_11++;
  } else
   VAR_18 = VAR_6;
  if (VAR_11[0] == ((void*)0) || VAR_11[1] == ((void*)0) || VAR_11[2] == ((void*)0) ||
    VAR_11[3] != ((void*)0) || FUNC_0(VAR_11[1], "to") != 0)
   FUNC_4(VAR_2, "syntax: set move [rule] X to Y\n");
  VAR_17 = FUNC_1(VAR_11[0]);
  VAR_12.new_set = FUNC_1(VAR_11[2]);
  if (VAR_18 == VAR_8) {
   VAR_12.start_rule = VAR_17;
   VAR_12.end_rule = VAR_17;
  } else
   VAR_12.set = VAR_17;
  VAR_12.new_set = FUNC_1(VAR_11[2]);
  if (!FUNC_7(*(VAR_11[0])) || (VAR_18 == 3 && VAR_12.set > VAR_9) ||
   (VAR_18 == 2 && VAR_12.start_rule == VAR_3) )
   FUNC_4(VAR_0, "invalid source number %s\n", VAR_11[0]);
  if (!FUNC_7(*(VAR_11[2])) || VAR_12.new_set > VAR_9)
   FUNC_4(VAR_0, "invalid dest. set %s\n", VAR_11[1]);
  VAR_16 = FUNC_2(VAR_18, &VAR_12);
  if (VAR_16 < 0)
   FUNC_3(VAR_1, "failed to move %s",
       VAR_18 == VAR_6 ? "set": "rule");
 } else if (FUNC_0(*VAR_11, "disable") == 0 ||
     FUNC_0(*VAR_11, "enable") == 0 ) {
  int VAR_21 = FUNC_0(*VAR_11, "enable") == 0 ? 1 : 0;

  VAR_11++;
  VAR_15[0] = VAR_15[1] = 0;

  while (VAR_11[0]) {
   if (FUNC_7(**VAR_11)) {
    VAR_16 = FUNC_1(*VAR_11);
    if (VAR_16 < 0 || VAR_16 > VAR_9)
     FUNC_4(VAR_0,
         "invalid set number %d\n", VAR_16);
    VAR_15[VAR_21] |= (1<<VAR_16);
   } else if (FUNC_0(*VAR_11, "disable") == 0)
    VAR_21 = 0;
   else if (FUNC_0(*VAR_11, "enable") == 0)
    VAR_21 = 1;
   else
    FUNC_4(VAR_0,
     "invalid set command %s\n", *VAR_11);
   VAR_11++;
  }
  if ( (VAR_15[0] & VAR_15[1]) != 0 )
   FUNC_4(VAR_0,
       "cannot enable and disable the same set\n");

  VAR_12.set = VAR_15[0];
  VAR_12.new_set = VAR_15[1];
  VAR_16 = FUNC_2(VAR_5, &VAR_12);
  if (VAR_16)
   FUNC_10("set enable/disable: setsockopt(IP_FW_SET_ENABLE)");
 } else
  FUNC_4(VAR_2, "invalid set command %s\n", *VAR_11);
}
