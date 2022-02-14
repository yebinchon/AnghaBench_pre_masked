
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
 int VAR_3 ;
 int FUNC_0 (struct roff_man*,int,int*,char*,int ,char**) ;
 char** FUNC_1 (char**,int,int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct roff_man *VAR_4, int VAR_5,
  struct mdoc_argv *VAR_6, int *VAR_7, char *VAR_8)
{
 enum margserr VAR_9;
 char *VAR_10;

 for (VAR_6->sz = 0; ; VAR_6->sz++) {
  if (VAR_8[*VAR_7] == '-')
   break;
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8, VAR_0, &VAR_10);
  if (VAR_9 == VAR_2)
   break;

  if (VAR_6->sz % VAR_3 == 0)
   VAR_6->value = FUNC_1(VAR_6->value,
       VAR_6->sz + VAR_3, sizeof(char *));

  if (VAR_9 != VAR_1)
   VAR_10 = FUNC_2(VAR_10);
  VAR_6->value[(int)VAR_6->sz] = VAR_10;
 }
}
