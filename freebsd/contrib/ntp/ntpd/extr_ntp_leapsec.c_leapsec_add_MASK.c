
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


struct TYPE_14__ {scalar_t__ lo; } ;
struct TYPE_17__ {TYPE_1__ D_s; } ;
typedef TYPE_4__ vint64 ;
struct calendar {int monthday; scalar_t__ hour; int month; scalar_t__ second; scalar_t__ minute; } ;
struct TYPE_16__ {scalar_t__ base_tai; scalar_t__ size; int expire; } ;
struct TYPE_18__ {TYPE_3__ head; TYPE_2__* info; } ;
typedef TYPE_5__ leap_table_t ;
struct TYPE_19__ {int dynls; scalar_t__ taiof; scalar_t__ stime; TYPE_4__ ttime; } ;
typedef TYPE_6__ leap_info_t ;
struct TYPE_15__ {scalar_t__ taiof; int ttime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;
 int VAR_3 ;
 TYPE_4__ FUNC_1 (struct calendar*) ;
 int FUNC_2 (struct calendar*,TYPE_4__ const*) ;
 scalar_t__ FUNC_3 (TYPE_4__ const*,int *) ;

__attribute__((used)) static int
FUNC_4(
 leap_table_t* VAR_4 ,
 const vint64 * VAR_5 ,
 int VAR_6)
{
 vint64 VAR_7, VAR_8;
 struct calendar VAR_9;
 leap_info_t VAR_10;





 if ( FUNC_3(VAR_5, &VAR_4->head.expire) < 0
     || (VAR_4->head.size && FUNC_3(VAR_5, &VAR_4->info[0].ttime) <= 0)) {
  VAR_3 = VAR_1;
  return VAR_2;
 }

 FUNC_2(&VAR_9, VAR_5);



 if (VAR_9.monthday == 1 && VAR_9.hour == 0) {
  VAR_3 = VAR_0;
  return VAR_2;
 }


 VAR_9.monthday = 1;
 VAR_9.hour = 0;
 VAR_9.minute = 0;
 VAR_9.second = 0;
 VAR_8 = FUNC_1(&VAR_9);
 VAR_9.month++;
 VAR_7 = FUNC_1(&VAR_9);

 VAR_10.ttime = VAR_7;
 VAR_10.stime = VAR_7.D_s.lo - VAR_8.D_s.lo;
 VAR_10.taiof = (VAR_4->head.size ? VAR_4->info[0].taiof : VAR_4->head.base_tai)
          + (VAR_6 ? 1 : -1);
 VAR_10.dynls = 1;
 return FUNC_0(VAR_4, &VAR_10);
}
