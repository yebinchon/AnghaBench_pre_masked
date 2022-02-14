
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int ns_sufile; int ns_bdi; int ns_crc_seed; } ;
struct page {int dummy; } ;
struct TYPE_4__ {scalar_t__ scnt; int flags; } ;
struct nilfs_sc_info {int sc_gc_inodes; int sc_dirty_files; TYPE_2__ sc_stage; TYPE_1__* sc_curseg; int * sc_super_root; int sc_seg_ctime; int sc_flags; struct nilfs_sb_info* sc_sbi; } ;
struct nilfs_sb_info {int s_ifile; struct the_nilfs* s_nilfs; } ;
struct TYPE_3__ {int sb_sum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nilfs_sc_info*,struct page*,int) ;
 int FUNC_5 (struct nilfs_sc_info*,int) ;
 int FUNC_6 (struct nilfs_sc_info*,struct the_nilfs*) ;
 int FUNC_7 (struct nilfs_sc_info*,int ) ;
 int FUNC_8 (struct nilfs_sc_info*,struct nilfs_sb_info*) ;
 int FUNC_9 (struct nilfs_sc_info*,struct nilfs_sb_info*) ;
 scalar_t__ FUNC_10 (struct nilfs_sc_info*) ;
 int FUNC_11 (struct nilfs_sc_info*) ;
 int FUNC_12 (struct nilfs_sc_info*,struct the_nilfs*,int) ;
 int FUNC_13 (struct nilfs_sc_info*) ;
 int FUNC_14 (struct nilfs_sc_info*) ;
 int FUNC_15 (struct nilfs_sc_info*,struct the_nilfs*,int) ;
 int FUNC_16 (struct nilfs_sc_info*) ;
 int FUNC_17 (struct nilfs_sc_info*,int ) ;
 int FUNC_18 (struct nilfs_sc_info*,int ) ;
 int FUNC_19 (struct nilfs_sc_info*,struct the_nilfs*) ;
 int FUNC_20 (struct nilfs_sc_info*,struct page**) ;
 int FUNC_21 (struct nilfs_sc_info*,int ) ;
 int FUNC_22 (struct nilfs_sc_info*,int ) ;
 scalar_t__ FUNC_23 (struct nilfs_sb_info*) ;
 int FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct nilfs_sc_info *VAR_5, int VAR_6)
{
 struct nilfs_sb_info *VAR_7 = VAR_5->sc_sbi;
 struct the_nilfs *VAR_8 = VAR_7->s_nilfs;
 struct page *VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_5->sc_stage.scnt = VAR_4;

 VAR_10 = FUNC_8(VAR_5, VAR_7);
 if (FUNC_25(VAR_10))
  goto out;

 if (FUNC_23(VAR_7))
  FUNC_24(VAR_2, &VAR_5->sc_flags);

 if (FUNC_10(VAR_5))
  goto out;

 do {
  VAR_5->sc_stage.flags &= ~VAR_0;

  VAR_10 = FUNC_6(VAR_5, VAR_8);
  if (FUNC_25(VAR_10))
   goto out;


  VAR_5->sc_seg_ctime = FUNC_1();

  VAR_10 = FUNC_12(VAR_5, VAR_8, VAR_6);
  if (FUNC_25(VAR_10))
   goto failed;

  VAR_11 = (VAR_5->sc_super_root != ((void*)0));


  if (VAR_5->sc_stage.scnt == VAR_3 &&
      FUNC_0(&VAR_5->sc_curseg->sb_sum)) {
   FUNC_15(VAR_5, VAR_8, 1);
   goto out;
  }

  VAR_10 = FUNC_5(VAR_5, VAR_6);
  if (FUNC_25(VAR_10))
   goto failed;

  if (VAR_5->sc_stage.flags & VAR_1)
   FUNC_18(VAR_5, VAR_7->s_ifile);

  if (VAR_11) {
   VAR_10 = FUNC_16(VAR_5);
   if (FUNC_25(VAR_10))
    goto failed_to_make_up;

   FUNC_19(VAR_5, VAR_8);
  }
  FUNC_21(VAR_5, VAR_8->ns_sufile);


  VAR_10 = FUNC_20(VAR_5, &VAR_9);
  if (FUNC_25(VAR_10))
   goto failed_to_write;

  FUNC_17(VAR_5, VAR_8->ns_crc_seed);

  VAR_10 = FUNC_22(VAR_5, VAR_8->ns_bdi);
  if (FUNC_25(VAR_10))
   goto failed_to_write;

  FUNC_13(VAR_5);


  if (VAR_11)
   FUNC_11(VAR_5);

  FUNC_15(VAR_5, VAR_8, 0);

 } while (VAR_5->sc_stage.scnt != VAR_3);

 out:
 FUNC_14(VAR_5);
 FUNC_9(VAR_5, VAR_7);
 return VAR_10;

 failed_to_write:
 FUNC_4(VAR_5, VAR_9, VAR_10);
 FUNC_7(VAR_5, VAR_8->ns_sufile);

 failed_to_make_up:
 if (VAR_5->sc_stage.flags & VAR_1)
  FUNC_3(&VAR_5->sc_dirty_files);

 failed:
 if (FUNC_2())
  FUNC_3(&VAR_5->sc_gc_inodes);
 FUNC_15(VAR_5, VAR_8, VAR_10);
 goto out;
}
