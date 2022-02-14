
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_ops {int ops_list; int flags; scalar_t__ policy; int * doit; int * dumpit; int cmd; } ;
struct genl_family {int ops_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct genl_ops*) ;
 scalar_t__ FUNC_1 (int ,struct genl_family*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct genl_family *VAR_6, struct genl_ops *VAR_7)
{
 int VAR_8 = -VAR_2;

 if (VAR_7->dumpit == ((void*)0) && VAR_7->doit == ((void*)0))
  goto errout;

 if (FUNC_1(VAR_7->cmd, VAR_6)) {
  VAR_8 = -VAR_1;
  goto errout;
 }

 if (VAR_7->dumpit)
  VAR_7->flags |= VAR_4;
 if (VAR_7->doit)
  VAR_7->flags |= VAR_3;
 if (VAR_7->policy)
  VAR_7->flags |= VAR_5;

 FUNC_2();
 FUNC_4(&VAR_7->ops_list, &VAR_6->ops_list);
 FUNC_3();

 FUNC_0(VAR_0, VAR_7);
 VAR_8 = 0;
errout:
 return VAR_8;
}
