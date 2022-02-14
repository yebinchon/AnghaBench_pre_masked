
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aac_softc {int aac_aifq_lock; struct aac_fib_context* fibctx; } ;
struct aac_fib_context {int unique; struct aac_fib_context* next; struct aac_fib_context* prev; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aac_softc*,scalar_t__) ;
 int FUNC_1 (int*,void*,int) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;
 struct aac_fib_context* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct aac_softc *VAR_5, caddr_t VAR_6)
{
 struct aac_fib_context *VAR_7, *VAR_8;
 int VAR_9 = 0;

 FUNC_2(VAR_5, VAR_1, "");

 VAR_7 = FUNC_3(sizeof(struct aac_fib_context), VAR_2, VAR_3|VAR_4);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 FUNC_4(&VAR_5->aac_aifq_lock);

 if (VAR_5->fibctx == ((void*)0))
  VAR_5->fibctx = VAR_7;
 else {
  for (VAR_8 = VAR_5->fibctx; VAR_8->next; VAR_8 = VAR_8->next)
   ;
  VAR_8->next = VAR_7;
  VAR_7->prev = VAR_8;
 }


 VAR_7->unique = (*(u_int32_t *)&VAR_7 & 0xffffffff);
 VAR_8 = VAR_5->fibctx;
 while (VAR_8 != VAR_7) {
  if (VAR_8->unique == VAR_7->unique) {
   VAR_7->unique++;
   VAR_8 = VAR_5->fibctx;
  } else {
   VAR_8 = VAR_8->next;
  }
 }
 FUNC_5(&VAR_5->aac_aifq_lock);

 VAR_9 = FUNC_1(&VAR_7->unique, (void *)VAR_6, sizeof(u_int32_t));
 if (VAR_9)
  FUNC_0(VAR_5, (caddr_t)VAR_8);
 return VAR_9;
}
