
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct thread {int dummy; } ;
struct sysctl_req {int flags; size_t oldlen; size_t validlen; size_t newlen; scalar_t__ lock; size_t oldidx; void* oldptr; int newfunc; int oldfunc; void* newptr; struct thread* td; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sysctl_req*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int*,int ,struct sysctl_req*) ;
 int FUNC_2 (void*,size_t) ;

int
FUNC_3(struct thread *VAR_5, int *VAR_6, u_int VAR_7, void *VAR_8,
    size_t *VAR_9, void *VAR_10, size_t VAR_11, size_t *VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 struct sysctl_req VAR_15;

 FUNC_0(&VAR_15, sizeof VAR_15);

 VAR_15.td = VAR_5;
 VAR_15.flags = VAR_13;

 if (VAR_9) {
  VAR_15.oldlen = *VAR_9;
 }
 VAR_15.validlen = VAR_15.oldlen;

 if (VAR_8) {
  VAR_15.oldptr= VAR_8;
 }

 if (VAR_10 != ((void*)0)) {
  VAR_15.newlen = VAR_11;
  VAR_15.newptr = VAR_10;
 }

 VAR_15.oldfunc = VAR_4;
 VAR_15.newfunc = VAR_3;
 VAR_15.lock = VAR_1;

 VAR_14 = FUNC_1(0, VAR_6, VAR_7, &VAR_15);

 if (VAR_15.lock == VAR_2 && VAR_15.validlen > 0)
  FUNC_2(VAR_15.oldptr, VAR_15.validlen);

 if (VAR_14 && VAR_14 != VAR_0)
  return (VAR_14);

 if (VAR_12) {
  if (VAR_15.oldptr && VAR_15.oldidx > VAR_15.validlen)
   *VAR_12 = VAR_15.validlen;
  else
   *VAR_12 = VAR_15.oldidx;
 }
 return (VAR_14);
}
