
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;
struct i802_bss {int drv; int ifname; } ;
struct genlmsghdr {int cmd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;





 int VAR_10 ;
 int FUNC_0 (struct genlmsghdr*,int ) ;
 int FUNC_1 (struct genlmsghdr*,int ) ;
 int FUNC_2 (struct i802_bss*,int,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,struct nlattr*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct nlattr**) ;
 int FUNC_5 (struct i802_bss*,struct nlattr**,int) ;
 int FUNC_6 (struct nlattr**,int ,int ,int ,int *) ;
 struct genlmsghdr* FUNC_7 (int ) ;
 int FUNC_8 (struct nl_msg*) ;
 int FUNC_9 (int ,char*,int,...) ;

int FUNC_10(struct nl_msg *VAR_11, void *VAR_12)
{
 struct i802_bss *VAR_13 = VAR_12;
 struct genlmsghdr *VAR_14 = FUNC_7(FUNC_8(VAR_11));
 struct nlattr *VAR_15[VAR_5 + 1];

 FUNC_6(VAR_15, VAR_5, FUNC_0(VAR_14, 0),
    FUNC_1(VAR_14, 0), ((void*)0));

 FUNC_9(VAR_0, "nl80211: BSS Event %d (%s) received for %s",
     VAR_14->cmd, FUNC_3(VAR_14->cmd),
     VAR_13->ifname);

 switch (VAR_14->cmd) {
 case 131:
 case 130:
  FUNC_2(VAR_13, VAR_14->cmd, VAR_15[VAR_3],
      VAR_15[VAR_4], VAR_15[VAR_8],
      VAR_15[VAR_9], VAR_15[VAR_1],
      VAR_15[VAR_2],
      VAR_15[VAR_6],
      VAR_15[VAR_7], ((void*)0));
  break;
 case 128:
  FUNC_5(VAR_13, VAR_15, 0);
  break;
 case 129:
  FUNC_5(VAR_13, VAR_15, 1);
  break;
 case 132:
  FUNC_4(VAR_13->drv, VAR_15);
  break;
 default:
  FUNC_9(VAR_0, "nl80211: Ignored unknown event "
      "(cmd=%d)", VAR_14->cmd);
  break;
 }

 return VAR_10;
}
