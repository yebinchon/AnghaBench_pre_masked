
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xfs_dablk_t ;
struct TYPE_12__ {int args; scalar_t__ inleaf; } ;
typedef TYPE_1__ xfs_da_state_t ;
struct TYPE_13__ {scalar_t__ magic; int bp; void* hashval; int blkno; } ;
typedef TYPE_2__ xfs_da_state_blk_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 void* FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (int ,int *) ;

int
FUNC_10(xfs_da_state_t *VAR_1, xfs_da_state_blk_t *VAR_2,
       xfs_da_state_blk_t *VAR_3)
{
 xfs_dablk_t VAR_4;
 int VAR_5;

 FUNC_3(VAR_1->args);




 FUNC_0(VAR_2->magic == VAR_0);
 VAR_5 = FUNC_9(VAR_1->args, &VAR_4);
 if (VAR_5)
  return(VAR_5);
 VAR_5 = FUNC_5(VAR_1->args, VAR_4, &VAR_3->bp);
 if (VAR_5)
  return(VAR_5);
 VAR_3->blkno = VAR_4;
 VAR_3->magic = VAR_0;





 FUNC_7(VAR_1, VAR_2, VAR_3);
 VAR_5 = FUNC_8(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return(VAR_5);
 if (VAR_1->inleaf) {
  FUNC_2(VAR_1->args);
  VAR_5 = FUNC_4(VAR_2->bp, VAR_1->args);
 } else {
  FUNC_1(VAR_1->args);
  VAR_5 = FUNC_4(VAR_3->bp, VAR_1->args);
 }




 VAR_2->hashval = FUNC_6(VAR_2->bp, ((void*)0));
 VAR_3->hashval = FUNC_6(VAR_3->bp, ((void*)0));
 return(VAR_5);
}
