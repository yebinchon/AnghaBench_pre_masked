
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_child_type; int io_gang_tree; struct TYPE_5__* io_gang_leader; int * io_bp; } ;
typedef TYPE_1__ zio_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static zio_t *
FUNC_3(zio_t *VAR_1)
{
 blkptr_t *VAR_2 = VAR_1->io_bp;

 FUNC_0(FUNC_1(VAR_2) && VAR_1->io_gang_leader == ((void*)0));
 FUNC_0(VAR_1->io_child_type > VAR_0);

 VAR_1->io_gang_leader = VAR_1;

 FUNC_2(VAR_1, VAR_2, &VAR_1->io_gang_tree);

 return (VAR_1);
}
