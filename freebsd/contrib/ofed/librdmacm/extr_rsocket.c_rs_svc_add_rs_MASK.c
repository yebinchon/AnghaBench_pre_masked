
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int dummy; } ;
struct rs_svc {int cnt; int size; struct rsocket** rss; } ;


 int FUNC_0 (struct rs_svc*,int) ;

__attribute__((used)) static int FUNC_1(struct rs_svc *VAR_0, struct rsocket *VAR_1)
{
 int VAR_2;

 if (VAR_0->cnt >= VAR_0->size - 1) {
  VAR_2 = FUNC_0(VAR_0, 4);
  if (VAR_2)
   return VAR_2;
 }

 VAR_0->rss[++VAR_0->cnt] = VAR_1;
 return 0;
}
