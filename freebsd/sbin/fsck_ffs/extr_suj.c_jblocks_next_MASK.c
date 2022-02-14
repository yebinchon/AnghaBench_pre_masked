
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ufs2_daddr_t ;
struct jextent {int je_blocks; int je_daddr; } ;
struct jblocks {size_t jb_head; int jb_off; size_t jb_used; struct jextent* jb_extent; } ;
struct TYPE_2__ {int d_bsize; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static ufs2_daddr_t
FUNC_0(struct jblocks *VAR_1, int VAR_2, int *VAR_3)
{
 struct jextent *VAR_4;
 ufs2_daddr_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = VAR_2 / VAR_0.d_bsize;
 VAR_4 = &VAR_1->jb_extent[VAR_1->jb_head];
 VAR_6 = VAR_4->je_blocks - VAR_1->jb_off;
 if (VAR_6 == 0) {
  VAR_1->jb_off = 0;
  if (++VAR_1->jb_head > VAR_1->jb_used)
   return (0);
  VAR_4 = &VAR_1->jb_extent[VAR_1->jb_head];
  VAR_6 = VAR_4->je_blocks;
 }
 if (VAR_6 > VAR_7)
  VAR_6 = VAR_7;
 *VAR_3 = VAR_6 * VAR_0.d_bsize;
 VAR_5 = VAR_4->je_daddr + VAR_1->jb_off;

 return (VAR_5);
}
