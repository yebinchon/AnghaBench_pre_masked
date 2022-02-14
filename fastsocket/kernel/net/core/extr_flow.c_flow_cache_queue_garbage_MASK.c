
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct flow_cache_percpu {int hash_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct list_head*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct flow_cache_percpu *VAR_3,
         int VAR_4, struct list_head *VAR_5)
{
 if (VAR_4) {
  VAR_3->hash_count -= VAR_4;
  FUNC_2(&VAR_1);
  FUNC_0(VAR_5, &VAR_0);
  FUNC_3(&VAR_1);
  FUNC_1(&VAR_2);
 }
}
