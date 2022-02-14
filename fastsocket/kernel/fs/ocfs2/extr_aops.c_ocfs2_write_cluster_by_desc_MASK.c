
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_write_ctxt {int w_clen; struct ocfs2_write_cluster_desc* w_desc; } ;
struct ocfs2_write_cluster_desc {int c_cpos; int c_needs_zero; int c_unwritten; int c_phys; } ;
struct ocfs2_super {int s_clustersize; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct address_space {TYPE_1__* host; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_sb; } ;


 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct address_space*,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,struct ocfs2_write_ctxt*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct address_space *VAR_0,
           struct ocfs2_alloc_context *VAR_1,
           struct ocfs2_alloc_context *VAR_2,
           struct ocfs2_write_ctxt *VAR_3,
           loff_t VAR_4, unsigned VAR_5)
{
 int VAR_6, VAR_7;
 loff_t VAR_8;
 unsigned int VAR_9 = VAR_5;
 struct ocfs2_write_cluster_desc *VAR_10;
 struct ocfs2_super *VAR_11 = FUNC_0(VAR_0->host->i_sb);

 for (VAR_7 = 0; VAR_7 < VAR_3->w_clen; VAR_7++) {
  VAR_10 = &VAR_3->w_desc[VAR_7];





  VAR_9 = VAR_5;
  VAR_8 = VAR_4 & (VAR_11->s_clustersize - 1);
  if ((VAR_8 + VAR_9) > VAR_11->s_clustersize)
   VAR_9 = VAR_11->s_clustersize - VAR_8;

  VAR_6 = FUNC_2(VAR_0, VAR_10->c_phys,
       VAR_10->c_unwritten,
       VAR_10->c_needs_zero,
       VAR_1, VAR_2,
       VAR_3, VAR_10->c_cpos, VAR_4, VAR_9);
  if (VAR_6) {
   FUNC_1(VAR_6);
   goto out;
  }

  VAR_5 -= VAR_9;
  VAR_4 += VAR_9;
 }

 VAR_6 = 0;
out:
 return VAR_6;
}
