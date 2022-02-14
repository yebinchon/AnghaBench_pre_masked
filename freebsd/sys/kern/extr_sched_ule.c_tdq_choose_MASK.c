
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_priority; } ;
struct tdq {int tdq_idle; int tdq_ridx; int tdq_timeshare; int tdq_realtime; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct tdq*,int ) ;
 struct thread* FUNC_2 (int *) ;
 struct thread* FUNC_3 (int *,int ) ;

__attribute__((used)) static struct thread *
FUNC_4(struct tdq *VAR_3)
{
 struct thread *VAR_4;

 FUNC_1(VAR_3, VAR_0);
 VAR_4 = FUNC_2(&VAR_3->tdq_realtime);
 if (VAR_4 != ((void*)0))
  return (VAR_4);
 VAR_4 = FUNC_3(&VAR_3->tdq_timeshare, VAR_3->tdq_ridx);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4->td_priority >= VAR_1,
      ("tdq_choose: Invalid priority on timeshare queue %d",
      VAR_4->td_priority));
  return (VAR_4);
 }
 VAR_4 = FUNC_2(&VAR_3->tdq_idle);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4->td_priority >= VAR_2,
      ("tdq_choose: Invalid priority on idle queue %d",
      VAR_4->td_priority));
  return (VAR_4);
 }

 return (((void*)0));
}
