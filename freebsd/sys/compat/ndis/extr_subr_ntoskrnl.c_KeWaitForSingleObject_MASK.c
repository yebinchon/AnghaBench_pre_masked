
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int we_cv; struct thread* we_td; } ;
typedef TYPE_1__ wb_ext ;
struct TYPE_7__ {int wb_waitlist; int wb_oldpri; int wb_awakened; scalar_t__ wb_waitkey; struct TYPE_7__* wb_next; int wb_waittype; TYPE_1__* wb_ext; TYPE_3__* wb_object; } ;
typedef TYPE_2__ wait_block ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct thread {int td_priority; } ;
struct TYPE_8__ {scalar_t__ dh_sigstate; scalar_t__ dh_type; int dh_waitlisthead; } ;
typedef TYPE_3__ nt_dispatch_header ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int) ;
 struct thread* VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (TYPE_3__*,struct thread*) ;
 int FUNC_10 (TYPE_3__*,struct thread*) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct timeval*) ;

uint32_t
FUNC_14(void *VAR_11, uint32_t VAR_12, uint32_t VAR_13,
    uint8_t VAR_14, int64_t *VAR_15)
{
 wait_block VAR_16;
 struct thread *VAR_17 = VAR_9;
 struct timeval VAR_18;
 int VAR_19 = 0;
 uint64_t VAR_20;
 wb_ext VAR_21;
 nt_dispatch_header *VAR_22;

 VAR_22 = VAR_11;

 if (VAR_22 == ((void*)0))
  return (VAR_4);

 FUNC_7(&VAR_10);

 FUNC_4(&VAR_21.we_cv, "KeWFS");
 VAR_21.we_td = VAR_17;





 if (FUNC_9(VAR_22, VAR_17) == VAR_7) {

  if (VAR_22->dh_sigstate != VAR_3) {
   FUNC_10(VAR_22, VAR_9);
   FUNC_8(&VAR_10);
   return (VAR_5);
  } else {





   if (VAR_22->dh_type == VAR_0) {
    FUNC_8(&VAR_10);
    FUNC_12("mutant limit exceeded");
   }
  }
 }

 FUNC_2((char *)&VAR_16, sizeof(wait_block));
 VAR_16.wb_object = VAR_22;
 VAR_16.wb_ext = &VAR_21;
 VAR_16.wb_waittype = VAR_8;
 VAR_16.wb_next = &VAR_16;
 VAR_16.wb_waitkey = 0;
 VAR_16.wb_awakened = VAR_2;
 VAR_16.wb_oldpri = VAR_17->td_priority;

 FUNC_0((&VAR_22->dh_waitlisthead), (&VAR_16.wb_waitlist));
 if (VAR_15 != ((void*)0)) {
  if (*VAR_15 < 0) {
   VAR_18.tv_sec = - (*VAR_15) / 10000000;
   VAR_18.tv_usec = (- (*VAR_15) / 10) -
       (VAR_18.tv_sec * 1000000);
  } else {
   FUNC_11(&VAR_20);
   if (*VAR_15 < VAR_20)
    VAR_18.tv_sec = VAR_18.tv_usec = 0;
   else {
    VAR_18.tv_sec = ((*VAR_15) - VAR_20) / 10000000;
    VAR_18.tv_usec = ((*VAR_15) - VAR_20) / 10 -
        (VAR_18.tv_sec * 1000000);
   }
  }
 }

 if (VAR_15 == ((void*)0))
  FUNC_6(&VAR_21.we_cv, &VAR_10);
 else
  VAR_19 = FUNC_5(&VAR_21.we_cv,
      &VAR_10, FUNC_13(&VAR_18));

 FUNC_1(&VAR_16.wb_waitlist);

 FUNC_3(&VAR_21.we_cv);



 if (VAR_19 == VAR_1) {
  FUNC_8(&VAR_10);
  return (VAR_6);
 }

 FUNC_8(&VAR_10);

 return (VAR_5);




}
