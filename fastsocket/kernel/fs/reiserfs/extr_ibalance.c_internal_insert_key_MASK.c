
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;
struct disk_child {int dummy; } ;
struct buffer_info {struct buffer_head* bi_parent; int tb; int bi_position; struct buffer_head* bi_bh; } ;
struct buffer_head {int dummy; } ;
struct block_head {int dummy; } ;


 struct block_head* FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct disk_child* FUNC_3 (struct buffer_head*,int ) ;
 struct reiserfs_key* FUNC_4 (struct buffer_head*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int,char*,int,...) ;
 scalar_t__ FUNC_6 (struct block_head*) ;
 int FUNC_7 (struct block_head*) ;
 scalar_t__ FUNC_8 (struct disk_child*) ;
 int FUNC_9 (int ,struct buffer_head*,int ) ;
 int FUNC_10 (struct reiserfs_key*,struct reiserfs_key*,int) ;
 int FUNC_11 (struct reiserfs_key*,struct reiserfs_key*,int) ;
 int FUNC_12 (struct disk_child*,scalar_t__) ;
 int FUNC_13 (struct block_head*,scalar_t__) ;
 int FUNC_14 (struct block_head*,int) ;

__attribute__((used)) static void FUNC_15(struct buffer_info *VAR_2, int VAR_3,
    struct buffer_head *VAR_4, int VAR_5)
{
 struct buffer_head *VAR_6 = VAR_2->bi_bh;
 int VAR_7;
 struct block_head *VAR_8;
 struct reiserfs_key *VAR_9;

 FUNC_5(VAR_6 == ((void*)0) || VAR_4 == ((void*)0),
        "source(%p) or dest(%p) buffer is 0", VAR_4, VAR_6);
 FUNC_5(VAR_3 < 0 || VAR_5 < 0,
        "source(%d) or dest(%d) key number less than 0",
        VAR_5, VAR_3);
 FUNC_5(VAR_3 > FUNC_2(VAR_6) ||
        VAR_5 >= FUNC_2(VAR_4),
        "invalid position in dest (%d (key number %d)) or in src (%d (key number %d))",
        VAR_3, FUNC_2(VAR_6),
        VAR_5, FUNC_2(VAR_4));
 FUNC_5(FUNC_1(VAR_6) < VAR_1,
        "no enough free space (%d) in dest buffer", FUNC_1(VAR_6));

 VAR_8 = FUNC_0(VAR_6);
 VAR_7 = FUNC_7(VAR_8);


 VAR_9 = FUNC_4(VAR_6, VAR_3);
 FUNC_11(VAR_9 + 1, VAR_9,
  (VAR_7 - VAR_3) * VAR_1 + (VAR_7 + 1) * VAR_0);


 FUNC_10(VAR_9, FUNC_4(VAR_4, VAR_5), VAR_1);



 FUNC_14(VAR_8, FUNC_7(VAR_8) + 1);
 FUNC_13(VAR_8, FUNC_6(VAR_8) - VAR_1);

 FUNC_9(VAR_2->tb, VAR_6, 0);

 if (VAR_2->bi_parent) {
  struct disk_child *VAR_10;
  VAR_10 = FUNC_3(VAR_2->bi_parent, VAR_2->bi_position);
  FUNC_12(VAR_10, FUNC_8(VAR_10) + VAR_1);

  FUNC_9(VAR_2->tb, VAR_2->bi_parent,
            0);
 }
}
