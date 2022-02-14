
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct taskqueue {struct task* tq_hint; int tq_queue; } ;
struct task {scalar_t__ ta_pending; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct task*,struct task*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct taskqueue*,struct task*) ;

__attribute__((used)) static int
FUNC_2(struct taskqueue *VAR_2, struct task *VAR_3,
    u_int *VAR_4)
{

 if (VAR_3->ta_pending > 0) {
  FUNC_0(&VAR_2->tq_queue, VAR_3, VAR_3, VAR_1);
  if (VAR_2->tq_hint == VAR_3)
   VAR_2->tq_hint = ((void*)0);
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_3->ta_pending;
 VAR_3->ta_pending = 0;
 return (FUNC_1(VAR_2, VAR_3) ? VAR_0 : 0);
}
