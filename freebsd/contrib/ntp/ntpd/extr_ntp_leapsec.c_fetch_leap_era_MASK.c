
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vint64 ;
struct TYPE_7__ {int size; int base_tai; } ;
struct TYPE_9__ {TYPE_2__* info; TYPE_1__ head; } ;
typedef TYPE_3__ leap_table_t ;
struct TYPE_10__ {int ttime; int taiof; int ebase; } ;
typedef TYPE_4__ leap_era_t ;
struct TYPE_8__ {int ttime; int taiof; } ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int const*,int *) ;

__attribute__((used)) static void
FUNC_2(
 leap_era_t * VAR_0,
 const leap_table_t * VAR_1 ,
 const vint64 * VAR_2 )
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 != VAR_1->head.size; VAR_3++)
  if (FUNC_1(VAR_2, &VAR_1->info[VAR_3].ttime) >= 0)
   break;

 if (VAR_3 >= VAR_1->head.size) {
  FUNC_0(&VAR_0->ebase, 0x00, sizeof(vint64));
  VAR_0->taiof = VAR_1->head.base_tai;
 } else {
  VAR_0->ebase = VAR_1->info[VAR_3].ttime;
  VAR_0->taiof = VAR_1->info[VAR_3].taiof;
 }
 if (--VAR_3 >= 0)
  VAR_0->ttime = VAR_1->info[VAR_3].ttime;
 else
  FUNC_0(&VAR_0->ttime, 0xFF, sizeof(vint64));
}
