
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_sb_private_info {unsigned int s_cssize; unsigned int s_fsize; unsigned int s_fshift; unsigned int s_fpb; unsigned int s_bsize; unsigned int s_ncg; scalar_t__ s_csaddr; } ;
struct ufs_sb_info {unsigned int s_cg_loaded; unsigned char** s_ucpi; unsigned char* s_ucg; scalar_t__ s_csp; struct ufs_sb_private_info* s_uspi; } ;
struct ufs_buffer_head {int dummy; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 struct ufs_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 () ;
 struct ufs_buffer_head* FUNC_5 (struct super_block*,scalar_t__,unsigned int) ;
 int FUNC_6 (struct ufs_buffer_head*) ;
 int FUNC_7 (struct ufs_buffer_head*) ;
 int FUNC_8 (struct ufs_buffer_head*,int) ;
 int FUNC_9 (struct ufs_buffer_head*,unsigned char*,unsigned int) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*,unsigned int) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct super_block *VAR_1)
{
 struct ufs_sb_info *VAR_2 = FUNC_1(VAR_1);
 struct ufs_sb_private_info *VAR_3 = VAR_2->s_uspi;
 struct ufs_buffer_head * VAR_4;
 unsigned char * VAR_5, * VAR_6;
 unsigned VAR_7, VAR_8, VAR_9;


 FUNC_0("ENTER\n");

 FUNC_4();

 FUNC_10(VAR_1);
 VAR_8 = VAR_3->s_cssize;
 VAR_7 = (VAR_8 + VAR_3->s_fsize - 1) >> VAR_3->s_fshift;
 VAR_5 = VAR_6 = (char*) VAR_2->s_csp;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9 += VAR_3->s_fpb) {
  VAR_8 = VAR_3->s_bsize;
  if (VAR_9 + VAR_3->s_fpb > VAR_7)
   VAR_8 = (VAR_7 - VAR_9) * VAR_3->s_fsize;

  VAR_4 = FUNC_5(VAR_1, VAR_3->s_csaddr + VAR_9, VAR_8);

  FUNC_9 (VAR_4, VAR_6, VAR_8);
  VAR_6 += VAR_8;
  FUNC_8 (VAR_4, 1);
  FUNC_7 (VAR_4);
  FUNC_6 (VAR_4);
 }
 for (VAR_9 = 0; VAR_9 < VAR_2->s_cg_loaded; VAR_9++) {
  FUNC_11 (VAR_1, VAR_9);
  FUNC_3 (VAR_2->s_ucpi[VAR_9]);
 }
 for (; VAR_9 < VAR_0; VAR_9++)
  FUNC_3 (VAR_2->s_ucpi[VAR_9]);
 for (VAR_9 = 0; VAR_9 < VAR_3->s_ncg; VAR_9++)
  FUNC_2 (VAR_2->s_ucg[VAR_9]);
 FUNC_3 (VAR_2->s_ucg);
 FUNC_3 (VAR_5);

 FUNC_12();

 FUNC_0("EXIT\n");
}
