
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_inode_t ;
typedef int xfs_daddr_t ;
struct TYPE_10__ {TYPE_2__* data; } ;
typedef TYPE_1__ xfs_dabuf_t ;
struct TYPE_11__ {int magic; } ;
typedef TYPE_2__ xfs_da_blkinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int **,int *,TYPE_1__*) ;
 int FUNC_3 (int **,int *,TYPE_1__*,int) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int *,int ,int ,TYPE_1__**,int ) ;
 int FUNC_8 (int *,int *,int ,int,TYPE_1__**,int ) ;
 int FUNC_9 (int **,int *) ;

int
FUNC_10(xfs_trans_t **VAR_4, xfs_inode_t *VAR_5)
{
 xfs_da_blkinfo_t *VAR_6;
 xfs_daddr_t VAR_7;
 xfs_dabuf_t *VAR_8;
 int VAR_9;







 VAR_9 = FUNC_8(*VAR_4, VAR_5, 0, -1, &VAR_8, VAR_1);
 if (VAR_9)
  return(VAR_9);
 VAR_7 = FUNC_5(VAR_8);





 VAR_6 = VAR_8->data;
 if (FUNC_1(VAR_6->magic) == VAR_3) {
  VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_8, 1);
 } else if (FUNC_1(VAR_6->magic) == VAR_2) {
  VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_8);
 } else {
  VAR_9 = FUNC_0(VAR_0);
  FUNC_6(*VAR_4, VAR_8);
 }
 if (VAR_9)
  return(VAR_9);




 VAR_9 = FUNC_7(*VAR_4, VAR_5, 0, VAR_7, &VAR_8, VAR_1);
 if (VAR_9)
  return(VAR_9);
 FUNC_4(*VAR_4, VAR_8);



 VAR_9 = FUNC_9(VAR_4, VAR_5);

 return (VAR_9);
}
