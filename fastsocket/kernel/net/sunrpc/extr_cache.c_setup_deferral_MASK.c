
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int dummy; } ;
struct cache_deferred_req {int recent; struct cache_head* item; } ;


 int FUNC_0 (struct cache_deferred_req*,struct cache_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cache_deferred_req *VAR_3,
      struct cache_head *VAR_4,
      int VAR_5)
{

 VAR_3->item = VAR_4;

 FUNC_2(&VAR_2);

 FUNC_0(VAR_3, VAR_4);

 if (VAR_5) {
  VAR_0++;
  FUNC_1(&VAR_3->recent, &VAR_1);
 }

 FUNC_3(&VAR_2);

}
