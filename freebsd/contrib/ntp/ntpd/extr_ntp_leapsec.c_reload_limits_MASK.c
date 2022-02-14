
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vint64 ;
struct TYPE_6__ {int size; int dynls; scalar_t__ this_tai; scalar_t__ next_tai; int ttime; int dtime; int stime; int ebase; scalar_t__ base_tai; } ;
struct TYPE_7__ {TYPE_2__ head; TYPE_1__* info; } ;
typedef TYPE_3__ leap_table_t ;
struct TYPE_5__ {int stime; int ttime; int dynls; scalar_t__ taiof; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int const*,int *) ;

__attribute__((used)) static void
FUNC_4(
 leap_table_t * VAR_1,
 const vint64 * VAR_2)
{
 int VAR_3;






 for (VAR_3 = 0; VAR_3 != VAR_1->head.size; VAR_3++)
  if (FUNC_3(VAR_2, &VAR_1->info[VAR_3].ttime) >= 0)
   break;





 if (VAR_3 >= VAR_1->head.size) {
  FUNC_1(&VAR_1->head.ebase, 0x00, sizeof(vint64));
  VAR_1->head.this_tai = VAR_1->head.base_tai;
 } else {
  VAR_1->head.ebase = VAR_1->info[VAR_3].ttime;
  VAR_1->head.this_tai = VAR_1->info[VAR_3].taiof;
 }
 if (--VAR_3 >= 0) {
  VAR_1->head.next_tai = VAR_1->info[VAR_3].taiof;
  VAR_1->head.dynls = VAR_1->info[VAR_3].dynls;
  VAR_1->head.ttime = VAR_1->info[VAR_3].ttime;

  if (VAR_0)
   VAR_1->head.dtime = VAR_1->head.ttime;
                else
   VAR_1->head.dtime = FUNC_0(
    &VAR_1->head.ttime,
    VAR_1->head.next_tai - VAR_1->head.this_tai);

  VAR_1->head.stime = FUNC_2(
   &VAR_1->head.ttime, VAR_1->info[VAR_3].stime);

 } else {
  FUNC_1(&VAR_1->head.ttime, 0xFF, sizeof(vint64));
  VAR_1->head.stime = VAR_1->head.ttime;
  VAR_1->head.dtime = VAR_1->head.ttime;
  VAR_1->head.next_tai = VAR_1->head.this_tai;
  VAR_1->head.dynls = 0;
 }
}
