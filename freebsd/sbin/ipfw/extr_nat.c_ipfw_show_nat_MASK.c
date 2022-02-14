
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nat_list_arg {int cmd; int is_all; } ;
struct nat44_cfg_nat {int dummy; } ;
typedef int nla ;
typedef int ipfw_obj_header ;
struct TYPE_2__ {scalar_t__ test_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nat_list_arg*,int ,int) ;
 int FUNC_4 (int ,struct nat_list_arg*,int) ;
 scalar_t__ FUNC_5 (char*,int,int **) ;
 int FUNC_6 (struct nat44_cfg_nat*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int ) ;

void
FUNC_10(int VAR_6, char **VAR_7)
{
 ipfw_obj_header *VAR_8;
 char *VAR_9;
 int VAR_10;
 struct nat_list_arg VAR_11;

 VAR_6--;
 VAR_7++;

 if (VAR_4.test_only)
  return;


 VAR_10 = 0;
 VAR_9 = ((void*)0);
 for ( ; VAR_6 != 0; VAR_6--, VAR_7++) {
  if (!FUNC_9(VAR_7[0], "config", FUNC_8(VAR_7[0]))) {
   VAR_10 = VAR_2;
   continue;
  }
  if (FUNC_7(VAR_7[0], "log") == 0) {
   VAR_10 = VAR_3;
   continue;
  }
  if (VAR_9 != ((void*)0))
   FUNC_0(VAR_1,"only one instance name may be specified");
  VAR_9 = VAR_7[0];
 }

 if (VAR_10 == 0)
  FUNC_1(VAR_1, "Please specify action. Available: config,log");

 if (VAR_9 == ((void*)0)) {
  FUNC_3(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.cmd = VAR_10;
  VAR_11.is_all = 1;
  FUNC_4(VAR_5, &VAR_11, 1);
 } else {
  if (FUNC_5(VAR_9, VAR_10, &VAR_8) != 0)
   FUNC_0(VAR_0, "Error getting nat %s instance info", VAR_9);
  FUNC_6((struct nat44_cfg_nat *)(VAR_8 + 1), ((void*)0));
  FUNC_2(VAR_8);
 }
}
