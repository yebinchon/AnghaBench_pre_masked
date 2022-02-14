
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvpriv_t ;
struct TYPE_7__ {TYPE_1__* nva_ops; } ;
typedef TYPE_2__ nv_alloc_t ;
struct TYPE_6__ {int * (* nv_ao_alloc ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int * FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static nvpriv_t *
FUNC_2(nv_alloc_t *VAR_0)
{
 nvpriv_t *VAR_1;





 if ((VAR_1 = VAR_0->nva_ops->nv_ao_alloc(VAR_0, sizeof (nvpriv_t))) == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_1, VAR_0, 0);

 return (VAR_1);
}
