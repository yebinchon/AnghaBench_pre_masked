
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int we_cv; struct thread* we_td; } ;
typedef TYPE_1__ wb_ext ;
struct TYPE_9__ {int wb_waittype; int wb_waitkey; scalar_t__ wb_awakened; int wb_waitlist; TYPE_3__* wb_object; struct TYPE_9__* wb_next; int wb_oldpri; TYPE_1__* wb_ext; } ;
typedef TYPE_2__ wait_block ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct thread {int td_priority; } ;
struct TYPE_10__ {scalar_t__ dh_sigstate; scalar_t__ dh_type; int dh_waitlisthead; } ;
typedef TYPE_3__ nt_dispatch_header ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int) ;
 struct thread* VAR_12 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct timespec*) ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (TYPE_3__*,struct thread*) ;
 int FUNC_11 (TYPE_3__*,struct thread*) ;
 int FUNC_12 (scalar_t__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct timeval*) ;

__attribute__((used)) static uint32_t
FUNC_15(uint32_t VAR_14, nt_dispatch_header *VAR_15[], uint32_t VAR_16,
 uint32_t VAR_17, uint32_t VAR_18, uint8_t VAR_19, int64_t *VAR_20,
 wait_block *VAR_21)
{
 struct thread *VAR_22 = VAR_12;
 wait_block *VAR_23, *VAR_24;
 wait_block VAR_25[VAR_3];
 nt_dispatch_header *VAR_26;
 struct timeval VAR_27;
 int VAR_28, VAR_29 = 0, VAR_30 = 0;
 uint64_t VAR_31;
 struct timespec VAR_32, VAR_33;
 uint32_t VAR_34 = VAR_5;
 wb_ext VAR_35;

 if (VAR_14 > VAR_3)
  return (VAR_4);
 if (VAR_14 > VAR_8 && VAR_21 == ((void*)0))
  return (VAR_4);

 FUNC_7(&VAR_13);

 FUNC_4(&VAR_35.we_cv, "KeWFM");
 VAR_35.we_td = VAR_22;

 if (VAR_21 == ((void*)0))
  VAR_23 = VAR_25;
 else
  VAR_23 = VAR_21;

 FUNC_2((char *)VAR_23, sizeof(wait_block) * VAR_14);



 VAR_29 = 0;
 VAR_24 = VAR_23;

 for (VAR_28 = 0; VAR_28 < VAR_14; VAR_28++) {
  FUNC_0((&VAR_15[VAR_28]->dh_waitlisthead),
      (&VAR_24->wb_waitlist));
  VAR_24->wb_ext = &VAR_35;
  VAR_24->wb_object = VAR_15[VAR_28];
  VAR_24->wb_waittype = VAR_16;
  VAR_24->wb_waitkey = VAR_28;
  VAR_24->wb_awakened = VAR_1;
  VAR_24->wb_oldpri = VAR_22->td_priority;
  VAR_24->wb_next = VAR_24 + 1;
  VAR_24++;
  VAR_29++;
  if (FUNC_10(VAR_15[VAR_28], VAR_22)) {






   if (VAR_15[VAR_28]->dh_sigstate == VAR_2 &&
       VAR_15[VAR_28]->dh_type == VAR_0) {
    FUNC_8(&VAR_13);
    FUNC_13("mutant limit exceeded");
   }







   if (VAR_16 == VAR_11) {
    FUNC_11(VAR_15[VAR_28], VAR_22);
    VAR_34 = VAR_7 + VAR_28;
    goto wait_done;
   } else {
    VAR_24--;
    VAR_29--;
    VAR_24->wb_object = ((void*)0);
    FUNC_1(&VAR_24->wb_waitlist);
   }
  }
 }






 if (VAR_16 == VAR_10 && VAR_29 == 0) {
  for (VAR_28 = 0; VAR_28 < VAR_14; VAR_28++)
   FUNC_11(VAR_15[VAR_28], VAR_22);
  VAR_34 = VAR_5;
  goto wait_done;
 }






 (VAR_24 - 1)->wb_next = VAR_23;





 if (VAR_20 != ((void*)0)) {
  if (*VAR_20 < 0) {
   VAR_27.tv_sec = - (*VAR_20) / 10000000;
   VAR_27.tv_usec = (- (*VAR_20) / 10) -
       (VAR_27.tv_sec * 1000000);
  } else {
   FUNC_12(&VAR_31);
   if (*VAR_20 < VAR_31)
    VAR_27.tv_sec = VAR_27.tv_usec = 0;
   else {
    VAR_27.tv_sec = ((*VAR_20) - VAR_31) / 10000000;
    VAR_27.tv_usec = ((*VAR_20) - VAR_31) / 10 -
        (VAR_27.tv_sec * 1000000);
   }
  }
 }

 while (VAR_29) {
  FUNC_9(&VAR_32);

  if (VAR_20 == ((void*)0))
   FUNC_6(&VAR_35.we_cv, &VAR_13);
  else
   VAR_30 = FUNC_5(&VAR_35.we_cv,
       &VAR_13, FUNC_14(&VAR_27));



  if (VAR_30) {
   VAR_34 = VAR_6;
   goto wait_done;
  }

  FUNC_9(&VAR_33);



  VAR_24 = VAR_23;
  do {
   VAR_26 = VAR_24->wb_object;
   if (FUNC_10(VAR_26, VAR_22) == VAR_9 ||
       VAR_24->wb_awakened == VAR_9) {

    if (VAR_26->dh_sigstate == VAR_2 &&
        VAR_26->dh_type == VAR_0) {
     FUNC_8(&VAR_13);
     FUNC_13("mutant limit exceeded");
    }
    VAR_29--;
    if (VAR_16 == VAR_11) {
     VAR_34 = VAR_24->wb_waitkey &
         VAR_7;
     goto wait_done;
    }
   }
   VAR_24 = VAR_24->wb_next;
  } while (VAR_24 != VAR_23);







  if (VAR_29 == 0) {
   VAR_34 = VAR_5;
   goto wait_done;
  }
  if (VAR_20 != ((void*)0)) {
   VAR_27.tv_sec -= (VAR_33 - VAR_32);
   VAR_27.tv_usec -= (VAR_33 - VAR_32) / 1000;
  }
 }


wait_done:

 FUNC_3(&VAR_35.we_cv);

 for (VAR_28 = 0; VAR_28 < VAR_14; VAR_28++) {
  if (VAR_23[VAR_28].wb_object != ((void*)0))
   FUNC_1(&VAR_23[VAR_28].wb_waitlist);

 }
 FUNC_8(&VAR_13);

 return (VAR_34);
}
