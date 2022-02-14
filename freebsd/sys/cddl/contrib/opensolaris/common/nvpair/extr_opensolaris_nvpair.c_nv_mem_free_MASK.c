
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* nvp_nva; } ;
typedef TYPE_2__ nvpriv_t ;
struct TYPE_8__ {TYPE_1__* nva_ops; } ;
typedef TYPE_3__ nv_alloc_t ;
struct TYPE_6__ {int (* nv_ao_free ) (TYPE_3__*,void*,size_t) ;} ;


 int FUNC_0 (TYPE_3__*,void*,size_t) ;

__attribute__((used)) static void
FUNC_1(nvpriv_t *VAR_0, void *VAR_1, size_t VAR_2)
{
 nv_alloc_t *VAR_3 = VAR_0->nvp_nva;

 VAR_3->nva_ops->nv_ao_free(VAR_3, VAR_1, VAR_2);
}
