
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action {int order; struct tc_action* next; } ;
struct nlattr {int dummy; } ;


 struct tc_action* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tc_action*) ;
 int VAR_0 ;
 int FUNC_2 (struct nlattr**,int,struct nlattr*,int *) ;
 int FUNC_3 (struct tc_action*,int) ;
 struct tc_action* FUNC_4 (struct nlattr*,struct nlattr*,char*,int,int) ;

struct tc_action *FUNC_5(struct nlattr *VAR_1, struct nlattr *VAR_2,
      char *VAR_3, int VAR_4, int VAR_5)
{
 struct nlattr *VAR_6[VAR_0+1];
 struct tc_action *VAR_7 = ((void*)0), *VAR_8, *VAR_9 = ((void*)0);
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_6, VAR_0, VAR_1, ((void*)0));
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);

 for (VAR_11 = 1; VAR_11 <= VAR_0 && VAR_6[VAR_11]; VAR_11++) {
  VAR_8 = FUNC_4(VAR_6[VAR_11], VAR_2, VAR_3, VAR_4, VAR_5);
  if (FUNC_1(VAR_8))
   goto err;
  VAR_8->order = VAR_11;

  if (VAR_7 == ((void*)0))
   VAR_7 = VAR_8;
  else
   VAR_9->next = VAR_8;
  VAR_9 = VAR_8;
 }
 return VAR_7;

err:
 if (VAR_7 != ((void*)0))
  FUNC_3(VAR_7, VAR_5);
 return VAR_8;
}
