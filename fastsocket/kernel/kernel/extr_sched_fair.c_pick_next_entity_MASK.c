
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_entity {int dummy; } ;
struct cfs_rq {struct sched_entity* next; struct sched_entity* last; struct sched_entity* skip; } ;


 struct sched_entity* FUNC_0 (struct cfs_rq*) ;
 struct sched_entity* FUNC_1 (struct sched_entity*) ;
 int FUNC_2 (struct cfs_rq*,struct sched_entity*) ;
 int FUNC_3 (struct sched_entity*,struct sched_entity*) ;

__attribute__((used)) static struct sched_entity *FUNC_4(struct cfs_rq *VAR_0)
{
 struct sched_entity *VAR_1 = FUNC_0(VAR_0);
 struct sched_entity *VAR_2 = VAR_1;





 if (VAR_0->skip == VAR_1) {
  struct sched_entity *VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 && FUNC_3(VAR_3, VAR_2) < 1)
   VAR_1 = VAR_3;
 }




 if (VAR_0->last && FUNC_3(VAR_0->last, VAR_2) < 1)
  VAR_1 = VAR_0->last;




 if (VAR_0->next && FUNC_3(VAR_0->next, VAR_2) < 1)
  VAR_1 = VAR_0->next;

 FUNC_2(VAR_0, VAR_1);

 return VAR_1;
}
