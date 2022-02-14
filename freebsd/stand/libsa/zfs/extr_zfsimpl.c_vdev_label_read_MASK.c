
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int v_psize; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int off_t ;
struct TYPE_13__ {int blk_cksum; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 int FUNC_4 (TYPE_2__*,size_t) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,void*,int ,size_t) ;

__attribute__((used)) static int
FUNC_10(vdev_t *VAR_2, int VAR_3, void *VAR_4, uint64_t VAR_5,
    size_t VAR_6)
{
 blkptr_t VAR_7;
 off_t VAR_8;

 VAR_8 = FUNC_8(VAR_2->v_psize, VAR_3, VAR_5);

 FUNC_5(&VAR_7);
 FUNC_3(&VAR_7, VAR_6);
 FUNC_4(&VAR_7, VAR_6);
 FUNC_1(&VAR_7, VAR_0);
 FUNC_2(&VAR_7, VAR_1);
 FUNC_6(FUNC_0(&VAR_7), VAR_8);
 FUNC_7(&VAR_7.blk_cksum, VAR_8, 0, 0, 0);

 return (FUNC_9(VAR_2, &VAR_7, VAR_4, VAR_8, VAR_6));
}
