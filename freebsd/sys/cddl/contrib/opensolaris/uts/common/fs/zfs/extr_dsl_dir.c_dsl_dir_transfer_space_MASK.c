
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int dd_lock; int dd_dbuf; } ;
typedef TYPE_1__ dsl_dir_t ;
typedef int dmu_tx_t ;
typedef size_t dd_used_t ;
struct TYPE_6__ {int dd_flags; scalar_t__ dd_used_bytes; int * dd_used_breakdown; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(dsl_dir_t *VAR_2, int64_t VAR_3,
    dd_used_t VAR_4, dd_used_t VAR_5, dmu_tx_t *VAR_6)
{
 FUNC_1(VAR_6 == ((void*)0) || FUNC_3(VAR_6));
 FUNC_1(VAR_4 < VAR_1);
 FUNC_1(VAR_5 < VAR_1);

 if (VAR_3 == 0 ||
     !(FUNC_4(VAR_2)->dd_flags & VAR_0))
  return;

 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_2->dd_dbuf, VAR_6);
 FUNC_5(&VAR_2->dd_lock);
 FUNC_1(VAR_3 > 0 ?
     FUNC_4(VAR_2)->dd_used_breakdown[VAR_4] >= VAR_3 :
     FUNC_4(VAR_2)->dd_used_breakdown[VAR_5] >= -VAR_3);
 FUNC_1(FUNC_4(VAR_2)->dd_used_bytes >= FUNC_0(VAR_3));
 FUNC_4(VAR_2)->dd_used_breakdown[VAR_4] -= VAR_3;
 FUNC_4(VAR_2)->dd_used_breakdown[VAR_5] += VAR_3;
 FUNC_6(&VAR_2->dd_lock);
}
