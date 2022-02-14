
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pmfd; scalar_t__ vmfd; scalar_t__ nlfd; scalar_t__ procbase; scalar_t__ argbuf; scalar_t__ argspc; scalar_t__ argv; void* pt_map; void* page_map; scalar_t__ sparse_map; int pt_sparse_size; TYPE_1__* arch; int * vmst; } ;
typedef TYPE_2__ kvm_t ;
struct TYPE_5__ {int (* ka_freevtop ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int
FUNC_4(kvm_t *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-1);
 }
 if (VAR_3->vmst != ((void*)0))
  VAR_3->arch->ka_freevtop(VAR_3);
 if (VAR_3->pmfd >= 0)
  VAR_4 |= FUNC_0(VAR_3->pmfd);
 if (VAR_3->vmfd >= 0)
  VAR_4 |= FUNC_0(VAR_3->vmfd);
 if (VAR_3->nlfd >= 0)
  VAR_4 |= FUNC_0(VAR_3->nlfd);
 if (VAR_3->procbase != 0)
  FUNC_1((void *)VAR_3->procbase);
 if (VAR_3->argbuf != 0)
  FUNC_1((void *) VAR_3->argbuf);
 if (VAR_3->argspc != 0)
  FUNC_1((void *) VAR_3->argspc);
 if (VAR_3->argv != 0)
  FUNC_1((void *)VAR_3->argv);
 if (VAR_3->pt_map != ((void*)0))
  FUNC_1(VAR_3->pt_map);
 if (VAR_3->page_map != ((void*)0))
  FUNC_1(VAR_3->page_map);
 if (VAR_3->sparse_map != VAR_1)
  FUNC_2(VAR_3->sparse_map, VAR_3->pt_sparse_size);
 FUNC_1((void *)VAR_3);

 return (VAR_4);
}
