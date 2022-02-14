
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_usec; int tv_sec; } ;
struct timex {int modes; int tick; long offset; int status; int precision; int tolerance; TYPE_1__ time; scalar_t__ stbcnt; scalar_t__ errcnt; scalar_t__ calcnt; scalar_t__ jitcnt; scalar_t__ stabil; scalar_t__ shift; scalar_t__ jitter; scalar_t__ ppsfreq; int tai; int constant; int esterror; int maxerror; void* freq; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


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
 unsigned long VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct timespec*) ;
 int FUNC_2 () ;
 int VAR_22 ;
 int FUNC_3 () ;
 int FUNC_4 (struct timex*,struct timespec*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_23 ;
 long VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (struct timespec*) ;

int FUNC_9(struct timex *VAR_33)
{
 struct timespec VAR_34;
 int VAR_35;


 if (VAR_33->modes & VAR_0) {

  if (!(VAR_33->modes & VAR_3))
   return -VAR_7;
  if (!(VAR_33->modes & VAR_2) &&
      !FUNC_0(VAR_6))
   return -VAR_8;
 } else {

   if (VAR_33->modes && !FUNC_0(VAR_6))
   return -VAR_8;





  if (VAR_33->modes & VAR_5 &&
      (VAR_33->tick < 900000/VAR_21 ||
       VAR_33->tick > 1100000/VAR_21))
   return -VAR_7;
 }

 if (VAR_33->modes & VAR_4) {
  struct timespec VAR_36;
  if ((unsigned long)VAR_33->time.tv_usec >= VAR_10)
   return -VAR_7;
  VAR_36.tv_sec = VAR_33->time.tv_sec;
  VAR_36.tv_nsec = VAR_33->time.tv_usec;
  if (!FUNC_0(VAR_6))
   return -VAR_8;
  if (!(VAR_33->modes & VAR_1))
   VAR_36.tv_nsec *= 1000;
  FUNC_8(&VAR_36);
 }

 FUNC_1(&VAR_34);

 FUNC_6(&VAR_22);

 if (VAR_33->modes & VAR_0) {
  long VAR_37 = VAR_24;

  if (!(VAR_33->modes & VAR_2)) {

   VAR_24 = VAR_33->offset;
   FUNC_3();
  }
  VAR_33->offset = VAR_37;
 } else {


  if (VAR_33->modes)
   FUNC_4(VAR_33, &VAR_34);

  VAR_33->offset = FUNC_5(VAR_29 * VAR_12,
      VAR_13);
  if (!(VAR_31 & VAR_18))
   VAR_33->offset /= VAR_11;
 }

 VAR_35 = VAR_30;
 if (VAR_31 & (VAR_19|VAR_17))
  VAR_35 = VAR_20;

 VAR_33->freq = FUNC_5((VAR_27 >> VAR_16) *
      VAR_15, VAR_13);
 VAR_33->maxerror = VAR_28;
 VAR_33->esterror = VAR_26;
 VAR_33->status = VAR_31;
 VAR_33->constant = VAR_25;
 VAR_33->precision = 1;
 VAR_33->tolerance = VAR_9 / VAR_14;
 VAR_33->tick = VAR_23;
 VAR_33->tai = VAR_32;


 VAR_33->ppsfreq = 0;
 VAR_33->jitter = 0;
 VAR_33->shift = 0;
 VAR_33->stabil = 0;
 VAR_33->jitcnt = 0;
 VAR_33->calcnt = 0;
 VAR_33->errcnt = 0;
 VAR_33->stbcnt = 0;

 FUNC_7(&VAR_22);

 VAR_33->time.tv_sec = VAR_34.tv_sec;
 VAR_33->time.tv_usec = VAR_34.tv_nsec;
 if (!(VAR_31 & VAR_18))
  VAR_33->time.tv_usec /= VAR_11;

 FUNC_2();

 return VAR_35;
}
