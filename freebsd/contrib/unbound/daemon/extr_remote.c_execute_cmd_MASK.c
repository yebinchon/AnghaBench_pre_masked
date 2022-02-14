
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int auth_zones; } ;
struct worker {TYPE_2__* daemon; TYPE_1__ env; } ;
struct daemon_remote {int dummy; } ;
struct TYPE_4__ {int local_zones; } ;
typedef int RES ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct daemon_remote*,int *,char*) ;
 int FUNC_2 (int *,struct worker*,char*) ;
 int FUNC_3 (int *,struct worker*,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct worker*) ;
 int FUNC_9 (int *,struct worker*) ;
 int FUNC_10 (int *,struct worker*) ;
 int FUNC_11 (int *,struct worker*,char*) ;
 int FUNC_12 (int *,struct worker*,char*) ;
 int FUNC_13 (int *,struct worker*) ;
 int FUNC_14 (int *,struct worker*) ;
 int FUNC_15 (int *,struct worker*) ;
 int FUNC_16 (int *,struct worker*,char*) ;
 int FUNC_17 (int *,struct worker*,char*) ;
 int FUNC_18 (int *,struct worker*,char*) ;
 int FUNC_19 (int *,struct worker*,char*) ;
 int FUNC_20 (int *,struct worker*,char*) ;
 int FUNC_21 (int *,struct worker*,char*) ;
 int FUNC_22 (int *,struct worker*,char*) ;
 int FUNC_23 (int *,struct worker*) ;
 int FUNC_24 (int *,struct worker*,char*) ;
 int FUNC_25 (int *,struct worker*,char*) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,struct worker*) ;
 int FUNC_28 (int *,struct worker*,int ) ;
 int FUNC_29 (int *,int ) ;
 int FUNC_30 (int *,struct worker*) ;
 int FUNC_31 (int *,struct worker*) ;
 int FUNC_32 (int *,struct worker*,char*) ;
 int FUNC_33 (int *,struct worker*,char*) ;
 int FUNC_34 (int *,struct daemon_remote*) ;
 int FUNC_35 (int *,struct worker*,char*) ;
 int FUNC_36 (int *,struct daemon_remote*,int) ;
 int FUNC_37 (int *,struct worker*) ;
 int FUNC_38 (int *,struct daemon_remote*) ;
 int FUNC_39 (int *,struct worker*,char*) ;
 int FUNC_40 (int *,struct worker*,char*) ;
 int FUNC_41 (int *,char*) ;
 int FUNC_42 (int *,struct worker*,char*) ;
 int FUNC_43 (int *,struct worker*,char*) ;
 int FUNC_44 (int *,struct worker*,char*) ;
 int FUNC_45 (int *,struct worker*,char*) ;
 int FUNC_46 (int *,struct worker*,char*) ;
 int FUNC_47 (int *,struct worker*,char*) ;
 int FUNC_48 (int *,struct worker*,char*) ;
 int FUNC_49 (int *,int ,char*) ;
 int FUNC_50 (int *,int ,char*) ;
 int FUNC_51 (int *,int ) ;
 int FUNC_52 (int *,int ) ;
 int FUNC_53 (int *,struct worker*) ;
 scalar_t__ FUNC_54 (int *,struct worker*) ;
 int FUNC_55 (int *) ;
 char* FUNC_56 (char*) ;
 int FUNC_57 (int *,char*,char*) ;

__attribute__((used)) static void
FUNC_58(struct daemon_remote* VAR_0, RES* VAR_1, char* VAR_2,
 struct worker* VAR_3)
{
 char* VAR_4 = FUNC_56(VAR_2);

 if(FUNC_0(VAR_4, "stop", 4)) {
  FUNC_38(VAR_1, VAR_0);
  return;
 } else if(FUNC_0(VAR_4, "reload", 6)) {
  FUNC_34(VAR_1, VAR_0);
  return;
 } else if(FUNC_0(VAR_4, "stats_noreset", 13)) {
  FUNC_36(VAR_1, VAR_0, 0);
  return;
 } else if(FUNC_0(VAR_4, "stats", 5)) {
  FUNC_36(VAR_1, VAR_0, 1);
  return;
 } else if(FUNC_0(VAR_4, "status", 6)) {
  FUNC_37(VAR_1, VAR_3);
  return;
 } else if(FUNC_0(VAR_4, "dump_cache", 10)) {
  (void)FUNC_53(VAR_1, VAR_3);
  return;
 } else if(FUNC_0(VAR_4, "load_cache", 10)) {
  if(FUNC_54(VAR_1, VAR_3)) FUNC_55(VAR_1);
  return;
 } else if(FUNC_0(VAR_4, "list_forwards", 13)) {
  FUNC_27(VAR_1, VAR_3);
  return;
 } else if(FUNC_0(VAR_4, "list_stubs", 10)) {
  FUNC_30(VAR_1, VAR_3);
  return;
 } else if(FUNC_0(VAR_4, "list_insecure", 13)) {
  FUNC_23(VAR_1, VAR_3);
  return;
 } else if(FUNC_0(VAR_4, "list_local_zones", 16)) {
  FUNC_29(VAR_1, VAR_3->daemon->local_zones);
  return;
 } else if(FUNC_0(VAR_4, "list_local_data", 15)) {
  FUNC_28(VAR_1, VAR_3, VAR_3->daemon->local_zones);
  return;
 } else if(FUNC_0(VAR_4, "view_list_local_zones", 21)) {
  FUNC_46(VAR_1, VAR_3, FUNC_56(VAR_4+21));
  return;
 } else if(FUNC_0(VAR_4, "view_list_local_data", 20)) {
  FUNC_45(VAR_1, VAR_3, FUNC_56(VAR_4+20));
  return;
 } else if(FUNC_0(VAR_4, "ratelimit_list", 14)) {
  FUNC_33(VAR_1, VAR_3, VAR_4+14);
  return;
 } else if(FUNC_0(VAR_4, "ip_ratelimit_list", 17)) {
  FUNC_25(VAR_1, VAR_3, VAR_4+17);
  return;
 } else if(FUNC_0(VAR_4, "list_auth_zones", 15)) {
  FUNC_26(VAR_1, VAR_3->env.auth_zones);
  return;
 } else if(FUNC_0(VAR_4, "auth_zone_reload", 16)) {
  FUNC_2(VAR_1, VAR_3, FUNC_56(VAR_4+16));
  return;
 } else if(FUNC_0(VAR_4, "auth_zone_transfer", 18)) {
  FUNC_3(VAR_1, VAR_3, FUNC_56(VAR_4+18));
  return;
 } else if(FUNC_0(VAR_4, "stub_add", 8)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_39(VAR_1, VAR_3, FUNC_56(VAR_4+8));
  return;
 } else if(FUNC_0(VAR_4, "stub_remove", 11)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_40(VAR_1, VAR_3, FUNC_56(VAR_4+11));
  return;
 } else if(FUNC_0(VAR_4, "forward_add", 11)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_19(VAR_1, VAR_3, FUNC_56(VAR_4+11));
  return;
 } else if(FUNC_0(VAR_4, "forward_remove", 14)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_20(VAR_1, VAR_3, FUNC_56(VAR_4+14));
  return;
 } else if(FUNC_0(VAR_4, "insecure_add", 12)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_22(VAR_1, VAR_3, FUNC_56(VAR_4+12));
  return;
 } else if(FUNC_0(VAR_4, "insecure_remove", 15)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_24(VAR_1, VAR_3, FUNC_56(VAR_4+15));
  return;
 } else if(FUNC_0(VAR_4, "forward", 7)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_18(VAR_1, VAR_3, FUNC_56(VAR_4+7));
  return;
 } else if(FUNC_0(VAR_4, "flush_stats", 11)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_15(VAR_1, VAR_3);
  return;
 } else if(FUNC_0(VAR_4, "flush_requestlist", 17)) {

  if(VAR_0) FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_14(VAR_1, VAR_3);
  return;
 } else if(FUNC_0(VAR_4, "lookup", 6)) {
  FUNC_32(VAR_1, VAR_3, FUNC_56(VAR_4+6));
  return;
 }
 if(FUNC_0(VAR_4, "verbosity", 9)) {
  FUNC_41(VAR_1, FUNC_56(VAR_4+9));
 } else if(FUNC_0(VAR_4, "local_zone_remove", 17)) {
  FUNC_50(VAR_1, VAR_3->daemon->local_zones, FUNC_56(VAR_4+17));
 } else if(FUNC_0(VAR_4, "local_zones_remove", 18)) {
  FUNC_52(VAR_1, VAR_3->daemon->local_zones);
 } else if(FUNC_0(VAR_4, "local_zone", 10)) {
  FUNC_49(VAR_1, VAR_3->daemon->local_zones, FUNC_56(VAR_4+10));
 } else if(FUNC_0(VAR_4, "local_zones", 11)) {
  FUNC_51(VAR_1, VAR_3->daemon->local_zones);
 } else if(FUNC_0(VAR_4, "local_data_remove", 17)) {
  FUNC_5(VAR_1, VAR_3->daemon->local_zones, FUNC_56(VAR_4+17));
 } else if(FUNC_0(VAR_4, "local_datas_remove", 18)) {
  FUNC_7(VAR_1, VAR_3->daemon->local_zones);
 } else if(FUNC_0(VAR_4, "local_data", 10)) {
  FUNC_4(VAR_1, VAR_3->daemon->local_zones, FUNC_56(VAR_4+10));
 } else if(FUNC_0(VAR_4, "local_datas", 11)) {
  FUNC_6(VAR_1, VAR_3->daemon->local_zones);
 } else if(FUNC_0(VAR_4, "view_local_zone_remove", 22)) {
  FUNC_48(VAR_1, VAR_3, FUNC_56(VAR_4+22));
 } else if(FUNC_0(VAR_4, "view_local_zone", 15)) {
  FUNC_47(VAR_1, VAR_3, FUNC_56(VAR_4+15));
 } else if(FUNC_0(VAR_4, "view_local_data_remove", 22)) {
  FUNC_43(VAR_1, VAR_3, FUNC_56(VAR_4+22));
 } else if(FUNC_0(VAR_4, "view_local_data", 15)) {
  FUNC_42(VAR_1, VAR_3, FUNC_56(VAR_4+15));
 } else if(FUNC_0(VAR_4, "view_local_datas", 16)) {
  FUNC_44(VAR_1, VAR_3, FUNC_56(VAR_4+16));
 } else if(FUNC_0(VAR_4, "flush_zone", 10)) {
  FUNC_17(VAR_1, VAR_3, FUNC_56(VAR_4+10));
 } else if(FUNC_0(VAR_4, "flush_type", 10)) {
  FUNC_16(VAR_1, VAR_3, FUNC_56(VAR_4+10));
 } else if(FUNC_0(VAR_4, "flush_infra", 11)) {
  FUNC_11(VAR_1, VAR_3, FUNC_56(VAR_4+11));
 } else if(FUNC_0(VAR_4, "flush", 5)) {
  FUNC_12(VAR_1, VAR_3, FUNC_56(VAR_4+5));
 } else if(FUNC_0(VAR_4, "dump_requestlist", 16)) {
  FUNC_9(VAR_1, VAR_3);
 } else if(FUNC_0(VAR_4, "dump_infra", 10)) {
  FUNC_8(VAR_1, VAR_3);
 } else if(FUNC_0(VAR_4, "log_reopen", 10)) {
  FUNC_31(VAR_1, VAR_3);
 } else if(FUNC_0(VAR_4, "set_option", 10)) {
  FUNC_35(VAR_1, VAR_3, FUNC_56(VAR_4+10));
 } else if(FUNC_0(VAR_4, "get_option", 10)) {
  FUNC_21(VAR_1, VAR_3, FUNC_56(VAR_4+10));
 } else if(FUNC_0(VAR_4, "flush_bogus", 11)) {
  FUNC_10(VAR_1, VAR_3);
 } else if(FUNC_0(VAR_4, "flush_negative", 14)) {
  FUNC_13(VAR_1, VAR_3);
 } else {
  (void)FUNC_57(VAR_1, "error unknown command '%s'\n", VAR_4);
 }
}
