
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct proto*,int ) ;
 int FUNC_2 (int *,struct proto*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(struct proto *VAR_2, bool VAR_3)
{
 static bool VAR_4 = 0;

 if (!VAR_3)
  FUNC_1(&VAR_0, VAR_2, VAR_1);
 else {
  FUNC_0(!VAR_4);
  VAR_4 = 1;
  FUNC_2(&VAR_0, VAR_2, VAR_1);
 }
}
