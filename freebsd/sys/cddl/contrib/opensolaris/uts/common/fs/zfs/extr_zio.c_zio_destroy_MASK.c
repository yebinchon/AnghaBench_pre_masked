
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_cv; int io_lock; int io_child_list; int io_parent_list; int io_alloc_list; } ;
typedef TYPE_1__ zio_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(zio_t *VAR_1)
{
 FUNC_3(&VAR_1->io_alloc_list);
 FUNC_2(&VAR_1->io_parent_list);
 FUNC_2(&VAR_1->io_child_list);
 FUNC_4(&VAR_1->io_lock);
 FUNC_0(&VAR_1->io_cv);
 FUNC_1(VAR_0, VAR_1);
}
