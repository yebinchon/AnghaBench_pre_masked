
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ctl_req {void* status; int error_str; int args_nvl; } ;
struct cfiscsi_target {int ct_port; int ct_state; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct cfiscsi_target* FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (struct cfiscsi_target*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (char const*,int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct ctl_req *VAR_4)
{
 struct cfiscsi_target *VAR_5;
 const char *VAR_6, *VAR_7;
 uint16_t VAR_8;

 VAR_6 = FUNC_3(VAR_4->args_nvl, "cfiscsi_target", ((void*)0));
 VAR_7 = FUNC_3(VAR_4->args_nvl, "cfiscsi_portal_group_tag",
     ((void*)0));

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  VAR_4->status = VAR_1;
  FUNC_4(VAR_4->error_str, sizeof(VAR_4->error_str),
      "Missing required argument");
  return;
 }

 VAR_8 = FUNC_5(VAR_7, ((void*)0), 0);
 VAR_5 = FUNC_0(&VAR_3, VAR_6, VAR_8);
 if (VAR_5 == ((void*)0)) {
  VAR_4->status = VAR_1;
  FUNC_4(VAR_4->error_str, sizeof(VAR_4->error_str),
      "can't find target \"%s\"", VAR_6);
  return;
 }

 VAR_5->ct_state = VAR_0;
 FUNC_2(&VAR_5->ct_port);
 FUNC_1(VAR_5);
 FUNC_1(VAR_5);
 VAR_4->status = VAR_2;
}
