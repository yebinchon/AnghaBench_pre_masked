
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct views {int dummy; } ;
struct config_file {scalar_t__ do_ip6; } ;
struct acl_list {int tree; int region; } ;


 int FUNC_0 (struct acl_list*,char*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct acl_list*,struct config_file*) ;
 int FUNC_4 (struct acl_list*,struct config_file*) ;
 int FUNC_5 (struct acl_list*,struct config_file*) ;
 int FUNC_6 (struct acl_list*,struct config_file*) ;
 int FUNC_7 (struct acl_list*,struct config_file*,struct views*) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct acl_list* VAR_0, struct config_file* VAR_1,
 struct views* VAR_2)
{
 FUNC_8(VAR_0->region);
 FUNC_1(&VAR_0->tree);
 if(!FUNC_3(VAR_0, VAR_1))
  return 0;
 if(!FUNC_7(VAR_0, VAR_1, VAR_2))
  return 0;
 if(!FUNC_6(VAR_0, VAR_1))
  return 0;
 if(!FUNC_4(VAR_0, VAR_1))
  return 0;
 if(!FUNC_5(VAR_0, VAR_1))
  return 0;

 if(!FUNC_0(VAR_0, "0.0.0.0/0", "refuse", 0))
  return 0;
 if(!FUNC_0(VAR_0, "127.0.0.0/8", "allow", 0))
  return 0;
 if(VAR_1->do_ip6) {
  if(!FUNC_0(VAR_0, "::0/0", "refuse", 0))
   return 0;
  if(!FUNC_0(VAR_0, "::1", "allow", 0))
   return 0;
  if(!FUNC_0(VAR_0, "::ffff:127.0.0.1", "allow", 0))
   return 0;
 }
 FUNC_2(&VAR_0->tree);
 return 1;
}
