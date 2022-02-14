
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action_ops {int (* init ) (struct nlattr*,struct nlattr*,struct tc_action*,int,int) ;int owner; } ;
struct tc_action {struct tc_action_ops* ops; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tc_action* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (struct tc_action*) ;
 struct tc_action* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,int *) ;
 int FUNC_5 (char*,struct nlattr*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (struct nlattr*,struct nlattr*,struct tc_action*,int,int) ;
 int FUNC_11 (struct nlattr*,struct nlattr*,struct tc_action*,int,int) ;
 struct tc_action_ops* FUNC_12 (char*) ;

struct tc_action *FUNC_13(struct nlattr *VAR_10, struct nlattr *VAR_11,
        char *VAR_12, int VAR_13, int VAR_14)
{
 struct tc_action *VAR_15;
 struct tc_action_ops *VAR_16;
 char VAR_17[VAR_6];
 struct nlattr *VAR_18[VAR_8+1];
 struct nlattr *VAR_19;
 int VAR_20;

 if (VAR_12 == ((void*)0)) {
  VAR_20 = FUNC_4(VAR_18, VAR_8, VAR_10, ((void*)0));
  if (VAR_20 < 0)
   goto err_out;
  VAR_20 = -VAR_2;
  VAR_19 = VAR_18[VAR_7];
  if (VAR_19 == ((void*)0))
   goto err_out;
  if (FUNC_5(VAR_17, VAR_19, VAR_6) >= VAR_6)
   goto err_out;
 } else {
  VAR_20 = -VAR_2;
  if (FUNC_9(VAR_17, VAR_12, VAR_6) >= VAR_6)
   goto err_out;
 }

 VAR_16 = FUNC_12(VAR_17);
 if (VAR_16 == ((void*)0)) {
  VAR_20 = -VAR_3;
  goto err_out;
 }

 VAR_20 = -VAR_4;
 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_5);
 if (VAR_15 == ((void*)0))
  goto err_mod;


 if (VAR_12 == ((void*)0))
  VAR_20 = VAR_16->init(VAR_18[VAR_9], VAR_11, VAR_15, VAR_13, VAR_14);
 else
  VAR_20 = VAR_16->init(VAR_10, VAR_11, VAR_15, VAR_13, VAR_14);
 if (VAR_20 < 0)
  goto err_free;





 if (VAR_20 != VAR_0)
  FUNC_3(VAR_16->owner);
 VAR_15->ops = VAR_16;

 return VAR_15;

err_free:
 FUNC_1(VAR_15);
err_mod:
 FUNC_3(VAR_16->owner);
err_out:
 return FUNC_0(VAR_20);
}
