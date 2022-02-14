
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct alerted_record {int timed_out; int alerted_at; TYPE_1__* cond; TYPE_2__ delay; } ;
struct TYPE_3__ {int lock; int cond; } ;
typedef int THREAD_FN ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static THREAD_FN
FUNC_6(void *VAR_0)
{
 struct alerted_record *VAR_1 = VAR_0;
 int VAR_2;

 FUNC_0(VAR_1->cond->lock, 0);
 if (VAR_1->delay.tv_sec || VAR_1->delay.tv_usec) {
  VAR_2 = FUNC_3(VAR_1->cond->cond, VAR_1->cond->lock,
      &VAR_1->delay);
 } else {
  VAR_2 = FUNC_2(VAR_1->cond->cond, VAR_1->cond->lock);
 }
 FUNC_1(VAR_1->cond->lock, 0);

 FUNC_5(&VAR_1->alerted_at, ((void*)0));
 if (VAR_2 == 1)
  VAR_1->timed_out = 1;

 FUNC_4();
}
