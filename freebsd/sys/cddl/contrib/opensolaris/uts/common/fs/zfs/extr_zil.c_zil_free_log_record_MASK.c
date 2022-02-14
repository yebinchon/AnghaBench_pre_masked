
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zl_spa; } ;
typedef TYPE_1__ zilog_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_14__ {scalar_t__ blk_birth; } ;
struct TYPE_12__ {TYPE_4__ lr_blkptr; } ;
typedef TYPE_2__ lr_write_t ;
struct TYPE_13__ {scalar_t__ lrc_txtype; } ;
typedef TYPE_3__ lr_t ;
typedef TYPE_4__ blkptr_t ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_4(zilog_t *VAR_1, lr_t *VAR_2, void *VAR_3, uint64_t VAR_4)
{
 lr_write_t *VAR_5 = (lr_write_t *)VAR_2;
 blkptr_t *VAR_6 = &VAR_5->lr_blkptr;




 if (VAR_4 != 0 && VAR_2->lrc_txtype == VAR_0 &&
     VAR_6->blk_birth >= VAR_4 && FUNC_2(VAR_1, VAR_6) == 0 &&
     !FUNC_0(VAR_6))
  FUNC_3(VAR_1->zl_spa, FUNC_1(VAR_3), VAR_6);

 return (0);
}
