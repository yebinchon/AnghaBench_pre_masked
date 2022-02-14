
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
struct jblkrec {scalar_t__ jb_blkno; scalar_t__ jb_oldfrags; scalar_t__ jb_frags; } ;



__attribute__((used)) static int
FUNC_0(struct jblkrec *VAR_0, ufs2_daddr_t VAR_1, int VAR_2)
{
 ufs2_daddr_t VAR_3;
 ufs2_daddr_t VAR_4;
 ufs2_daddr_t VAR_5;

 VAR_5 = VAR_1 + VAR_2;
 VAR_3 = VAR_0->jb_blkno + VAR_0->jb_oldfrags;
 VAR_4 = VAR_3 + VAR_0->jb_frags;
 if (VAR_1 < VAR_4 && VAR_5 > VAR_3)
  return (1);
 return (0);
}
