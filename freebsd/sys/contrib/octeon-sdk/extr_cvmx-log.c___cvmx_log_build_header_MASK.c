
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int cvmx_log_type_t ;
struct TYPE_3__ {int cycle; scalar_t__ size; int type; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_log_header_t ;


 int FUNC_0 () ;

__attribute__((used)) static inline uint64_t FUNC_1(cvmx_log_type_t VAR_0, uint64_t VAR_1)
{
    cvmx_log_header_t VAR_2;
    VAR_2.u64 = 0;
    VAR_2.s.type = VAR_0;
    VAR_2.s.size = VAR_1;
    VAR_2.s.cycle = FUNC_0();
    return VAR_2.u64;
}
