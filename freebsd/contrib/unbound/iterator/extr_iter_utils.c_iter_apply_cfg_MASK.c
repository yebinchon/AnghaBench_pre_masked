
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_env {int max_dependency_depth; int supports_ipv4; int supports_ipv6; scalar_t__ caps_white; scalar_t__ priv; scalar_t__ donotq; int * target_fetch_policy; } ;
struct config_file {int do_ip4; int do_ip6; scalar_t__ caps_whitelist; int target_fetch_policy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct config_file*) ;
 int FUNC_1 (scalar_t__,struct config_file*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,struct config_file*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct iter_env*,int ) ;
 int FUNC_8 (int ,char*,int,int ) ;

int
FUNC_9(struct iter_env* VAR_2, struct config_file* VAR_3)
{
 int VAR_4;

 if(!FUNC_7(VAR_2, VAR_3->target_fetch_policy))
  return 0;
 for(VAR_4=0; VAR_4<VAR_2->max_dependency_depth+1; VAR_4++)
  FUNC_8(VAR_0, "target fetch policy for level %d is %d",
   VAR_4, VAR_2->target_fetch_policy[VAR_4]);

 if(!VAR_2->donotq)
  VAR_2->donotq = FUNC_2();
 if(!VAR_2->donotq || !FUNC_1(VAR_2->donotq, VAR_3)) {
  FUNC_3("Could not set donotqueryaddresses");
  return 0;
 }
 if(!VAR_2->priv)
  VAR_2->priv = FUNC_5();
 if(!VAR_2->priv || !FUNC_4(VAR_2->priv, VAR_3)) {
  FUNC_3("Could not set private addresses");
  return 0;
 }
 if(VAR_3->caps_whitelist) {
  if(!VAR_2->caps_white)
   VAR_2->caps_white = FUNC_6(VAR_1);
  if(!VAR_2->caps_white || !FUNC_0(
   VAR_2->caps_white, VAR_3)) {
   FUNC_3("Could not set capsforid whitelist");
   return 0;
  }

 }
 VAR_2->supports_ipv6 = VAR_3->do_ip6;
 VAR_2->supports_ipv4 = VAR_3->do_ip4;
 return 1;
}
