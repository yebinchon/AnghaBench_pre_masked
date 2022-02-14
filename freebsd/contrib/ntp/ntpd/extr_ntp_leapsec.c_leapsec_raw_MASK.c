
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ lo; } ;
struct TYPE_17__ {TYPE_3__ D_s; } ;
typedef TYPE_4__ vint64 ;
struct calendar {int monthday; int month; scalar_t__ second; scalar_t__ minute; scalar_t__ hour; } ;
struct TYPE_14__ {scalar_t__ size; } ;
struct TYPE_18__ {TYPE_2__* info; TYPE_1__ head; } ;
typedef TYPE_5__ leap_table_t ;
struct TYPE_19__ {int dynls; scalar_t__ taiof; scalar_t__ stime; TYPE_4__ ttime; } ;
typedef TYPE_6__ leap_info_t ;
typedef scalar_t__ int16_t ;
struct TYPE_15__ {int taiof; int ttime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;
 int VAR_4 ;
 TYPE_4__ FUNC_1 (struct calendar*) ;
 int FUNC_2 (struct calendar*,TYPE_4__ const*) ;
 int FUNC_3 (TYPE_4__ const*,int *) ;

int
FUNC_4(
 leap_table_t * VAR_5,
 const vint64 * VAR_6,
 int VAR_7,
 int VAR_8)
{
 vint64 VAR_9;
 struct calendar VAR_10;
 leap_info_t VAR_11;







 if (VAR_5->head.size) {
  int VAR_12 = FUNC_3(VAR_6, &VAR_5->info[0].ttime);
  if (VAR_12 == 0)
   VAR_12 -= (VAR_7 != VAR_5->info[0].taiof);
  if (VAR_12 < 0) {
   VAR_4 = VAR_1;
   return VAR_2;
  }
  if (VAR_12 == 0)
   return VAR_3;
 }

 FUNC_2(&VAR_10, VAR_6);

 if (VAR_10.monthday != 1 || VAR_10.hour || VAR_10.minute || VAR_10.second) {
  VAR_4 = VAR_0;
  return VAR_2;
 }
 VAR_10.month--;
 VAR_9 = FUNC_1(&VAR_10);
 VAR_11.ttime = *VAR_6;
 VAR_11.stime = VAR_6->D_s.lo - VAR_9.D_s.lo;
 VAR_11.taiof = (int16_t)VAR_7;
 VAR_11.dynls = (VAR_8 != 0);
 return FUNC_0(VAR_5, &VAR_11);
}
