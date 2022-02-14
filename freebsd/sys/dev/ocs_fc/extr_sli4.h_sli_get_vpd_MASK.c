
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* virt; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ vpd; } ;
typedef TYPE_3__ sli4_t ;



__attribute__((used)) static inline void *
FUNC_0(sli4_t *VAR_0)
{
 return VAR_0->vpd.data.virt;
}
