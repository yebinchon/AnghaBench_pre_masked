
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
struct jextent {scalar_t__ je_daddr; int je_blocks; } ;
struct jblocks {size_t jb_used; int jb_avail; struct jextent* jb_extent; } ;


 int FUNC_0 (struct jextent*,struct jextent*,int) ;
 int FUNC_1 (struct jextent*,int) ;
 struct jextent* FUNC_2 (int) ;
 int FUNC_3 (struct jextent*) ;

__attribute__((used)) static void
FUNC_4(struct jblocks *VAR_0, ufs2_daddr_t VAR_1, int VAR_2)
{
 struct jextent *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_0->jb_extent[VAR_0->jb_used];

 if (VAR_3->je_daddr == 0) {
  VAR_3->je_daddr = VAR_1;
  VAR_3->je_blocks = VAR_2;
  return;
 }

 if (VAR_3->je_daddr + VAR_3->je_blocks == VAR_1) {
  VAR_3->je_blocks += VAR_2;
  return;
 }

 if (++VAR_0->jb_used == VAR_0->jb_avail) {
  VAR_0->jb_avail *= 2;
  VAR_4 = sizeof(struct jextent) * VAR_0->jb_avail;
  VAR_3 = FUNC_2(VAR_4);
  FUNC_1(VAR_3, VAR_4);
  FUNC_0(VAR_0->jb_extent, VAR_3,
      sizeof(struct jextent) * VAR_0->jb_used);
  FUNC_3(VAR_0->jb_extent);
  VAR_0->jb_extent = VAR_3;
 }
 VAR_3 = &VAR_0->jb_extent[VAR_0->jb_used];
 VAR_3->je_daddr = VAR_1;
 VAR_3->je_blocks = VAR_2;

 return;
}
