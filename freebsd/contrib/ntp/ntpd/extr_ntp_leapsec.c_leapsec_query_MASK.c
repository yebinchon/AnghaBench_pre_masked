
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ lo; } ;
struct TYPE_18__ {TYPE_1__ D_s; } ;
typedef TYPE_3__ vint64 ;
typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct TYPE_17__ {int dynls; scalar_t__ this_tai; scalar_t__ next_tai; TYPE_3__ dtime; TYPE_3__ stime; TYPE_3__ ttime; TYPE_3__ ebase; } ;
struct TYPE_19__ {TYPE_2__ head; } ;
typedef TYPE_4__ leap_table_t ;
struct TYPE_20__ {int warped; int proximity; int dynamic; scalar_t__ ddist; scalar_t__ tai_diff; TYPE_3__ ttime; TYPE_3__ ebase; scalar_t__ tai_offs; } ;
typedef TYPE_5__ leap_result_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 TYPE_3__ FUNC_4 (scalar_t__,int const*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_3__*) ;

int
FUNC_7(
 leap_result_t * VAR_5 ,
 uint32_t VAR_6 ,
 const time_t * VAR_7)
{
 leap_table_t * VAR_8;
 vint64 VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12;
 int VAR_13;


 VAR_13 = VAR_0;
 VAR_9 = FUNC_4(VAR_6, VAR_7);
 VAR_8 = FUNC_2(VAR_0);
 FUNC_3(VAR_5, 0, sizeof(leap_result_t));

 if (FUNC_6(&VAR_9, &VAR_8->head.ebase) < 0) {




  FUNC_5(VAR_8, &VAR_9);
 } else if (FUNC_6(&VAR_9, &VAR_8->head.dtime) >= 0) {
  VAR_10 = FUNC_0(&VAR_8->head.dtime, 3);
  if (FUNC_6(&VAR_9, &VAR_10) >= 0) {

   FUNC_5(VAR_8, &VAR_9);
  } else {

   VAR_10 = VAR_8->head.ttime;
   VAR_5->warped = (int16_t)(VAR_10.D_s.lo -
            VAR_8->head.dtime.D_s.lo);
   VAR_11 = FUNC_0(&VAR_9, VAR_5->warped);
   FUNC_5(VAR_8, &VAR_11);
   VAR_13 = FUNC_6(&VAR_8->head.ebase, &VAR_10) == 0;
   if (VAR_13) {
    VAR_9 = VAR_11;
    VAR_6 = VAR_11.D_s.lo;
   } else {
    VAR_5->warped = 0;
   }
  }
 }

 VAR_5->tai_offs = VAR_8->head.this_tai;
 VAR_5->ebase = VAR_8->head.ebase;
 VAR_5->ttime = VAR_8->head.ttime;


 if (FUNC_6(&VAR_9, &VAR_8->head.stime) < 0)
  return VAR_13;


 VAR_12 = VAR_8->head.dtime.D_s.lo;

 VAR_5->tai_diff = VAR_8->head.next_tai - VAR_8->head.this_tai;
 VAR_5->ddist = VAR_12 - VAR_6;
 VAR_5->dynamic = VAR_8->head.dynls;
 VAR_5->proximity = VAR_3;


 if (!FUNC_1(VAR_12 - VAR_4, VAR_6, VAR_12))
  return VAR_13;

 VAR_5->proximity = VAR_2;
 if (!FUNC_1(VAR_12 - 10, VAR_6, VAR_12))
  return VAR_13;


 VAR_5->proximity = VAR_1;
 return VAR_13;
}
