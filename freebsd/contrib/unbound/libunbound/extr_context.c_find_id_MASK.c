
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int next_querynum; int queries; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int*) ;

__attribute__((used)) static int
FUNC_1(struct ub_ctx* VAR_1, int* VAR_2)
{
 size_t VAR_3 = 0;
 VAR_1->next_querynum++;
 while(FUNC_0(&VAR_1->queries, &VAR_1->next_querynum)) {
  VAR_1->next_querynum++;
  if(VAR_3++ > VAR_0)
   return 0;
 }
 *VAR_2 = VAR_1->next_querynum;
 return 1;
}
