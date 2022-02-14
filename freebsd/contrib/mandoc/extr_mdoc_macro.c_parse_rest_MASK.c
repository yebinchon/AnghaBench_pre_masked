
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_man {int dummy; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
typedef enum margserr { ____Placeholder_margserr } margserr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct roff_man*,int,int,int,int*,char*,char*,int) ;
 int FUNC_2 (struct roff_man*,int,int*,char*,int,char**) ;

__attribute__((used)) static int
FUNC_3(struct roff_man *VAR_2, enum roff_tok VAR_3,
    int VAR_4, int *VAR_5, char *VAR_6)
{
 char *VAR_7;
 int VAR_8, VAR_9;
 enum margserr VAR_10;

 for (;;) {
  VAR_9 = *VAR_5;
  VAR_10 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, VAR_3, &VAR_7);
  if (VAR_10 == VAR_1)
   return 0;
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_9, VAR_5, VAR_6, VAR_7, 1);
  if (VAR_10 == VAR_0)
   FUNC_0(VAR_7);
  if (VAR_8)
   return 1;
 }
}
