
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct sysctl_req {int flags; size_t oldlen; size_t validlen; size_t newlen; scalar_t__ lock; size_t oldidx; void* oldptr; scalar_t__ newidx; int newfunc; int oldfunc; void const* newptr; struct thread* td; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct sysctl_req*,int) ;
 int FUNC_5 (size_t*,size_t*,int) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int ,int*,int ,struct sysctl_req*) ;
 int VAR_10 ;
 int FUNC_11 (void*,size_t) ;

int
FUNC_12(struct thread *VAR_11, int *VAR_12, u_int VAR_13, void *VAR_14,
    size_t *VAR_15, int VAR_16, const void *VAR_17, size_t VAR_18,
    size_t *VAR_19, int VAR_20)
{
 int VAR_21 = 0, VAR_22;
 struct sysctl_req VAR_23;

 FUNC_4(&VAR_23, sizeof VAR_23);

 VAR_23.td = VAR_11;
 VAR_23.flags = VAR_20;

 if (VAR_15) {
  if (VAR_16) {
   VAR_23.oldlen = *VAR_15;
  } else {
   VAR_21 = FUNC_5(VAR_15, &VAR_23.oldlen, sizeof(*VAR_15));
   if (VAR_21)
    return (VAR_21);
  }
 }
 VAR_23.validlen = VAR_23.oldlen;
 VAR_23.oldptr = VAR_14;

 if (VAR_17 != ((void*)0)) {
  VAR_23.newlen = VAR_18;
  VAR_23.newptr = VAR_17;
 }

 VAR_23.oldfunc = VAR_9;
 VAR_23.newfunc = VAR_8;
 VAR_23.lock = VAR_5;





 VAR_22 = 0;
 if (VAR_23.oldptr && VAR_23.oldlen > 4 * VAR_3) {
  VAR_22 = 1;
  FUNC_8(&VAR_10);
 }
 FUNC_1(FUNC_3(VAR_11));

 for (;;) {
  VAR_23.oldidx = 0;
  VAR_23.newidx = 0;
  VAR_21 = FUNC_10(0, VAR_12, VAR_13, &VAR_23);
  if (VAR_21 != VAR_0)
   break;
  FUNC_6(VAR_4);
 }

 FUNC_0();

 if (VAR_23.lock == VAR_6 && VAR_23.validlen > 0)
  FUNC_11(VAR_23.oldptr, VAR_23.validlen);
 if (VAR_22)
  FUNC_9(&VAR_10);

 if (VAR_21 && VAR_21 != VAR_1)
  return (VAR_21);

 if (VAR_19) {
  if (VAR_23.oldptr && VAR_23.oldidx > VAR_23.validlen)
   *VAR_19 = VAR_23.validlen;
  else
   *VAR_19 = VAR_23.oldidx;
 }
 return (VAR_21);
}
