
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int dummy; } ;
struct rs_svc {size_t cnt; int context_size; scalar_t__ contexts; int * rss; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct rs_svc*,struct rsocket*) ;

__attribute__((used)) static int FUNC_2(struct rs_svc *VAR_1, struct rsocket *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) >= 0) {
  VAR_1->rss[VAR_3] = VAR_1->rss[VAR_1->cnt];
  FUNC_0(VAR_1->contexts + VAR_3 * VAR_1->context_size,
         VAR_1->contexts + VAR_1->cnt * VAR_1->context_size,
         VAR_1->context_size);
  VAR_1->cnt--;
  return 0;
 }
 return VAR_0;
}
