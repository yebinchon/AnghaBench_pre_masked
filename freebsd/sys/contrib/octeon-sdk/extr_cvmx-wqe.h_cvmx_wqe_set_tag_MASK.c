
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int tag; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct TYPE_7__ {TYPE_2__ word1; } ;
typedef TYPE_3__ cvmx_wqe_t ;



__attribute__((used)) static inline void FUNC_0(cvmx_wqe_t *VAR_0, uint32_t VAR_1)
{
    VAR_0->word1.s.tag = VAR_1;
}
