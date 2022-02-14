
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct aac_softc {int aac_aifq_lock; struct aac_fib_context* fibctx; } ;
struct aac_fib_context {scalar_t__ unique; TYPE_1__* prev; struct aac_fib_context* next; } ;
typedef int caddr_t ;
struct TYPE_2__ {struct aac_fib_context* next; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_fib_context*,int ) ;
 int FUNC_1 (struct aac_softc*,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct aac_softc *VAR_2, caddr_t VAR_3)
{
 struct aac_fib_context *VAR_4;

 FUNC_1(VAR_2, VAR_0, "");

 FUNC_2(&VAR_2->aac_aifq_lock);
 for (VAR_4 = VAR_2->fibctx; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->unique == *(uint32_t *)&VAR_3) {
   if (VAR_4 == VAR_2->fibctx)
    VAR_2->fibctx = ((void*)0);
   else {
    VAR_4->prev->next = VAR_4->next;
    if (VAR_4->next)
     VAR_4->next->prev = VAR_4->prev;
   }
   break;
  }
 }
 FUNC_3(&VAR_2->aac_aifq_lock);
 if (VAR_4)
  FUNC_0(VAR_4, VAR_1);

 return 0;
}
