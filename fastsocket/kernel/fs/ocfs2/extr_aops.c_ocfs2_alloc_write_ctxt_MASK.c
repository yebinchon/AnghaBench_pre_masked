
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_write_ctxt {unsigned int w_cpos; unsigned int w_clen; int w_large_pages; int w_dealloc; struct buffer_head* w_di_bh; int w_first_new_cpos; } ;
struct ocfs2_super {unsigned int s_clustersize_bits; } ;
struct buffer_head {int dummy; } ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*) ;
 struct ocfs2_write_ctxt* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_write_ctxt **VAR_4,
      struct ocfs2_super *VAR_5, loff_t VAR_6,
      unsigned VAR_7, struct buffer_head *VAR_8)
{
 u32 VAR_9;
 struct ocfs2_write_ctxt *VAR_10;

 VAR_10 = FUNC_1(sizeof(struct ocfs2_write_ctxt), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->w_cpos = VAR_6 >> VAR_5->s_clustersize_bits;
 VAR_10->w_first_new_cpos = VAR_3;
 VAR_9 = (VAR_6 + VAR_7 - 1) >> VAR_5->s_clustersize_bits;
 VAR_10->w_clen = VAR_9 - VAR_10->w_cpos + 1;
 FUNC_0(VAR_8);
 VAR_10->w_di_bh = VAR_8;

 if (FUNC_3(VAR_2 > VAR_5->s_clustersize_bits))
  VAR_10->w_large_pages = 1;
 else
  VAR_10->w_large_pages = 0;

 FUNC_2(&VAR_10->w_dealloc);

 *VAR_4 = VAR_10;

 return 0;
}
