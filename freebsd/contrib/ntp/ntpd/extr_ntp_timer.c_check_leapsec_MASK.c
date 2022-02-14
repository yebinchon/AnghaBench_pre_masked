
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int32 ;
typedef scalar_t__ u_int ;
typedef int time_t ;
typedef int lsdata ;
struct TYPE_7__ {int Q_s; } ;
struct TYPE_8__ {double tai_diff; double warped; scalar_t__ tai_offs; scalar_t__ proximity; scalar_t__ dynamic; TYPE_1__ ttime; int ddist; } ;
typedef TYPE_2__ leap_result_t ;
struct TYPE_9__ {int enabled; int in_progress; double doffset; int interval; int intv_end; int intv_start; int offset; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (double,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 double VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*) ;
 double VAR_11 ;
 double VAR_12 ;
 double FUNC_3 (double) ;
 int FUNC_4 () ;
 scalar_t__ VAR_13 ;
 TYPE_5__ VAR_14 ;
 scalar_t__ VAR_15 ;
 double VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int const*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ VAR_18 ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (double) ;
 int * VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void
FUNC_12(
 u_int32 VAR_21 ,
 const time_t * VAR_22 ,
        int VAR_23)
{
 static const char VAR_24[] =
     "Positive leap second, stepped backward.";
 static const char VAR_25[] =
     "Positive leap second, no step correction. "
     "System clock will be inaccurate for a long time.";

 static const char VAR_26[] =
     "Negative leap second, stepped forward.";
 static const char VAR_27[] =
     "Negative leap second, no step correction. "
     "System clock will be inaccurate for a long time.";

 leap_result_t VAR_28;
 u_int32 VAR_29;
 FUNC_5(0);





 if (VAR_23) {
  VAR_29 = VAR_6;
  FUNC_7();
  FUNC_8(&VAR_28, 0, sizeof(VAR_28));
 } else {
   int VAR_30;

   VAR_30 = FUNC_6(&VAR_28, VAR_21, VAR_22);

   FUNC_0(3, ("*** leapsec_query: fired %i, now %u (0x%08X), tai_diff %i, ddist %u\n",
    VAR_30, VAR_21, VAR_21, VAR_28.tai_diff, VAR_28.ddist));
   if (VAR_30) {



  const char *VAR_31 = ((void*)0);
  double VAR_32 = VAR_28.warped;
  if (VAR_32 < 0.0) {
   if (VAR_11 > 0.0 &&
       VAR_11 < -VAR_32) {
    FUNC_11(VAR_32);
    VAR_31 = VAR_24;
   } else {
    VAR_31 = VAR_25;
   }
  } else if (VAR_32 > 0.0) {
   if (VAR_12 > 0.0 &&
       VAR_12 < VAR_32) {
    FUNC_11(VAR_32);
    VAR_31 = VAR_26;
   } else {
    VAR_31 = VAR_27;
   }
  }
  if (VAR_31)
   FUNC_9(VAR_4, "%s", VAR_31);
  FUNC_10(VAR_2, ((void*)0), ((void*)0));



  VAR_29 = VAR_6;
  VAR_17 = VAR_6;
  VAR_20 = VAR_28.tai_offs;
   } else {



    VAR_29 = VAR_28.proximity;
    VAR_20 = VAR_28.tai_offs;
   }
 }
 if ( (VAR_17 > 0 || VAR_29 < VAR_5)
     && VAR_17 < VAR_29 ) {
  if ( VAR_17 < VAR_7
                   && VAR_29 >= VAR_7) {
   if (VAR_28.dynamic)
    FUNC_10(VAR_9, VAR_19, ((void*)0));
   else
    FUNC_10(VAR_0, ((void*)0), ((void*)0));
  }
  VAR_17 = VAR_29;
 }
 if (VAR_17 > VAR_29) {
  if ( VAR_17 >= VAR_7
                   && VAR_29 < VAR_7) {
   FUNC_10(VAR_1, ((void*)0), ((void*)0));
  }
  VAR_17 = VAR_29;
 }

 if (VAR_17 >= VAR_7)
  VAR_16 = VAR_28.tai_diff;
 else
  VAR_16 = 0;

 FUNC_2(&VAR_28);





}
