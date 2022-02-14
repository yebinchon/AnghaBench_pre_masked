
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vm_nfreetags; int vm_freetags; } ;
typedef TYPE_1__ vmem_t ;
typedef int bt_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static bt_t *
FUNC_4(vmem_t *VAR_1)
{
 bt_t *VAR_2;

 FUNC_3(VAR_1);
 VAR_2 = FUNC_0(&VAR_1->vm_freetags);
 FUNC_2(VAR_2 != ((void*)0));
 FUNC_1(VAR_2, VAR_0);
 VAR_1->vm_nfreetags--;

 return VAR_2;
}
