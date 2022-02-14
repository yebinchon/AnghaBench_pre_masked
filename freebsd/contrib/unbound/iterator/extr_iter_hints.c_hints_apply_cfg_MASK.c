
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_hints {int tree; } ;
struct delegpt {int dummy; } ;
struct config_file {int do_ip6; int do_ip4; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct delegpt* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iter_hints*) ;
 int FUNC_2 (struct iter_hints*,int ,struct delegpt*,int ) ;
 int FUNC_3 (struct iter_hints*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iter_hints*,struct config_file*) ;
 int FUNC_7 (struct iter_hints*,struct config_file*) ;
 int FUNC_8 (int ,char*) ;

int
FUNC_9(struct iter_hints* VAR_2, struct config_file* VAR_3)
{
 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->tree);


 if(!FUNC_6(VAR_2, VAR_3))
  return 0;


 if(!FUNC_7(VAR_2, VAR_3))
  return 0;


 if(!FUNC_3(VAR_2, VAR_0)) {
  struct delegpt* VAR_4 = FUNC_0(VAR_3->do_ip4,
   VAR_3->do_ip6);
  FUNC_8(VAR_1, "no config, using builtin root hints.");
  if(!VAR_4)
   return 0;
  if(!FUNC_2(VAR_2, VAR_0, VAR_4, 0))
   return 0;
 }

 FUNC_5(&VAR_2->tree);
 return 1;
}
