
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tc_action {TYPE_1__* ops; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int index ;
struct TYPE_2__ {scalar_t__ (* lookup ) (struct tc_action*,int) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tc_action* FUNC_0 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct tc_action*) ;
 struct tc_action* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int *) ;
 scalar_t__ FUNC_7 (struct tc_action*,int) ;
 TYPE_1__* FUNC_8 (struct nlattr*) ;

__attribute__((used)) static struct tc_action *
FUNC_9(struct nlattr *VAR_7, struct nlmsghdr *VAR_8, u32 VAR_9)
{
 struct nlattr *VAR_10[VAR_6+1];
 struct tc_action *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_6(VAR_10, VAR_6, VAR_7, ((void*)0));
 if (VAR_13 < 0)
  goto err_out;

 VAR_13 = -VAR_0;
 if (VAR_10[VAR_4] == ((void*)0) ||
     FUNC_5(VAR_10[VAR_4]) < sizeof(VAR_12))
  goto err_out;
 VAR_12 = FUNC_4(VAR_10[VAR_4]);

 VAR_13 = -VAR_2;
 VAR_11 = FUNC_2(sizeof(struct tc_action), VAR_3);
 if (VAR_11 == ((void*)0))
  goto err_out;

 VAR_13 = -VAR_0;
 VAR_11->ops = FUNC_8(VAR_10[VAR_5]);
 if (VAR_11->ops == ((void*)0))
  goto err_free;
 if (VAR_11->ops->lookup == ((void*)0))
  goto err_mod;
 VAR_13 = -VAR_1;
 if (VAR_11->ops->lookup(VAR_11, VAR_12) == 0)
  goto err_mod;

 FUNC_3(VAR_11->ops->owner);
 return VAR_11;

err_mod:
 FUNC_3(VAR_11->ops->owner);
err_free:
 FUNC_1(VAR_11);
err_out:
 return FUNC_0(VAR_13);
}
