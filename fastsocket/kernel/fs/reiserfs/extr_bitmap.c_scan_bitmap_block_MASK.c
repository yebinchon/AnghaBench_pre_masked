
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; struct super_block* t_super; } ;
struct reiserfs_bitmap_info {int free_count; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int stolen; int bmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,scalar_t__) ;
 int FUNC_3 (int,char*,unsigned int,int) ;
 struct reiserfs_bitmap_info* FUNC_4 (struct super_block*) ;
 struct buffer_head* FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct super_block*,unsigned int,int,int*) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct super_block*,struct buffer_head*) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*,char*,char*,unsigned int) ;
 int FUNC_12 (unsigned long*,int,int) ;
 int FUNC_13 (struct super_block*,struct buffer_head*,int) ;
 struct buffer_head* FUNC_14 (struct super_block*,unsigned int) ;
 int FUNC_15 (struct super_block*,struct buffer_head*) ;
 int FUNC_16 (int,scalar_t__) ;
 scalar_t__ FUNC_17 (int,scalar_t__) ;
 scalar_t__ FUNC_18 (int,scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_19(struct reiserfs_transaction_handle *VAR_1,
        unsigned int VAR_2, int *VAR_3, int VAR_4,
        int VAR_5, int VAR_6, int VAR_7)
{
 struct super_block *VAR_8 = VAR_1->t_super;
 struct reiserfs_bitmap_info *VAR_9 = &FUNC_4(VAR_8)[VAR_2];
 struct buffer_head *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = *VAR_3;

 FUNC_0(!VAR_1->t_trans_id);

 FUNC_3(VAR_2 >= FUNC_10(VAR_8), "Bitmap %u is out of "
        "range (0..%u)", VAR_2, FUNC_10(VAR_8) - 1);
 FUNC_1(VAR_8, VAR_0.bmap);





 if (!VAR_9) {
  FUNC_11(VAR_8, "jdm-4055", "NULL bitmap info pointer "
          "for bitmap %d", VAR_2);
  return 0;
 }

 VAR_10 = FUNC_14(VAR_8, VAR_2);
 if (VAR_10 == ((void*)0))
  return 0;

 while (1) {
       cont:
  if (VAR_9->free_count < VAR_5) {
   FUNC_7(VAR_10);
   return 0;
  }


  *VAR_3 = FUNC_12
      ((unsigned long *)(VAR_10->b_data), VAR_4, *VAR_3);

  if (*VAR_3 + VAR_5 > VAR_4) {

   FUNC_7(VAR_10);
   return 0;
  }

  if (VAR_7 && FUNC_8(VAR_8, VAR_2, *VAR_3, VAR_3))
   continue;

  for (VAR_11 = *VAR_3 + 1;; VAR_11++) {
   if (VAR_11 >= *VAR_3 + VAR_6 || VAR_11 >= VAR_4
       || FUNC_18(VAR_11, VAR_10->b_data)) {
    VAR_12 = VAR_11;
    break;
   }


   if (VAR_7 && FUNC_8(VAR_8, VAR_2, VAR_11, &VAR_12))
    break;
  }



  if (VAR_11 - *VAR_3 >= VAR_5) {
   int VAR_14;
   FUNC_13(VAR_8, VAR_10, 1);

   for (VAR_14 = *VAR_3; VAR_14 < VAR_11; VAR_14++) {

    if (FUNC_17
        (VAR_14, VAR_10->b_data)) {


     FUNC_1(VAR_8, VAR_0.stolen);
     if (VAR_14 >= *VAR_3 + VAR_5) {

      VAR_11 = VAR_14;
      break;
     }

     while (--VAR_14 >= *VAR_3)
      FUNC_16
          (VAR_14, VAR_10->b_data);
     FUNC_15(VAR_8, VAR_10);
     *VAR_3 = VAR_13;

     goto cont;
    }
   }
   VAR_9->free_count -= (VAR_11 - *VAR_3);
   FUNC_9(VAR_1, VAR_8, VAR_10);
   FUNC_7(VAR_10);


   FUNC_13(VAR_8, FUNC_5(VAR_8),
           1);
   FUNC_2(VAR_8, FUNC_6(VAR_8) - (VAR_11 - *VAR_3));
   FUNC_9(VAR_1, VAR_8, FUNC_5(VAR_8));

   return VAR_11 - (*VAR_3);
  } else {
   *VAR_3 = VAR_12;
  }
 }
}
