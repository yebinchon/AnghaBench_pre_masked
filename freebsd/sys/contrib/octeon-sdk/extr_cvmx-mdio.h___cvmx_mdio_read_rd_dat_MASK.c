
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ pending; } ;
struct TYPE_5__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_smix_rd_dat_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline cvmx_smix_rd_dat_t FUNC_5(int VAR_2)
{
    cvmx_smix_rd_dat_t VAR_3;
    uint64_t VAR_4 = FUNC_2() + (uint64_t)VAR_1 *
                       FUNC_1(VAR_0) / 1000000;
    do
    {
        FUNC_4(1000);
        VAR_3.u64 = FUNC_3(FUNC_0(VAR_2));
    } while (VAR_3.s.pending && (FUNC_2() < VAR_4));
    return VAR_3;
}
