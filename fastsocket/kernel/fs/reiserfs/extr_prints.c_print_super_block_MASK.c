
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_super_block {int dummy; } ;
struct buffer_head {int b_blocknr; int b_bdev; scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_2 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_3 (struct reiserfs_super_block*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct reiserfs_super_block*) ;
 int FUNC_7 (struct reiserfs_super_block*) ;
 int FUNC_8 (struct reiserfs_super_block*) ;
 int FUNC_9 (struct reiserfs_super_block*) ;
 int FUNC_10 (struct reiserfs_super_block*) ;
 int FUNC_11 (struct reiserfs_super_block*) ;
 int FUNC_12 (struct reiserfs_super_block*) ;
 int FUNC_13 (struct reiserfs_super_block*) ;
 int FUNC_14 (struct reiserfs_super_block*) ;
 int FUNC_15 (struct reiserfs_super_block*) ;
 int FUNC_16 (struct reiserfs_super_block*) ;
 int FUNC_17 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_18 (struct reiserfs_super_block*) ;

__attribute__((used)) static int FUNC_19(struct buffer_head *VAR_2)
{
 struct reiserfs_super_block *VAR_3 =
     (struct reiserfs_super_block *)(VAR_2->b_data);
 int VAR_4, VAR_5;
 char *VAR_6;
 char VAR_7[VAR_0];

 if (FUNC_1(VAR_3)) {
  VAR_6 = "3.5";
 } else if (FUNC_2(VAR_3)) {
  VAR_6 = "3.6";
 } else if (FUNC_3(VAR_3)) {
  VAR_6 = ((FUNC_18(VAR_3) == VAR_1) ?
      "3.6" : "3.5");
 } else {
  return 1;
 }

 FUNC_4("%s\'s super block is in block %llu\n", FUNC_0(VAR_2->b_bdev, VAR_7),
        (unsigned long long)VAR_2->b_blocknr);
 FUNC_4("Reiserfs version %s\n", VAR_6);
 FUNC_4("Block count %u\n", FUNC_6(VAR_3));
 FUNC_4("Blocksize %d\n", FUNC_7(VAR_3));
 FUNC_4("Free blocks %u\n", FUNC_9(VAR_3));



 VAR_4 = VAR_2->b_blocknr;
 VAR_5 = FUNC_6(VAR_3) - VAR_4 - 1 - FUNC_8(VAR_3) -
     (!FUNC_3(VAR_3) ? FUNC_14(VAR_3) +
      1 : FUNC_15(VAR_3)) - FUNC_9(VAR_3);
 FUNC_4
     ("Busy blocks (skipped %d, bitmaps - %d, journal (or reserved) blocks - %d\n"
      "1 super block, %d data blocks\n", VAR_4, FUNC_8(VAR_3),
      (!FUNC_3(VAR_3) ? (FUNC_14(VAR_3) + 1) :
       FUNC_15(VAR_3)), VAR_5);
 FUNC_4("Root block %u\n", FUNC_16(VAR_3));
 FUNC_4("Journal block (first) %d\n", FUNC_12(VAR_3));
 FUNC_4("Journal dev %d\n", FUNC_13(VAR_3));
 FUNC_4("Journal orig size %d\n", FUNC_14(VAR_3));
 FUNC_4("FS state %d\n", FUNC_10(VAR_3));
 FUNC_4("Hash function \"%s\"\n",
        FUNC_5(FUNC_11(VAR_3)));

 FUNC_4("Tree height %d\n", FUNC_17(VAR_3));
 return 0;
}
