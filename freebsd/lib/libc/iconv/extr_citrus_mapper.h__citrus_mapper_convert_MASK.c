
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_mapper {TYPE_1__* cm_ops; } ;
typedef int _citrus_index_t ;
struct TYPE_2__ {int (* mo_convert ) (struct _citrus_mapper*,int *,int ,void*) ;} ;


 int FUNC_0 (struct _citrus_mapper*,int *,int ,void*) ;

__attribute__((used)) static __inline int
FUNC_1(struct _citrus_mapper * __restrict VAR_0,
    _citrus_index_t * __restrict VAR_1, _citrus_index_t VAR_2,
    void * __restrict VAR_3)
{

 return ((*VAR_0->cm_ops->mo_convert)(VAR_0, VAR_1, VAR_2, VAR_3));
}
