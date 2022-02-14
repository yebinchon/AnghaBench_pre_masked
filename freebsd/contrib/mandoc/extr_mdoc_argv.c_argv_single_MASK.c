
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_man {int dummy; } ;
struct mdoc_argv {int sz; char** value; } ;
typedef enum margserr { ____Placeholder_margserr } margserr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct roff_man*,int,int*,char*,int ,char**) ;
 char** FUNC_1 (int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct roff_man *VAR_3, int VAR_4,
  struct mdoc_argv *VAR_5, int *VAR_6, char *VAR_7)
{
 enum margserr VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7, VAR_0, &VAR_9);
 if (VAR_8 == VAR_2)
  return;

 if (VAR_8 != VAR_1)
  VAR_9 = FUNC_2(VAR_9);

 VAR_5->sz = 1;
 VAR_5->value = FUNC_1(sizeof(char *));
 VAR_5->value[0] = VAR_9;
}
