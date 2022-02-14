
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_stdenc {TYPE_1__* ce_ops; } ;
struct TYPE_2__ {int (* eo_put_state_reset ) (struct _citrus_stdenc*,char*,size_t,void*,size_t*) ;} ;


 int FUNC_0 (struct _citrus_stdenc*,char*,size_t,void*,size_t*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_stdenc * __restrict VAR_0,
    char * __restrict VAR_1, size_t VAR_2, void * __restrict VAR_3,
    size_t * __restrict VAR_4)
{

 return ((*VAR_0->ce_ops->eo_put_state_reset)(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
