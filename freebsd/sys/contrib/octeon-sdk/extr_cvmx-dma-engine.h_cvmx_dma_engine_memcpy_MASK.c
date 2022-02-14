
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ s; scalar_t__ u64; } ;
typedef TYPE_2__ cvmx_dma_engine_header_t ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_2__,int ,int ,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static inline int FUNC_2(int VAR_1, void *VAR_2, void *VAR_3, int VAR_4)
{
    cvmx_dma_engine_header_t VAR_5;
    VAR_5.u64 = 0;
    VAR_5.s.type = VAR_0;
    return FUNC_0(VAR_1, VAR_5, FUNC_1(VAR_3),
                                    FUNC_1(VAR_2), VAR_4);
}
