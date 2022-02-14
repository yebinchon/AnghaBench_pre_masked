
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int xfs_mru_cache_t ;
struct TYPE_19__ {int * m_filestream; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_18__ {int di_mode; } ;
struct TYPE_20__ {int i_ino; TYPE_2__* i_mount; TYPE_1__ i_d; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef scalar_t__ xfs_agnumber_t ;
struct TYPE_21__ {scalar_t__ ag; TYPE_3__* pip; TYPE_3__* ip; } ;
typedef TYPE_4__ fstrm_item_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_11 (int *,int ) ;

__attribute__((used)) static int
FUNC_12(
 xfs_inode_t *VAR_5,
 xfs_inode_t *VAR_6,
 xfs_agnumber_t VAR_7)
{
 int VAR_8 = 0;
 xfs_mount_t *VAR_9;
 xfs_mru_cache_t *VAR_10;
 fstrm_item_t *VAR_11;
 xfs_agnumber_t VAR_12;
 xfs_inode_t *VAR_13;





 FUNC_0(VAR_5 && (((VAR_5->i_d.di_mode & VAR_3) && VAR_6 &&
                (VAR_6->i_d.di_mode & VAR_2)) ||
               ((VAR_5->i_d.di_mode & VAR_2) && !VAR_6)));

 VAR_9 = VAR_5->i_mount;
 VAR_10 = VAR_9->m_filestream;

 VAR_11 = FUNC_11(VAR_10, VAR_5->i_ino);
 if (VAR_11) {
  FUNC_0(VAR_11->ip == VAR_5);
  VAR_12 = VAR_11->ag;
  VAR_11->ag = VAR_7;
  VAR_13 = VAR_11->pip;
  VAR_11->pip = VAR_6;
  FUNC_9(VAR_10);





  if (VAR_7 != VAR_12) {
   FUNC_8(VAR_9, VAR_12);
   FUNC_6(VAR_9, VAR_7);
  }





  if (VAR_6 && VAR_6 != VAR_13) {
   FUNC_2(VAR_13);
   FUNC_1(VAR_6);
  }

  FUNC_3(VAR_9, VAR_5, VAR_12, FUNC_7(VAR_9, VAR_12),
    VAR_7, FUNC_7(VAR_9, VAR_7));
  return 0;
 }

 VAR_11 = FUNC_5(VAR_4, VAR_1);
 if (!VAR_11)
  return VAR_0;

 VAR_11->ag = VAR_7;
 VAR_11->ip = VAR_5;
 VAR_11->pip = VAR_6;

 VAR_8 = FUNC_10(VAR_10, VAR_5->i_ino, VAR_11);
 if (VAR_8) {
  FUNC_4(VAR_4, VAR_11);
  return VAR_8;
 }


 FUNC_6(VAR_9, VAR_7);





 FUNC_1(VAR_5);





 if (VAR_6)
  FUNC_1(VAR_6);

 FUNC_3(VAR_9, VAR_5, VAR_7, FUNC_7(VAR_9, VAR_7),
   VAR_7, FUNC_7(VAR_9, VAR_7));

 return 0;
}
