
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_pool_map {scalar_t__ npools; int * pool_to; int * to_pool; int mode; int count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct svc_pool_map VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct svc_pool_map *VAR_3 = &VAR_1;

 FUNC_1(&VAR_2);

 if (!--VAR_3->count) {
  VAR_3->mode = VAR_0;
  FUNC_0(VAR_3->to_pool);
  VAR_3->to_pool = ((void*)0);
  FUNC_0(VAR_3->pool_to);
  VAR_3->pool_to = ((void*)0);
  VAR_3->npools = 0;
 }

 FUNC_2(&VAR_2);
}
