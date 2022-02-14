
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef int cvmx_tim_status_t ;
struct TYPE_3__ {scalar_t__* timer_entry_ptr; scalar_t__ const commit_cycles; } ;
typedef TYPE_1__ cvmx_tim_delete_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline cvmx_tim_status_t FUNC_1(cvmx_tim_delete_t *VAR_3)
{
    const uint64_t VAR_4 = FUNC_0(VAR_0);

    if ((int64_t)(VAR_4 - VAR_3->commit_cycles) < 0)
    {

        *VAR_3->timer_entry_ptr = 0;
        return VAR_2;
    }
    else
    {

        return VAR_1;
    }
}
