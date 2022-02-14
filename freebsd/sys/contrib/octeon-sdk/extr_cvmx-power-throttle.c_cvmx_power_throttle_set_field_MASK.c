
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cvmx_power_throttle_rfield_t {int pos; int len; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct cvmx_power_throttle_rfield_t* VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3, uint64_t VAR_4, uint64_t VAR_5)
{
    if (FUNC_1(VAR_1))
    {
        uint64_t VAR_6;
        struct cvmx_power_throttle_rfield_t *VAR_7;

        FUNC_2(VAR_3 < VAR_0);

        VAR_7 = &VAR_2[VAR_3];
        VAR_6 = FUNC_0(VAR_7->len, VAR_7->pos);

        return((~VAR_6 & VAR_4) | ((VAR_5 << VAR_7->pos) & VAR_6));
    }
    return 0;
}
