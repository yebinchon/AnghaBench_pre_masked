
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock {struct superblock* sb_profiled_block; struct superblock* por_dst_tbl; struct superblock* pt_buf; struct superblock* por_src_tbl; int sb_rules; } ;
struct pfctl {int dummy; } ;
struct pf_opt_rule {struct pf_opt_rule* sb_profiled_block; struct pf_opt_rule* por_dst_tbl; struct pf_opt_rule* pt_buf; struct pf_opt_rule* por_src_tbl; int sb_rules; } ;


 struct superblock* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct superblock*,int ) ;
 int FUNC_2 (struct superblock*) ;
 int FUNC_3 (struct superblock*) ;
 int VAR_0 ;

void
FUNC_4(struct pfctl *VAR_1, struct superblock *VAR_2)
{
 struct pf_opt_rule *VAR_3;
 while ((VAR_3 = FUNC_0(&VAR_2->sb_rules))) {
  FUNC_1(&VAR_2->sb_rules, VAR_3, VAR_0);
  if (VAR_3->por_src_tbl) {
   if (VAR_3->por_src_tbl->pt_buf) {
    FUNC_3(VAR_3->por_src_tbl->pt_buf);
    FUNC_2(VAR_3->por_src_tbl->pt_buf);
   }
   FUNC_2(VAR_3->por_src_tbl);
  }
  if (VAR_3->por_dst_tbl) {
   if (VAR_3->por_dst_tbl->pt_buf) {
    FUNC_3(VAR_3->por_dst_tbl->pt_buf);
    FUNC_2(VAR_3->por_dst_tbl->pt_buf);
   }
   FUNC_2(VAR_3->por_dst_tbl);
  }
  FUNC_2(VAR_3);
 }
 if (VAR_2->sb_profiled_block)
  FUNC_4(VAR_1, VAR_2->sb_profiled_block);
 FUNC_2(VAR_2);
}
