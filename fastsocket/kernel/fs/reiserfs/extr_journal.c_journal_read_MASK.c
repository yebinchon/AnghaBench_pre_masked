
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct super_block {int s_bdev; int s_blocksize; } ;
struct reiserfs_journal_header {int j_mount_id; int j_last_flush_trans_id; int j_first_unflushed_offset; } ;
struct reiserfs_journal_desc {int dummy; } ;
struct reiserfs_journal {unsigned long j_start; int j_trans_id; int j_last_flush_trans_id; int j_mount_id; int j_first_unflushed_offset; int j_dev_bd; TYPE_1__* j_header_bh; } ;
struct buffer_head {unsigned long b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 unsigned long FUNC_1 (struct super_block*) ;
 unsigned long FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct buffer_head*) ;
 unsigned long FUNC_7 (struct reiserfs_journal_desc*) ;
 unsigned int FUNC_8 (struct reiserfs_journal_desc*) ;
 scalar_t__ FUNC_9 (struct reiserfs_journal_desc*) ;
 scalar_t__ FUNC_10 () ;
 void* FUNC_11 (struct super_block*,int) ;
 int FUNC_12 (struct super_block*,unsigned long,unsigned long,unsigned int,unsigned long) ;
 int FUNC_13 (struct super_block*,struct buffer_head*,unsigned int*,unsigned long*) ;
 int FUNC_14 (int ) ;
 struct buffer_head* FUNC_15 (int ,unsigned long,int ,unsigned long) ;
 int FUNC_16 (struct super_block*,int ,char*,...) ;
 int FUNC_17 (struct super_block*,char*,int,...) ;
 int FUNC_18 (struct super_block*,char*,char*) ;

__attribute__((used)) static int FUNC_19(struct super_block *VAR_2)
{
 struct reiserfs_journal *VAR_3 = FUNC_0(VAR_2);
 struct reiserfs_journal_desc *VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;
 time_t VAR_7;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;
 unsigned long VAR_10 = 9;
 struct buffer_head *VAR_11;
 struct reiserfs_journal_header *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 1;
 int VAR_16;
 char VAR_17[VAR_0];

 VAR_9 = FUNC_1(VAR_2);
 FUNC_17(VAR_2, "checking transaction log (%s)\n",
        FUNC_5(VAR_3->j_dev_bd, VAR_17));
 VAR_7 = FUNC_10();





 VAR_3->j_header_bh = FUNC_11(VAR_2,
          FUNC_1(VAR_2)
          + FUNC_2(VAR_2));
 if (!VAR_3->j_header_bh) {
  return 1;
 }
 VAR_12 = (struct reiserfs_journal_header *)(VAR_3->j_header_bh->b_data);
 if (FUNC_14(VAR_12->j_first_unflushed_offset) <
     FUNC_2(VAR_2)
     && FUNC_14(VAR_12->j_last_flush_trans_id) > 0) {
  VAR_8 =
      FUNC_1(VAR_2) +
      FUNC_14(VAR_12->j_first_unflushed_offset);
  VAR_5 = FUNC_14(VAR_12->j_last_flush_trans_id) + 1;
  VAR_10 = FUNC_14(VAR_12->j_mount_id);
  FUNC_16(VAR_2, VAR_1,
          "journal-1153: found in "
          "header: first_unflushed_offset %d, last_flushed_trans_id "
          "%lu", FUNC_14(VAR_12->j_first_unflushed_offset),
          FUNC_14(VAR_12->j_last_flush_trans_id));
  VAR_13 = 1;





  VAR_11 =
      FUNC_11(VAR_2,
      FUNC_1(VAR_2) +
      FUNC_14(VAR_12->j_first_unflushed_offset));
  VAR_16 = FUNC_13(VAR_2, VAR_11, ((void*)0), ((void*)0));
  if (!VAR_16) {
   VAR_15 = 0;
  }
  FUNC_6(VAR_11);
  goto start_log_replay;
 }

 if (VAR_15 && FUNC_4(VAR_2->s_bdev)) {
  FUNC_18(VAR_2, "clm-2076",
     "device is readonly, unable to replay log");
  return -1;
 }




 while (VAR_15
        && VAR_9 <
        (FUNC_1(VAR_2) +
  FUNC_2(VAR_2))) {


  VAR_11 =
      FUNC_15(VAR_3->j_dev_bd, VAR_9,
        VAR_2->s_blocksize,
        FUNC_1(VAR_2) +
        FUNC_2(VAR_2));
  VAR_16 =
      FUNC_13(VAR_2, VAR_11,
       &VAR_6,
       &VAR_10);
  if (VAR_16 == 1) {
   VAR_4 = (struct reiserfs_journal_desc *)VAR_11->b_data;
   if (VAR_8 == 0) {
    VAR_5 = FUNC_8(VAR_4);
    VAR_8 = VAR_11->b_blocknr;
    VAR_10 = FUNC_7(VAR_4);
    FUNC_16(VAR_2, VAR_1,
            "journal-1179: Setting "
            "oldest_start to offset %llu, trans_id %lu",
            VAR_8 -
            FUNC_1
            (VAR_2), VAR_5);
   } else if (VAR_5 > FUNC_8(VAR_4)) {

    VAR_5 = FUNC_8(VAR_4);
    VAR_8 = VAR_11->b_blocknr;
    FUNC_16(VAR_2, VAR_1,
            "journal-1180: Resetting "
            "oldest_start to offset %lu, trans_id %lu",
            VAR_8 -
            FUNC_1
            (VAR_2), VAR_5);
   }
   if (VAR_10 < FUNC_7(VAR_4)) {
    VAR_10 = FUNC_7(VAR_4);
    FUNC_16(VAR_2, VAR_1,
            "journal-1299: Setting "
            "newest_mount_id to %d",
            FUNC_7(VAR_4));
   }
   VAR_9 += FUNC_9(VAR_4) + 2;
  } else {
   VAR_9++;
  }
  FUNC_6(VAR_11);
 }

      start_log_replay:
 VAR_9 = VAR_8;
 if (VAR_5) {
  FUNC_16(VAR_2, VAR_1,
          "journal-1206: Starting replay "
          "from offset %llu, trans_id %lu",
          VAR_9 - FUNC_1(VAR_2),
          VAR_5);

 }
 VAR_14 = 0;
 while (VAR_15 && VAR_5 > 0) {
  VAR_16 =
      FUNC_12(VAR_2, VAR_9, VAR_8,
          VAR_5, VAR_10);
  if (VAR_16 < 0) {
   return VAR_16;
  } else if (VAR_16 != 0) {
   break;
  }
  VAR_9 =
      FUNC_1(VAR_2) + VAR_3->j_start;
  VAR_14++;
  if (VAR_9 == VAR_8)
   break;
 }

 if (VAR_5 == 0) {
  FUNC_16(VAR_2, VAR_1,
          "journal-1225: No valid " "transactions found");
 }




 if (VAR_13 && VAR_14 == 0) {
  VAR_3->j_start = FUNC_14(VAR_12->j_first_unflushed_offset);
  VAR_3->j_trans_id =
      FUNC_14(VAR_12->j_last_flush_trans_id) + 1;

  if (VAR_3->j_trans_id == 0)
   VAR_3->j_trans_id = 10;
  VAR_3->j_last_flush_trans_id =
      FUNC_14(VAR_12->j_last_flush_trans_id);
  VAR_3->j_mount_id = FUNC_14(VAR_12->j_mount_id) + 1;
 } else {
  VAR_3->j_mount_id = VAR_10 + 1;
 }
 FUNC_16(VAR_2, VAR_1, "journal-1299: Setting "
         "newest_mount_id to %lu", VAR_3->j_mount_id);
 VAR_3->j_first_unflushed_offset = VAR_3->j_start;
 if (VAR_14 > 0) {
  FUNC_17(VAR_2,
         "replayed %d transactions in %lu seconds\n",
         VAR_14, FUNC_10() - VAR_7);
 }
 if (!FUNC_4(VAR_2->s_bdev) &&
     FUNC_3(VAR_2, VAR_3->j_start,
      VAR_3->j_last_flush_trans_id)) {



  return -1;
 }
 return 0;
}
