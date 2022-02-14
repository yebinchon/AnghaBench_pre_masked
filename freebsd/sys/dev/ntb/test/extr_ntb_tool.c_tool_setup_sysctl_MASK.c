
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_ctx {unsigned int inspad_cnt; unsigned int peer_cnt; TYPE_1__* peers; int dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int desc ;
typedef int buf ;
struct TYPE_2__ {unsigned int inmw_cnt; unsigned int outspad_cnt; struct tool_ctx* inmws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct tool_ctx*,unsigned int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int VAR_9 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static void
FUNC_6(struct tool_ctx *VAR_26)
{
 char VAR_27[VAR_9], VAR_28[VAR_9];
 struct sysctl_oid_list *VAR_29, *VAR_30;
 struct sysctl_oid *VAR_31, *VAR_32;
 struct sysctl_ctx_list *VAR_33;
 unsigned int VAR_34, VAR_35, VAR_36;

 VAR_33 = FUNC_3(VAR_26->dev);
 VAR_31 = FUNC_4(VAR_26->dev);
 VAR_29 = FUNC_2(VAR_31);

 FUNC_1(VAR_33, VAR_29, VAR_8, "port", VAR_7 |
     VAR_2 | VAR_0, VAR_26, 0, VAR_15,
     "IU", "local port number");

 FUNC_1(VAR_33, VAR_29, VAR_8, "link", VAR_6 |
     VAR_4 | VAR_0, VAR_26, 0, VAR_14,
     "IU", "link info");

 FUNC_1(VAR_33, VAR_29, VAR_8, "db", VAR_6 |
     VAR_4 | VAR_0, VAR_26, 0, VAR_11,
     "A", "db info");

 FUNC_1(VAR_33, VAR_29, VAR_8, "db_valid_mask", VAR_6 |
     VAR_1 | VAR_0, VAR_26, 0, VAR_13,
     "A", "db valid mask");

 FUNC_1(VAR_33, VAR_29, VAR_8, "db_mask", VAR_6 |
     VAR_4 | VAR_0, VAR_26, 0, VAR_12,
     "A", "db mask");

 FUNC_1(VAR_33, VAR_29, VAR_8, "db_event", VAR_6 |
     VAR_5 | VAR_0, VAR_26, 0, VAR_10,
     "A", "db event");

 FUNC_1(VAR_33, VAR_29, VAR_8, "peer_db", VAR_6 |
     VAR_4 | VAR_0, VAR_26, 0, VAR_18,
     "A", "peer db");

 FUNC_1(VAR_33, VAR_29, VAR_8, "peer_db_mask", VAR_6 |
     VAR_4 | VAR_0, VAR_26, 0, VAR_19,
     "IU", "peer db mask info");

 if (VAR_26->inspad_cnt != 0) {
  for (VAR_35 = 0; VAR_35 < VAR_26->inspad_cnt; VAR_35++) {
   FUNC_5(VAR_27, sizeof(VAR_27), "spad%d", VAR_35);
   FUNC_5(VAR_28, sizeof(VAR_28), "spad%d info", VAR_35);

   FUNC_1(VAR_33, VAR_29, VAR_8, VAR_27,
       VAR_6 | VAR_4 | VAR_0,
       VAR_26, VAR_35, VAR_25, "IU", VAR_28);
  }
 }

 for (VAR_34 = 0; VAR_34 < VAR_26->peer_cnt; VAR_34++) {
  FUNC_5(VAR_27, sizeof(VAR_27), "peer%d", VAR_34);

  VAR_32 = FUNC_0(VAR_33, VAR_29, VAR_8, VAR_27, VAR_3, 0,
      VAR_27);
  VAR_30 = FUNC_2(VAR_32);

  FUNC_1(VAR_33, VAR_30, VAR_8, "port",
      VAR_7 | VAR_2 | VAR_0, VAR_26, VAR_34,
      VAR_23, "IU", "peer port number");

  FUNC_1(VAR_33, VAR_30, VAR_8, "link",
      VAR_6 | VAR_4 | VAR_0, VAR_26, VAR_34,
      VAR_21, "IU", "peer_link info");

  FUNC_1(VAR_33, VAR_30, VAR_8, "link_event",
      VAR_6 | VAR_4 | VAR_0, VAR_26, VAR_34,
      VAR_20, "IU", "link event");

  for (VAR_36 = 0; VAR_36 < VAR_26->peers[VAR_34].inmw_cnt; VAR_36++) {
   FUNC_5(VAR_27, sizeof(VAR_27), "mw_trans%d", VAR_36);
   FUNC_5(VAR_28, sizeof(VAR_28), "mw trans%d info", VAR_36);

   FUNC_1(VAR_33, VAR_30, VAR_8, VAR_27,
       VAR_6 | VAR_4 | VAR_0,
       &VAR_26->peers[VAR_34].inmws[VAR_36], 0,
       VAR_17, "IU", VAR_28);

   FUNC_5(VAR_27, sizeof(VAR_27), "mw%d", VAR_36);
   FUNC_5(VAR_28, sizeof(VAR_28), "mw%d info", VAR_36);

   FUNC_1(VAR_33, VAR_30, VAR_8, VAR_27,
       VAR_6 | VAR_4 | VAR_0,
       &VAR_26->peers[VAR_34].inmws[VAR_36], 0,
       VAR_16, "IU", VAR_28);

   FUNC_5(VAR_27, sizeof(VAR_27), "peer_mw%d", VAR_36);
   FUNC_5(VAR_28, sizeof(VAR_28), "peer_mw%d info", VAR_36);

   FUNC_1(VAR_33, VAR_30, VAR_8, VAR_27,
       VAR_6 | VAR_4 | VAR_0,
       &VAR_26->peers[VAR_34].inmws[VAR_36], 0,
       VAR_22, "IU", VAR_28);
  }

  for (VAR_35 = 0; VAR_35 < VAR_26->peers[VAR_34].outspad_cnt; VAR_35++) {
   FUNC_5(VAR_27, sizeof(VAR_27), "spad%d", VAR_35);
   FUNC_5(VAR_28, sizeof(VAR_28), "spad%d info", VAR_35);

   FUNC_1(VAR_33, VAR_30, VAR_8, VAR_27,
       VAR_6 | VAR_4 | VAR_0,
       VAR_26, VAR_35, VAR_24, "IU", VAR_28);
  }
 }
}
