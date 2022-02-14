
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
typedef scalar_t__ xfs_rtblock_t ;
struct TYPE_12__ {int m_rbmip; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
typedef int xfs_buf_t ;
typedef int xfs_alloctype_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,scalar_t__,int,int,int*,int **,int *,int,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,scalar_t__,int,int,int*,int **,int *,int,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int,int,int*,int **,int *,int,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int ,long) ;

int
FUNC_6(
 xfs_trans_t *VAR_5,
 xfs_rtblock_t VAR_6,
 xfs_extlen_t VAR_7,
 xfs_extlen_t VAR_8,
 xfs_extlen_t *VAR_9,
 xfs_alloctype_t VAR_10,
 int VAR_11,
 xfs_extlen_t VAR_12,
 xfs_rtblock_t *VAR_13)
{
 xfs_mount_t *VAR_14 = VAR_5->t_mountp;
 int VAR_15;
 xfs_rtblock_t VAR_16;
 xfs_fsblock_t VAR_17;
 xfs_buf_t *VAR_18;

 FUNC_0(FUNC_1(VAR_14->m_rbmip, VAR_2));
 FUNC_0(VAR_7 > 0 && VAR_7 <= VAR_8);




 if (VAR_12 > 1) {
  xfs_extlen_t VAR_19;

  if ((VAR_19 = VAR_8 % VAR_12))
   VAR_8 -= VAR_19;
  if ((VAR_19 = VAR_7 % VAR_12))
   VAR_7 += VAR_12 - VAR_19;
  if (VAR_8 < VAR_7) {
   *VAR_13 = VAR_1;
   return 0;
  }
 }

 VAR_18 = ((void*)0);



 switch (VAR_10) {
 case 130:
  VAR_15 = FUNC_4(VAR_14, VAR_5, VAR_7, VAR_8, VAR_9,
    &VAR_18, &VAR_17, VAR_12, &VAR_16);
  break;
 case 129:
  VAR_15 = FUNC_3(VAR_14, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_9, &VAR_18, &VAR_17, VAR_12, &VAR_16);
  break;
 case 128:
  VAR_15 = FUNC_2(VAR_14, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_9, &VAR_18, &VAR_17, VAR_12, &VAR_16);
  break;
 default:
  VAR_15 = VAR_0;
  FUNC_0(0);
 }
 if (VAR_15)
  return VAR_15;




 if (VAR_16 != VAR_1) {
  long VAR_20 = (long)*VAR_9;

  FUNC_0(*VAR_9 >= VAR_7 && *VAR_9 <= VAR_8);
  if (VAR_11)
   FUNC_5(VAR_5, VAR_4, -VAR_20);
  else
   FUNC_5(VAR_5, VAR_3, -VAR_20);
 }
 *VAR_13 = VAR_16;
 return 0;
}
