
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int ih_version; int ih_key; } ;
struct buffer_info {struct buffer_head* bi_bh; } ;
struct buffer_head {int b_size; } ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*,int) ;
 struct item_head* FUNC_2 (struct buffer_head*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct item_head*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 int FUNC_6 (struct item_head*) ;
 scalar_t__ FUNC_7 (struct item_head*) ;
 scalar_t__ FUNC_8 (struct item_head*) ;
 scalar_t__ FUNC_9 (struct item_head*) ;
 scalar_t__ FUNC_10 (struct item_head*) ;
 int FUNC_11 (struct buffer_info*,struct buffer_head*,int,int,scalar_t__,int) ;
 int FUNC_12 (struct buffer_info*,int ,struct item_head*,scalar_t__,int ) ;
 int FUNC_13 (struct item_head*,struct item_head*,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct item_head*,int) ;
 int FUNC_16 (struct item_head*,scalar_t__) ;
 int FUNC_17 (struct item_head*,scalar_t__) ;
 int FUNC_18 (struct item_head*,int ) ;

__attribute__((used)) static void FUNC_19(struct buffer_info *VAR_8,
        struct buffer_head *VAR_9, int VAR_10,
        int VAR_11, int VAR_12)
{
 struct buffer_head *VAR_13 = VAR_8->bi_bh;
 struct item_head *VAR_14;

 FUNC_4(VAR_12 == -1,
        "vs-10170: bytes == - 1 means: do not split item");

 if (VAR_10 == VAR_0) {

  VAR_14 = FUNC_2(VAR_9, VAR_11);
  if (FUNC_8(VAR_14))
   FUNC_11(VAR_8, VAR_9, VAR_0,
           VAR_11, 0, VAR_12);
  else {
   struct item_head VAR_15;





   FUNC_13(&VAR_15, VAR_14, VAR_1);
   FUNC_15(&VAR_15, VAR_12);
   if (FUNC_9(VAR_14)) {
    FUNC_4(VAR_12 == FUNC_6(VAR_14)
           && FUNC_5(VAR_14),
           "vs-10180: when whole indirect item is bottle to left neighbor, it must have free_space==0 (not %lu)",
           (long unsigned)FUNC_5(VAR_14));
    FUNC_16(&VAR_15, 0);
   }

   FUNC_4(FUNC_14(&(VAR_14->ih_key), VAR_9->b_size),
          "vs-10190: bad mergeability of item %h", VAR_14);
   VAR_15.ih_version = VAR_14->ih_version;
   FUNC_12(VAR_8, FUNC_0(VAR_13), &VAR_15,
          FUNC_1(VAR_9, VAR_11), 0);
  }
 } else {

  VAR_14 = FUNC_2(VAR_9, VAR_11);
  if (FUNC_8(VAR_14))
   FUNC_11(VAR_8, VAR_9, VAR_2,
           VAR_11,
           FUNC_3(VAR_14) - VAR_12,
           VAR_12);
  else {
   struct item_head VAR_16;





   FUNC_13(&VAR_16, VAR_14, VAR_4);

   VAR_16.ih_version = VAR_14->ih_version;

   if (FUNC_7(VAR_14)) {
    FUNC_17(&VAR_16,
         FUNC_10(VAR_14) +
         FUNC_6(VAR_14) - VAR_12);
    FUNC_18(&VAR_16, VAR_5);
    FUNC_16(&VAR_16, VAR_3);
   } else {

    FUNC_4(!VAR_12 && FUNC_5(VAR_14),
           "vs-10200: ih->ih_free_space must be 0 when indirect item will be appended");
    FUNC_17(&VAR_16,
         FUNC_10(VAR_14) +
         (FUNC_6(VAR_14) -
          VAR_12) / VAR_7 *
         VAR_13->b_size);
    FUNC_18(&VAR_16, VAR_6);
    FUNC_16(&VAR_16, FUNC_5(VAR_14));
   }


   FUNC_15(&VAR_16, VAR_12);

   VAR_16.ih_version = VAR_14->ih_version;

   FUNC_12(VAR_8, 0, &VAR_16,
          FUNC_1(VAR_9,
             VAR_11) +
          FUNC_6(VAR_14) - VAR_12, 0);
  }
 }
}
