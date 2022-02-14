
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct audit_netlink_list {int pid; int q; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct audit_netlink_list*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct sk_buff*,int,int ) ;

int FUNC_5(void *VAR_2)
{
 struct audit_netlink_list *VAR_3 = VAR_2;
 int VAR_4 = VAR_3->pid;
 struct sk_buff *VAR_5;


 FUNC_2(&VAR_0);
 FUNC_3(&VAR_0);

 while ((VAR_5 = FUNC_0(&VAR_3->q)) != ((void*)0))
  FUNC_4(VAR_1, VAR_5, VAR_4, 0);

 FUNC_1(VAR_3);

 return 0;
}
