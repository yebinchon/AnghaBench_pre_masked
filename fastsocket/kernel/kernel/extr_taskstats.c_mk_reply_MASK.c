
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct taskstats {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int pid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct taskstats* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int,int,int *) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ,int) ;

__attribute__((used)) static struct taskstats *FUNC_5(struct sk_buff *VAR_4, int VAR_5, u32 VAR_6)
{
 struct nlattr *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = (VAR_5 == VAR_2)
   ? VAR_0
   : VAR_1;

 VAR_7 = FUNC_2(VAR_4, VAR_9);
 if (!VAR_7)
  goto err;
 if (FUNC_3(VAR_4, VAR_5, sizeof(VAR_6), &VAR_6) < 0)
  goto err;
 VAR_8 = FUNC_4(VAR_4, VAR_3, sizeof(struct taskstats));
 if (!VAR_8)
  goto err;
 FUNC_1(VAR_4, VAR_7);

 return FUNC_0(VAR_8);
err:
 return ((void*)0);
}
