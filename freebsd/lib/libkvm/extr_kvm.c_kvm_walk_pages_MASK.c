
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int kvm_walk_pages_cb_t ;
struct TYPE_6__ {TYPE_1__* arch; } ;
typedef TYPE_2__ kvm_t ;
struct TYPE_5__ {int (* ka_walk_pages ) (TYPE_2__*,int *,void*) ;} ;


 int FUNC_0 (TYPE_2__*,int *,void*) ;

int
FUNC_1(kvm_t *VAR_0, kvm_walk_pages_cb_t *VAR_1, void *VAR_2)
{

 if (VAR_0->arch->ka_walk_pages == ((void*)0))
  return (0);

 return (VAR_0->arch->ka_walk_pages(VAR_0, VAR_1, VAR_2));
}
