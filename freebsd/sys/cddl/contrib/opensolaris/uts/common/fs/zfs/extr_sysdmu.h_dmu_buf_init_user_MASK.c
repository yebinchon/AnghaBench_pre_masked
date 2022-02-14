
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** dbu_clear_on_evict_dbufp; int * dbu_evict_func_async; int * dbu_evict_func_sync; } ;
typedef TYPE_1__ dmu_buf_user_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_evict_func_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

inline void
FUNC_2(dmu_buf_user_t *VAR_0, dmu_buf_evict_func_t *VAR_1,
    dmu_buf_evict_func_t *VAR_2, dmu_buf_t **VAR_3)
{
 FUNC_0(VAR_0->dbu_evict_func_sync == ((void*)0));
 FUNC_0(VAR_0->dbu_evict_func_async == ((void*)0));


 FUNC_1(VAR_1 == ((void*)0), VAR_2 != ((void*)0));
 VAR_0->dbu_evict_func_sync = VAR_1;
 VAR_0->dbu_evict_func_async = VAR_2;



}
