
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int xfs_mru_cache_t ;
struct TYPE_24__ {int sb_agcount; } ;
struct TYPE_25__ {TYPE_1__ m_sb; int * m_filestream; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_26__ {int i_ino; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_extlen_t ;
struct TYPE_27__ {scalar_t__ low; scalar_t__ userdata; int alen; TYPE_3__* ip; } ;
typedef TYPE_4__ xfs_bmalloca_t ;
typedef int xfs_agnumber_t ;
struct TYPE_28__ {int ag; TYPE_3__* ip; TYPE_3__* pip; } ;
typedef TYPE_5__ fstrm_item_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int,int ,int,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int,int*,int,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int ,TYPE_5__*) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,TYPE_5__*) ;
 TYPE_5__* FUNC_13 (int *,int ) ;
 TYPE_5__* FUNC_14 (int *,int ) ;

int
FUNC_15(
 xfs_bmalloca_t *VAR_5,
 xfs_agnumber_t *VAR_6)
{
 int VAR_7, VAR_8;
 xfs_inode_t *VAR_9, *VAR_10 = ((void*)0);
 xfs_mount_t *VAR_11;
 xfs_mru_cache_t *VAR_12;
 xfs_extlen_t VAR_13;
 fstrm_item_t *VAR_14, *VAR_15;
 xfs_agnumber_t VAR_16 = VAR_0;

 VAR_9 = VAR_5->ip;
 VAR_11 = VAR_9->i_mount;
 VAR_12 = VAR_11->m_filestream;
 VAR_13 = VAR_5->alen;
 *VAR_6 = VAR_0;





 VAR_15 = FUNC_14(VAR_12, VAR_9->i_ino);
 if (VAR_15) {
  FUNC_0(VAR_9 == VAR_15->ip);


  VAR_10 = VAR_15->pip;
  VAR_16 = VAR_15->ag;


  VAR_14 = FUNC_13(VAR_12, VAR_10->i_ino);
  if (VAR_14) {
   FUNC_0(VAR_10 == VAR_14->ip);







   if (VAR_14->ag != VAR_15->ag) {
    FUNC_7(VAR_11, VAR_15->ag);
    FUNC_5(VAR_11, VAR_14->ag);
    *VAR_6 = VAR_15->ag = VAR_14->ag;
   }

   FUNC_11(VAR_12);
  }






  VAR_8 = FUNC_12(VAR_12, VAR_9->i_ino, VAR_15);
  if (VAR_8) {
   FUNC_8(VAR_9->i_ino, VAR_15);
   return VAR_8;
  }





  if (*VAR_6 != VAR_0) {
   FUNC_1(VAR_11, VAR_9, VAR_10,
     VAR_16, FUNC_6(VAR_11, VAR_16),
     *VAR_6, FUNC_6(VAR_11, *VAR_6));
   return 0;
  }
 }
 if (VAR_10)
  FUNC_9(VAR_10, VAR_1 | VAR_2);






 VAR_16 = (VAR_16 == VAR_0) ? 0 : (VAR_16 + 1) % VAR_11->m_sb.sb_agcount;
 VAR_7 = (VAR_5->userdata ? VAR_4 : 0) |
         (VAR_5->low ? VAR_3 : 0);

 VAR_8 = FUNC_3(VAR_11, VAR_16, VAR_6, VAR_7, VAR_13);
 if (VAR_8 || *VAR_6 == VAR_0)
  goto exit;
 if (!VAR_10) {
  FUNC_2(VAR_11, VAR_9, *VAR_6);
  goto exit;
 }


 VAR_8 = FUNC_4(VAR_10, ((void*)0), *VAR_6);
 if (VAR_8)
  goto exit;


 VAR_8 = FUNC_4(VAR_9, VAR_10, *VAR_6);
 if (VAR_8)
  goto exit;

 FUNC_1(VAR_11, VAR_9, VAR_10, VAR_0, 0,
   *VAR_6, FUNC_6(VAR_11, *VAR_6));

exit:





 if (*VAR_6 != VAR_0)
  FUNC_7(VAR_11, *VAR_6);
 else
  *VAR_6 = 0;

 if (VAR_10)
  FUNC_10(VAR_10, VAR_1);

 return VAR_8;
}
