
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_stdenc_state_desc {int dummy; } ;
struct _citrus_stdenc {TYPE_1__* ce_ops; } ;
struct TYPE_2__ {int (* eo_get_state_desc ) (struct _citrus_stdenc*,void*,int,struct _citrus_stdenc_state_desc*) ;} ;


 int FUNC_0 (struct _citrus_stdenc*,void*,int,struct _citrus_stdenc_state_desc*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_stdenc * __restrict VAR_0,
    void * __restrict VAR_1, int VAR_2,
    struct _citrus_stdenc_state_desc * __restrict VAR_3)
{

 return ((*VAR_0->ce_ops->eo_get_state_desc)(VAR_0, VAR_1, VAR_2, VAR_3));
}
