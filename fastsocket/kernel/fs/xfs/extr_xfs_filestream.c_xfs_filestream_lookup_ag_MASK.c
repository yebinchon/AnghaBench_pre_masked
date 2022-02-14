
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xfs_mru_cache_t ;
struct TYPE_9__ {int di_mode; } ;
struct TYPE_10__ {TYPE_5__* i_mount; int i_ino; TYPE_1__ i_d; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int xfs_agnumber_t ;
struct TYPE_11__ {int * pip; int ag; TYPE_2__* ip; } ;
typedef TYPE_3__ fstrm_item_t ;
struct TYPE_12__ {int * m_filestream; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,int ) ;

xfs_agnumber_t
FUNC_5(
 xfs_inode_t *VAR_3)
{
 xfs_mru_cache_t *VAR_4;
 fstrm_item_t *VAR_5;
 xfs_agnumber_t VAR_6;
 int VAR_7;

 if (!(VAR_3->i_d.di_mode & (VAR_2 | VAR_1))) {
  FUNC_0(0);
  return VAR_0;
 }

 VAR_4 = VAR_3->i_mount->m_filestream;
 VAR_5 = FUNC_4(VAR_4, VAR_3->i_ino);
 if (!VAR_5) {
  FUNC_1(VAR_3->i_mount, VAR_3, ((void*)0), VAR_0, 0);
  return VAR_0;
 }

 FUNC_0(VAR_3 == VAR_5->ip);
 VAR_6 = VAR_5->ag;
 VAR_7 = FUNC_2(VAR_3->i_mount, VAR_6);
 FUNC_3(VAR_4);

 FUNC_1(VAR_3->i_mount, VAR_3, VAR_5->pip, VAR_6, VAR_7);
 return VAR_6;
}
