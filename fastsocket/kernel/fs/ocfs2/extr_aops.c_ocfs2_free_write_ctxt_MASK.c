
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_write_ctxt {int w_di_bh; int w_num_pages; int w_pages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_write_ctxt*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_write_ctxt *VAR_0)
{
 FUNC_2(VAR_0->w_pages, VAR_0->w_num_pages);

 FUNC_0(VAR_0->w_di_bh);
 FUNC_1(VAR_0);
}
