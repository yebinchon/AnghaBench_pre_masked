
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {struct aac_softc* si_drv1; } ;
struct aac_softc {scalar_t__ aifq_idx; int rcv_select; int aac_io_lock; struct aac_fib_context* fibctx; } ;
struct aac_fib_context {scalar_t__ ctx_idx; scalar_t__ ctx_wrap; struct aac_fib_context* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct aac_softc *VAR_5;
 struct aac_fib_context *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2->si_drv1;
 VAR_7 = 0;

 FUNC_0(&VAR_5->aac_io_lock);
 if ((VAR_3 & (VAR_1 | VAR_0)) != 0) {
  for (VAR_6 = VAR_5->fibctx; VAR_6; VAR_6 = VAR_6->next) {
   if (VAR_6->ctx_idx != VAR_5->aifq_idx || VAR_6->ctx_wrap) {
    VAR_7 |= VAR_3 & (VAR_0 | VAR_1);
    break;
   }
  }
 }
 FUNC_1(&VAR_5->aac_io_lock);

 if (VAR_7 == 0) {
  if (VAR_3 & (VAR_0 | VAR_1))
   FUNC_2(VAR_4, &VAR_5->rcv_select);
 }

 return (VAR_7);
}
