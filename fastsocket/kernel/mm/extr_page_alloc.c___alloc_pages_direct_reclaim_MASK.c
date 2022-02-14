
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int dummy; } ;
struct zone {int dummy; } ;
struct task_struct {int flags; struct reclaim_state* reclaim_state; } ;
struct reclaim_state {scalar_t__ reclaimed_slab; } ;
struct page {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct task_struct* VAR_1 ;
 int FUNC_2 () ;
 struct page* FUNC_3 (int ,int *,unsigned int,struct zonelist*,int,int,struct zone*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (struct zonelist*,unsigned int,int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline struct page *
FUNC_8(gfp_t VAR_2, unsigned int VAR_3,
 struct zonelist *VAR_4, enum zone_type VAR_5,
 nodemask_t *VAR_6, int VAR_7, struct zone *VAR_8,
 int VAR_9, unsigned long *VAR_10)
{
 struct page *VAR_11 = ((void*)0);
 struct reclaim_state VAR_12;
 struct task_struct *VAR_13 = VAR_1;
 bool VAR_14 = 0;

 FUNC_0();


 FUNC_1();
 VAR_13->flags |= VAR_0;
 FUNC_5(VAR_2);
 VAR_12.reclaimed_slab = 0;
 VAR_13->reclaim_state = &VAR_12;

 *VAR_10 = FUNC_6(VAR_4, VAR_3, VAR_2, VAR_6);

 VAR_13->reclaim_state = ((void*)0);
 FUNC_4();
 VAR_13->flags &= ~VAR_0;

 FUNC_0();

 if (VAR_3 != 0)
  FUNC_2();

 if (FUNC_7(!(*VAR_10)))
  return ((void*)0);

retry:
 VAR_11 = FUNC_3(VAR_2, VAR_6, VAR_3,
     VAR_4, VAR_5,
     VAR_7, VAR_8,
     VAR_9);





 if (!VAR_11 && !VAR_14) {
  FUNC_2();
  VAR_14 = 1;
  goto retry;
 }

 return VAR_11;
}
