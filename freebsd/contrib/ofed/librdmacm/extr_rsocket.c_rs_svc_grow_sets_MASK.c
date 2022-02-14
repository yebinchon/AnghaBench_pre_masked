
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int dummy; } ;
struct rs_svc {int size; int context_size; int cnt; void* contexts; struct rsocket** rss; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct rsocket**) ;
 int FUNC_2 (void*,void*,int) ;

__attribute__((used)) static int FUNC_3(struct rs_svc *VAR_1, int VAR_2)
{
 struct rsocket **VAR_3;
 void *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_1->size + VAR_2, sizeof(*VAR_3) + VAR_1->context_size);
 if (!VAR_4)
  return VAR_0;

 VAR_1->size += VAR_2;
 VAR_3 = VAR_4;
 VAR_5 = VAR_4 + sizeof(*VAR_3) * VAR_1->size;
 if (VAR_1->cnt) {
  FUNC_2(VAR_3, VAR_1->rss, sizeof(*VAR_3) * (VAR_1->cnt + 1));
  FUNC_2(VAR_5, VAR_1->contexts, VAR_1->context_size * (VAR_1->cnt + 1));
 }

 FUNC_1(VAR_1->rss);
 VAR_1->rss = VAR_3;
 VAR_1->contexts = VAR_5;
 return 0;
}
