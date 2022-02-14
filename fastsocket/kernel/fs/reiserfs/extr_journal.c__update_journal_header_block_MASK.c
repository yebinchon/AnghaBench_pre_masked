
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_journal_header {void* j_mount_id; void* j_first_unflushed_offset; void* j_last_flush_trans_id; } ;
struct reiserfs_journal {unsigned int j_last_flush_trans_id; unsigned long j_first_unflushed_offset; unsigned long j_mount_id; TYPE_1__* j_header_bh; } ;
struct TYPE_10__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct super_block*,TYPE_1__*) ;
 void* FUNC_4 (unsigned long) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct reiserfs_journal*) ;
 int FUNC_9 (struct super_block*,char*,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(struct super_block *VAR_2,
     unsigned long VAR_3,
     unsigned int VAR_4)
{
 struct reiserfs_journal_header *VAR_5;
 struct reiserfs_journal *VAR_6 = FUNC_0(VAR_2);

 if (FUNC_8(VAR_6))
  return -VAR_0;

 if (VAR_4 >= VAR_6->j_last_flush_trans_id) {
  if (FUNC_1((VAR_6->j_header_bh))) {
   FUNC_15((VAR_6->j_header_bh));
   if (FUNC_14(!FUNC_2(VAR_6->j_header_bh))) {




    return -VAR_0;
   }
  }
  VAR_6->j_last_flush_trans_id = VAR_4;
  VAR_6->j_first_unflushed_offset = VAR_3;
  VAR_5 = (struct reiserfs_journal_header *)(VAR_6->j_header_bh->
       b_data);
  VAR_5->j_last_flush_trans_id = FUNC_4(VAR_4);
  VAR_5->j_first_unflushed_offset = FUNC_4(VAR_3);
  VAR_5->j_mount_id = FUNC_4(VAR_6->j_mount_id);

  if (FUNC_7(VAR_2)) {
   int VAR_7;
   FUNC_6(VAR_6->j_header_bh);
   VAR_7 = FUNC_12(VAR_6->j_header_bh);
   if (VAR_7 == -VAR_1) {
    FUNC_11(VAR_6->j_header_bh);
    FUNC_5(VAR_2);
    goto sync;
   }
   FUNC_15(VAR_6->j_header_bh);
   FUNC_3(VAR_2, VAR_6->j_header_bh);
  } else {
        sync:
   FUNC_10(VAR_6->j_header_bh);
   FUNC_13(VAR_6->j_header_bh);
  }
  if (!FUNC_2(VAR_6->j_header_bh)) {
   FUNC_9(VAR_2, "journal-837",
      "IO error during journal replay");
   return -VAR_0;
  }
 }
 return 0;
}
