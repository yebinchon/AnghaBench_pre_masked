
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int grp; } ;
struct TYPE_6__ {int grp; } ;
struct TYPE_8__ {TYPE_2__ cn38xx; TYPE_1__ cn68xx; } ;
struct TYPE_9__ {TYPE_3__ word1; } ;
typedef TYPE_4__ cvmx_wqe_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(cvmx_wqe_t *VAR_1)
{
    int VAR_2;

    if (FUNC_0(VAR_0))
 VAR_2 = VAR_1->word1.cn68xx.grp;
    else
 VAR_2 = VAR_1->word1.cn38xx.grp;

    return VAR_2;
}
