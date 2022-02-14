
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int io_txg; int io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_gang_node_t ;
typedef int uint64_t ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ,int ,int *,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_4(zio_t *VAR_1, blkptr_t *VAR_2, zio_gang_node_t *VAR_3, abd_t *VAR_4,
    uint64_t VAR_5)
{
 return (FUNC_3(VAR_1, VAR_1->io_spa, VAR_1->io_txg, VAR_2,
     FUNC_1(VAR_2) ? VAR_0 : FUNC_0(VAR_2),
     FUNC_2(VAR_1)));
}
