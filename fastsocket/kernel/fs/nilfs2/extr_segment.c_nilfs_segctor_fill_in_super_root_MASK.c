
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {unsigned int ns_inode_size; int ns_sufile; int ns_cpfile; int ns_nongc_ctime; } ;
struct nilfs_super_root {scalar_t__ sr_flags; int sr_nongc_ctime; int sr_bytes; } ;
struct nilfs_sc_info {int sc_seg_ctime; struct buffer_head* sc_super_root; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct the_nilfs*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,struct buffer_head*,int ) ;

__attribute__((used)) static void FUNC_8(struct nilfs_sc_info *VAR_1,
          struct the_nilfs *VAR_2)
{
 struct buffer_head *VAR_3 = VAR_1->sc_super_root;
 struct nilfs_super_root *VAR_4 =
  (struct nilfs_super_root *)VAR_3->b_data;
 unsigned VAR_5 = VAR_2->ns_inode_size;

 VAR_4->sr_bytes = FUNC_3(VAR_0);
 VAR_4->sr_nongc_ctime
  = FUNC_4(FUNC_6() ?
         VAR_2->ns_nongc_ctime : VAR_1->sc_seg_ctime);
 VAR_4->sr_flags = 0;

 FUNC_7(
  FUNC_5(VAR_2), VAR_3, FUNC_1(VAR_5));
 FUNC_7(
  VAR_2->ns_cpfile, VAR_3, FUNC_0(VAR_5));
 FUNC_7(
  VAR_2->ns_sufile, VAR_3, FUNC_2(VAR_5));
}
