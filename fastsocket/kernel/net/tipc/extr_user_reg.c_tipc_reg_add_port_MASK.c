
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_port {size_t user_ref; int uport_list; } ;
struct tipc_user {int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 struct tipc_user* VAR_6 ;

int FUNC_3(struct user_port *VAR_7)
{
 struct tipc_user *VAR_8;

 if (VAR_7->user_ref == 0)
  return 0;
 if (VAR_7->user_ref > VAR_2)
  return -VAR_0;
 if ((VAR_5 == VAR_3) || !VAR_6 )
  return -VAR_1;

 FUNC_1(&VAR_4);
 VAR_8 = &VAR_6[VAR_7->user_ref];
 FUNC_0(&VAR_7->uport_list, &VAR_8->ports);
 FUNC_2(&VAR_4);
 return 0;
}
