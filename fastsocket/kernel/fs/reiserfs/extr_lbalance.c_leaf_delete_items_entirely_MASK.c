
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
struct disk_child {int dummy; } ;
struct buffer_info {scalar_t__ bi_parent; int tb; int bi_position; struct buffer_head* bi_bh; } ;
struct buffer_head {int b_size; struct item_head* b_data; } ;
struct block_head {int dummy; } ;


 struct block_head* FUNC_0 (struct buffer_head*) ;
 struct disk_child* FUNC_1 (scalar_t__,int ) ;
 struct item_head* FUNC_2 (struct buffer_head*,int) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (struct block_head*) ;
 int FUNC_5 (struct block_head*) ;
 scalar_t__ FUNC_6 (struct disk_child*) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ,struct buffer_head*,int ) ;
 int FUNC_9 (struct item_head*) ;
 int FUNC_10 (struct buffer_info*) ;
 int FUNC_11 (struct item_head*,struct item_head*,int) ;
 int FUNC_12 (struct disk_child*,scalar_t__) ;
 int FUNC_13 (struct item_head*,int) ;
 int FUNC_14 (struct block_head*,scalar_t__) ;
 int FUNC_15 (struct block_head*,int) ;

__attribute__((used)) static void FUNC_16(struct buffer_info *VAR_1,
           int VAR_2, int VAR_3)
{
 struct buffer_head *VAR_4 = VAR_1->bi_bh;
 int VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 struct block_head *VAR_10;
 struct item_head *VAR_11;

 FUNC_3(VAR_4 == ((void*)0), "10210: buffer is 0");
 FUNC_3(VAR_3 < 0, "10215: del_num less than 0 (%d)", VAR_3);

 if (VAR_3 == 0)
  return;

 VAR_10 = FUNC_0(VAR_4);
 VAR_5 = FUNC_5(VAR_10);

 FUNC_3(VAR_2 < 0 || VAR_2 + VAR_3 > VAR_5,
        "10220: first=%d, number=%d, there is %d items", VAR_2, VAR_3,
        VAR_5);

 if (VAR_2 == 0 && VAR_3 == VAR_5) {

  FUNC_10(VAR_1);

  FUNC_8(VAR_1->tb, VAR_4, 0);
  return;
 }

 VAR_11 = FUNC_2(VAR_4, VAR_2);


 VAR_7 = (VAR_2 == 0) ? VAR_4->b_size : FUNC_9(VAR_11 - 1);


 VAR_8 = FUNC_9(&(VAR_11[VAR_5 - 1 - VAR_2]));
 VAR_9 = FUNC_9(&(VAR_11[VAR_3 - 1]));

 FUNC_11(VAR_4->b_data + VAR_8 + VAR_7 - VAR_9,
  VAR_4->b_data + VAR_8, VAR_9 - VAR_8);


 FUNC_11(VAR_11, VAR_11 + VAR_3, (VAR_5 - VAR_2 - VAR_3) * VAR_0);


 for (VAR_6 = VAR_2; VAR_6 < VAR_5 - VAR_3; VAR_6++)
  FUNC_13(&(VAR_11[VAR_6 - VAR_2]),
    FUNC_9(&(VAR_11[VAR_6 - VAR_2])) + (VAR_7 -
         VAR_9));


 FUNC_15(VAR_10, FUNC_5(VAR_10) - VAR_3);
 FUNC_14(VAR_10,
       FUNC_4(VAR_10) + (VAR_7 - VAR_9 +
           VAR_0 * VAR_3));

 FUNC_8(VAR_1->tb, VAR_4, 0);

 if (VAR_1->bi_parent) {
  struct disk_child *VAR_12 =
      FUNC_1(VAR_1->bi_parent, VAR_1->bi_position);
  FUNC_12(VAR_12,
       FUNC_6(VAR_12) - (VAR_7 - VAR_9 +
          VAR_0 * VAR_3));
  FUNC_7(VAR_1->tb, VAR_1->bi_parent, 0);
 }
}
