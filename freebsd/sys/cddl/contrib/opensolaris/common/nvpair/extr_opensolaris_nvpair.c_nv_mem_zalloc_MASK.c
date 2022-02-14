
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
struct TYPE_6__ {void* (* nv_ao_alloc ) (TYPE_3__*,size_t) ;} ;


 int FUNC_0 (void*,size_t) ;
 void* FUNC_1 (TYPE_3__*,size_t) ;

__attribute__((used)) static void *
FUNC_2(nvpriv_t *VAR_0, size_t VAR_1)
{
 nv_alloc_t *VAR_2 = VAR_0->nvp_nva;
 void *VAR_3;

 if ((VAR_3 = VAR_2->nva_ops->nv_ao_alloc(VAR_2, VAR_1)) != ((void*)0))
  FUNC_0(VAR_3, VAR_1);

 return (VAR_3);
}
