
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int m_ddev_targp; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int xfs_fileoff_t ;
typedef int xfs_daddr_t ;
typedef scalar_t__ xfs_dablk_t ;
struct TYPE_11__ {int flags; int valuelen; int rmtblkcnt; TYPE_5__* dp; int trans; scalar_t__ rmtblkno; void* value; } ;
typedef TYPE_2__ xfs_da_args_t ;
typedef int xfs_buf_t ;
struct TYPE_12__ {scalar_t__ br_startblock; scalar_t__ br_blockcount; } ;
typedef TYPE_3__ xfs_bmbt_irec_t ;
struct TYPE_13__ {TYPE_1__* i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_5__*,int ,int ,int,int *,int ,TYPE_3__*,int*,int *) ;
 int FUNC_5 (int *,int ,int,void*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int,int,int **) ;

int
FUNC_8(xfs_da_args_t *VAR_9)
{
 xfs_bmbt_irec_t VAR_10[VAR_1];
 xfs_mount_t *VAR_11;
 xfs_daddr_t VAR_12;
 void *VAR_13;
 xfs_buf_t *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 xfs_dablk_t VAR_21;

 FUNC_0(!(VAR_9->flags & VAR_0));

 VAR_11 = VAR_9->dp->i_mount;
 VAR_13 = VAR_9->value;
 VAR_18 = VAR_9->valuelen;
 VAR_21 = VAR_9->rmtblkno;
 while (VAR_18 > 0) {
  VAR_15 = VAR_1;
  VAR_16 = FUNC_4(VAR_9->trans, VAR_9->dp, (xfs_fileoff_t)VAR_21,
      VAR_9->rmtblkcnt,
      VAR_7 | VAR_8,
      ((void*)0), 0, VAR_10, &VAR_15, ((void*)0));
  if (VAR_16)
   return(VAR_16);
  FUNC_0(VAR_15 >= 1);

  for (VAR_20 = 0; (VAR_20 < VAR_15) && (VAR_18 > 0); VAR_20++) {
   FUNC_0((VAR_10[VAR_20].br_startblock != VAR_2) &&
          (VAR_10[VAR_20].br_startblock != VAR_3));
   VAR_12 = FUNC_3(VAR_11, VAR_10[VAR_20].br_startblock);
   VAR_19 = FUNC_2(VAR_11, VAR_10[VAR_20].br_blockcount);
   VAR_16 = FUNC_7(VAR_11, VAR_11->m_ddev_targp, VAR_12,
          VAR_19, VAR_5 | VAR_4,
          &VAR_14);
   if (VAR_16)
    return(VAR_16);

   VAR_17 = (VAR_18 < FUNC_1(VAR_14))
    ? VAR_18 : FUNC_1(VAR_14);
   FUNC_5(VAR_14, 0, VAR_17, VAR_13, VAR_6);
   FUNC_6(VAR_14);
   VAR_13 += VAR_17;
   VAR_18 -= VAR_17;

   VAR_21 += VAR_10[VAR_20].br_blockcount;
  }
 }
 FUNC_0(VAR_18 == 0);
 return(0);
}
