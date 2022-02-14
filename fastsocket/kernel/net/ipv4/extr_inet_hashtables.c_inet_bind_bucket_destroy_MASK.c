
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct inet_bind_bucket {int node; int owners; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inet_bind_bucket*) ;
 int FUNC_3 (struct kmem_cache*,struct inet_bind_bucket*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct kmem_cache *VAR_0, struct inet_bind_bucket *VAR_1)
{
 if (FUNC_1(&VAR_1->owners)) {
  FUNC_0(&VAR_1->node);
  FUNC_4(FUNC_2(VAR_1));
  FUNC_3(VAR_0, VAR_1);
 }
}
