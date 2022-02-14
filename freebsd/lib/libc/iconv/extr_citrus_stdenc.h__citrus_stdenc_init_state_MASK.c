
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_stdenc {TYPE_1__* ce_ops; } ;
struct TYPE_2__ {int (* eo_init_state ) (struct _citrus_stdenc*,void*) ;} ;


 int FUNC_0 (struct _citrus_stdenc*,void*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_stdenc * __restrict VAR_0,
    void * __restrict VAR_1)
{

 return ((*VAR_0->ce_ops->eo_init_state)(VAR_0, VAR_1));
}
