
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct thread {scalar_t__ td_rtcgen; } ;
typedef scalar_t__ sbintime_t ;
typedef int clockid_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t VAR_10 ;
 int FUNC_3 (struct thread*,int,struct timespec*) ;
 int * VAR_11 ;
 int VAR_12 ;
 struct timespec FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (struct timespec*) ;
 int FUNC_6 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_7 (int *,int,char*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (struct timespec) ;

int
FUNC_9(struct thread *VAR_15, clockid_t VAR_16, int VAR_17,
    const struct timespec *VAR_18, struct timespec *VAR_19)
{
 struct timespec VAR_20, VAR_21;
 sbintime_t VAR_22, VAR_23, VAR_24, VAR_25;
 time_t VAR_26;
 int VAR_27;
 bool VAR_28;

 if (VAR_18->tv_nsec < 0 || VAR_18->tv_nsec >= 1000000000)
  return (VAR_2);
 if ((VAR_17 & ~VAR_9) != 0)
  return (VAR_2);
 switch (VAR_16) {
 case 136:
 case 134:
 case 135:
 case 133:
  VAR_28 = (VAR_17 & VAR_9) != 0;
  break;
 case 141:
 case 139:
 case 140:
 case 131:
 case 129:
 case 130:
  VAR_28 = 0;
  break;
 case 128:
 case 137:
 case 138:
  return (VAR_3);
 case 132:
 default:
  return (VAR_2);
 }
 do {
  VAR_20 = *VAR_18;
  if ((VAR_17 & VAR_9) != 0) {
   if (VAR_28)
    VAR_15->td_rtcgen =
        FUNC_2(&VAR_12);
   VAR_27 = FUNC_3(VAR_15, VAR_16, &VAR_21);
   FUNC_0(VAR_27 == 0, ("kern_clock_gettime: %d", VAR_27));
   FUNC_6(&VAR_20, &VAR_21, &VAR_20);
  }
  if (VAR_20.tv_sec < 0 || (VAR_20.tv_sec == 0 && VAR_20.tv_nsec == 0)) {
   VAR_27 = VAR_5;
   break;
  }
  if (VAR_20.tv_sec > VAR_6 / 2) {
   VAR_26 = VAR_20.tv_sec - VAR_6 / 2;
   VAR_20.tv_sec -= VAR_26;
  } else
   VAR_26 = 0;
  VAR_25 = FUNC_8(VAR_20);
  VAR_24 = VAR_25;
  VAR_24 >>= VAR_13;
  if (FUNC_1(&VAR_22, VAR_25))
   VAR_22 += VAR_14;
  VAR_22 += VAR_25;
  VAR_27 = FUNC_7(&VAR_11[VAR_10], VAR_8 | VAR_7, "nanslp",
      VAR_22, VAR_24, VAR_0);
 } while (VAR_27 == 0 && VAR_28 && VAR_15->td_rtcgen == 0);
 VAR_15->td_rtcgen = 0;
 if (VAR_27 != VAR_5) {
  if (FUNC_1(&VAR_23, VAR_25))
   VAR_23 += VAR_14;
  if (VAR_23 >= VAR_22)
   return (0);
  if (VAR_27 == VAR_4)
   VAR_27 = VAR_1;
  if ((VAR_17 & VAR_9) == 0 && VAR_19 != ((void*)0)) {
   VAR_20 = FUNC_4(VAR_22 - VAR_23);
   VAR_20.tv_sec += VAR_26;
   if (VAR_20.tv_sec < 0)
    FUNC_5(&VAR_20);
   *VAR_19 = VAR_20;
  }
  return (VAR_27);
 }
 return (0);
}
