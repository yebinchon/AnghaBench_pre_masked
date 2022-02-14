
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_refill_cache {int xfer; int percpu; } ;
struct rds_ib_cache_head {scalar_t__ count; struct list_head* first; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 scalar_t__ VAR_0 ;
 struct list_head* FUNC_1 (int *,int *,struct list_head*) ;
 int FUNC_2 (struct list_head*,struct list_head*) ;
 int FUNC_3 (struct list_head*,struct list_head*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct rds_ib_cache_head* FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 struct list_head* FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9(struct list_head *VAR_1,
     struct rds_ib_refill_cache *VAR_2)
{
 unsigned long VAR_3;
 struct rds_ib_cache_head *VAR_4;
 struct list_head *VAR_5;

 FUNC_5(VAR_3);

 VAR_4 = FUNC_6(VAR_2->percpu, FUNC_7());
 if (!VAR_4->first)
  FUNC_0(VAR_1);
 else
  FUNC_2(VAR_1, VAR_4->first);
 VAR_4->first = VAR_1;
 VAR_4->count++;

 if (VAR_4->count < VAR_0)
  goto end;







 do {
  VAR_5 = FUNC_8(&VAR_2->xfer, ((void*)0));
  if (VAR_5)
   FUNC_3(VAR_5, VAR_4->first);
  VAR_5 = FUNC_1(&VAR_2->xfer, ((void*)0), VAR_4->first);
 } while (VAR_5);

 VAR_4->first = ((void*)0);
 VAR_4->count = 0;
end:
 FUNC_4(VAR_3);
}
