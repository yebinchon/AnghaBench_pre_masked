
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_block {int h_suballoc_bit; int h_blkno; int h_suballoc_slot; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_cached_dealloc_ctxt*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_cached_dealloc_ctxt *VAR_1,
      struct ocfs2_extent_block *VAR_2)
{
 return FUNC_2(VAR_1, VAR_0,
      FUNC_0(VAR_2->h_suballoc_slot),
      FUNC_1(VAR_2->h_blkno),
      FUNC_0(VAR_2->h_suballoc_bit));
}
