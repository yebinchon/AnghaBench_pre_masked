
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cvmx_power_throttle_rfield_t {int pos; int len; int present; } ;
typedef size_t cvmx_power_throttle_field_index_t ;


 int FUNC_0 (int ,int) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 struct cvmx_power_throttle_rfield_t* VAR_1 ;

uint64_t FUNC_2(uint64_t VAR_2,
    cvmx_power_throttle_field_index_t VAR_3)
{
    uint64_t VAR_4;
    struct cvmx_power_throttle_rfield_t *VAR_5;

    FUNC_1(VAR_3 < VAR_0);
    VAR_5 = &VAR_1[VAR_3];
    if (!VAR_5->present)
        return (uint64_t) -1;
    VAR_4 = FUNC_0(VAR_5->len, VAR_5->pos);

    return((VAR_2 & VAR_4) >> VAR_5->pos);
}
