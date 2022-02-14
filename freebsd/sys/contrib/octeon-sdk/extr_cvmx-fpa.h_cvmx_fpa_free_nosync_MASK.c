
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int didspace; } ;
struct TYPE_4__ {int u64; TYPE_1__ sfilldidspace; } ;
typedef TYPE_2__ cvmx_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(void *VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
    cvmx_addr_t VAR_4;
    VAR_4.u64 = FUNC_2(VAR_1);
    VAR_4.sfilldidspace.didspace = FUNC_0(FUNC_1(VAR_0,VAR_2));
    asm volatile ("" : : : "memory");

    FUNC_3(VAR_4.u64, VAR_3);
}
