
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ sb_agcount; scalar_t__ sb_agblocks; int sb_inopblog; } ;
struct TYPE_13__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef scalar_t__ xfs_ino_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef int xfs_agino_t ;
typedef scalar_t__ xfs_agblock_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_7 (int,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*,unsigned long long) ;

int
FUNC_10(
 xfs_mount_t *VAR_4,
 xfs_ino_t VAR_5)
{
 xfs_agblock_t VAR_6;
 xfs_agino_t VAR_7;
 xfs_agnumber_t VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 VAR_10 = FUNC_5(VAR_4, VAR_5);
 VAR_7 = FUNC_6(VAR_4, VAR_6, VAR_10);
 VAR_9 =
  VAR_8 < VAR_4->m_sb.sb_agcount &&
  VAR_6 < VAR_4->m_sb.sb_agblocks &&
  VAR_6 != 0 &&
  VAR_10 < (1 << VAR_4->m_sb.sb_inopblog) &&
  FUNC_0(VAR_4, VAR_8, VAR_7) == VAR_5;
 if (FUNC_8(FUNC_7(!VAR_9, VAR_4, VAR_2,
   VAR_3))) {
  FUNC_9(VAR_4, "Invalid inode number 0x%Lx",
    (unsigned long long) VAR_5);
  FUNC_2("xfs_dir_ino_validate", VAR_1, VAR_4);
  return FUNC_1(VAR_0);
 }
 return 0;
}
