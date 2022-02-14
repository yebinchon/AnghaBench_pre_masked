
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs_lbn_t ;
typedef scalar_t__ ufs2_daddr_t ;
struct jblkrec {scalar_t__ jb_ino; scalar_t__ jb_lbn; scalar_t__ jb_blkno; scalar_t__ jb_oldfrags; int jb_frags; } ;
typedef scalar_t__ ino_t ;



__attribute__((used)) static int
FUNC_0(struct jblkrec *VAR_0, ino_t VAR_1, ufs_lbn_t VAR_2, ufs2_daddr_t VAR_3,
    int VAR_4)
{

 if (VAR_0->jb_ino != VAR_1 || VAR_0->jb_lbn != VAR_2)
  return (0);
 if (VAR_0->jb_blkno + VAR_0->jb_oldfrags != VAR_3)
  return (0);
 if (VAR_0->jb_frags < VAR_4)
  return (0);
 return (1);
}
