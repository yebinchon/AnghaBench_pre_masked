
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zc_time; int zc_count; } ;
typedef TYPE_1__ ztest_shared_callstate_t ;
struct TYPE_9__ {int zi_iters; int (* zi_func ) (int *,size_t) ;} ;
typedef TYPE_2__ ztest_info_t ;
typedef int ztest_ds_t ;
typedef size_t uint64_t ;
typedef int hrtime_t ;
struct TYPE_11__ {size_t zo_datasets; int zo_verbose; } ;
struct TYPE_10__ {char* dli_sname; } ;
typedef TYPE_3__ Dl_info ;


 double VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (void*,TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,double,char*) ;
 int FUNC_5 (int *,size_t) ;
 int * VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(int VAR_3, ztest_info_t *VAR_4, uint64_t VAR_5)
{
 ztest_ds_t *VAR_6 = &VAR_1[VAR_5 % VAR_2.zo_datasets];
 ztest_shared_callstate_t *VAR_7 = FUNC_0(VAR_3);
 hrtime_t VAR_8 = FUNC_3();

 for (int VAR_9 = 0; VAR_9 < VAR_4->zi_iters; VAR_9++)
  VAR_4->zi_func(VAR_6, VAR_5);

 VAR_8 = FUNC_3() - VAR_8;

 FUNC_1(&VAR_7->zc_count, 1);
 FUNC_1(&VAR_7->zc_time, VAR_8);

 if (VAR_2.zo_verbose >= 4) {
  Dl_info VAR_10;
  (void) FUNC_2((void *)VAR_4->zi_func, &VAR_10);
  (void) FUNC_4("%6.2f sec in %s\n",
      (double)VAR_8 / VAR_0, VAR_10.dli_sname);
 }
}
