
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ zero_2; void* tag_type; } ;
struct TYPE_6__ {scalar_t__ zero_2; void* tag_type; } ;
struct TYPE_7__ {TYPE_3__ cn38xx; TYPE_1__ cn68xx; } ;
struct TYPE_9__ {TYPE_2__ word1; } ;
typedef TYPE_4__ cvmx_wqe_t ;
typedef void* cvmx_pow_tag_type_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(cvmx_wqe_t *VAR_1, int VAR_2)
{
    if (FUNC_0(VAR_0))
    {
 VAR_1->word1.cn68xx.tag_type = (cvmx_pow_tag_type_t)VAR_2;
        VAR_1->word1.cn68xx.zero_2 = 0;
    }
    else
    {
 VAR_1->word1.cn38xx.tag_type = (cvmx_pow_tag_type_t)VAR_2;
        VAR_1->word1.cn38xx.zero_2 = 0;
    }
}
