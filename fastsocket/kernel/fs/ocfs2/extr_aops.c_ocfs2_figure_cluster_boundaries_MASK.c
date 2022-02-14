
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_super {int s_clustersize_bits; unsigned int s_clustersize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_super *VAR_3,
         u32 VAR_4,
         unsigned int *VAR_5,
         unsigned int *VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8 = VAR_1;

 if (FUNC_1(VAR_0 > VAR_3->s_clustersize_bits)) {
  unsigned int VAR_9;

  VAR_9 = 1 << (VAR_0 - VAR_3->s_clustersize_bits);

  VAR_7 = VAR_4 % VAR_9;
  VAR_7 = VAR_7 << VAR_3->s_clustersize_bits;

  VAR_8 = VAR_7 + VAR_3->s_clustersize;
 }

 FUNC_0(VAR_7 > VAR_2);
 FUNC_0(VAR_8 > VAR_2);

 if (VAR_5)
  *VAR_5 = VAR_7;
 if (VAR_6)
  *VAR_6 = VAR_8;
}
