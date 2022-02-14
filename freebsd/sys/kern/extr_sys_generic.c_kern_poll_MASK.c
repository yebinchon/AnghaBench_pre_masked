
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int time_t ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct thread {scalar_t__* td_retval; int td_flags; int td_pflags; int td_oldsigmask; } ;
struct pollfd {int dummy; } ;
typedef int sigset_t ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int*,int) ;
 int FUNC_1 (struct pollfd*,struct pollfd*,int) ;
 int FUNC_2 (struct pollfd*,int ) ;
 int FUNC_3 (struct thread*,int ,int *,int *,int ) ;
 struct pollfd* FUNC_4 (int,int,int ,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct pollfd*) ;
 int FUNC_6 (struct thread*,struct pollfd*,struct pollfd*,int) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*,struct pollfd*,int) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*) ;
 int FUNC_11 (struct thread*,int,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_12 (struct thread*) ;
 int FUNC_13 (struct thread*) ;
 int FUNC_14 (struct timespec) ;

int
FUNC_15(struct thread *VAR_14, struct pollfd *VAR_15, u_int VAR_16,
    struct timespec *VAR_17, sigset_t *VAR_18)
{
 struct pollfd *VAR_19;
 struct pollfd VAR_20[32];
 sbintime_t VAR_21, VAR_22, VAR_23;
 time_t VAR_24;
 struct timespec VAR_25;
 int VAR_26;

 VAR_22 = 0;
 if (VAR_17 != ((void*)0)) {
  if (VAR_17->tv_sec < 0)
   return (VAR_1);
  if (VAR_17->tv_nsec < 0 || VAR_17->tv_nsec >= 1000000000)
   return (VAR_1);
  if (VAR_17->tv_sec == 0 && VAR_17->tv_nsec == 0)
   VAR_21 = 0;
  else {
   VAR_25 = *VAR_17;
   if (VAR_25.tv_sec > VAR_5 / 2) {
    VAR_24 = VAR_25.tv_sec - VAR_5 / 2;
    VAR_25.tv_sec -= VAR_24;
   } else
    VAR_24 = 0;
   VAR_23 = FUNC_14(VAR_25);
   VAR_22 = VAR_23;
   VAR_22 >>= VAR_12;
   if (FUNC_0(&VAR_21, VAR_23))
    VAR_21 += VAR_13;
   VAR_21 += VAR_23;
  }
 } else
  VAR_21 = -1;
 if (VAR_16 > VAR_11 && VAR_16 > VAR_4)
  return (VAR_1);
 if (VAR_16 > FUNC_5(VAR_20))
  VAR_19 = FUNC_4(VAR_16, sizeof(*VAR_19), VAR_6, VAR_7);
 else
  VAR_19 = VAR_20;
 VAR_26 = FUNC_1(VAR_15, VAR_19, VAR_16 * sizeof(*VAR_19));
 if (VAR_26)
  goto done;

 if (VAR_18 != ((void*)0)) {
  VAR_26 = FUNC_3(VAR_14, VAR_8, VAR_18,
      &VAR_14->td_oldsigmask, 0);
  if (VAR_26)
   goto done;
  VAR_14->td_pflags |= VAR_10;





  FUNC_12(VAR_14);
  VAR_14->td_flags |= VAR_9;
  FUNC_13(VAR_14);
 }

 FUNC_10(VAR_14);

 for (;;) {
  VAR_26 = FUNC_8(VAR_14, VAR_19, VAR_16);
  if (VAR_26 || VAR_14->td_retval[0] != 0)
   break;
  VAR_26 = FUNC_11(VAR_14, VAR_21, VAR_22);
  if (VAR_26)
   break;
  VAR_26 = FUNC_7(VAR_14);
  if (VAR_26 || VAR_14->td_retval[0] != 0)
   break;
 }
 FUNC_9(VAR_14);

done:

 if (VAR_26 == VAR_2)
  VAR_26 = VAR_0;
 if (VAR_26 == VAR_3)
  VAR_26 = 0;
 if (VAR_26 == 0) {
  VAR_26 = FUNC_6(VAR_14, VAR_19, VAR_15, VAR_16);
  if (VAR_26)
   goto out;
 }
out:
 if (VAR_16 > FUNC_5(VAR_20))
  FUNC_2(VAR_19, VAR_6);
 return (VAR_26);
}
