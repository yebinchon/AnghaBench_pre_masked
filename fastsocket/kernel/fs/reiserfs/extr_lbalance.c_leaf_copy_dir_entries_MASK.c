
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_de_head {int dummy; } ;
struct item_head {int ih_key; } ;
struct buffer_info {struct buffer_head* bi_bh; } ;
struct buffer_head {char* b_data; } ;


 struct reiserfs_de_head* FUNC_0 (struct buffer_head*,struct item_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct item_head* FUNC_2 (struct buffer_head*,int) ;
 int FUNC_3 (struct buffer_head*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct item_head*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (struct reiserfs_de_head*) ;
 int FUNC_8 (struct reiserfs_de_head*) ;
 int FUNC_9 (struct item_head*) ;
 int FUNC_10 (struct item_head*) ;
 int FUNC_11 (struct item_head*) ;
 scalar_t__ FUNC_12 (struct item_head*) ;
 int FUNC_13 (struct buffer_info*,int,struct item_head*,int *,int ) ;
 int FUNC_14 (struct buffer_info*,int,int,int,struct reiserfs_de_head*,char*,int) ;
 int FUNC_15 (struct buffer_info*,int,int ,int,char*,int ) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (struct item_head*,int ) ;
 int FUNC_18 (struct item_head*,int) ;
 int FUNC_19 (struct item_head*,int ) ;
 int FUNC_20 (struct item_head*,int ) ;
 int FUNC_21 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_22(struct buffer_info *VAR_9,
      struct buffer_head *VAR_10, int VAR_11,
      int VAR_12, int VAR_13, int VAR_14)
{
 struct buffer_head *VAR_15 = VAR_9->bi_bh;
 int VAR_16;



 struct item_head *VAR_17;
 struct reiserfs_de_head *VAR_18;
 int VAR_19;
 char *VAR_20;

 VAR_17 = FUNC_2(VAR_10, VAR_12);

 FUNC_5(!FUNC_11(VAR_17), "vs-10000: item must be directory item");


 VAR_18 = FUNC_0(VAR_10, VAR_17);
 if (VAR_14) {
  VAR_19 = (VAR_13 ? FUNC_7(&(VAR_18[VAR_13 - 1])) :
        FUNC_9(VAR_17)) -
      FUNC_7(&(VAR_18[VAR_13 + VAR_14 - 1]));
  VAR_20 =
      VAR_10->b_data + FUNC_10(VAR_17) +
      FUNC_7(&(VAR_18[VAR_13 + VAR_14 - 1]));
 } else {
  VAR_19 = 0;
  VAR_20 = ((void*)0);
 }


 VAR_16 =
     (VAR_11 ==
      VAR_5) ? ((FUNC_1(VAR_15)) ? 0 : -1) : (FUNC_1(VAR_15)
              - 1);


 if ((VAR_16 == -1) ||
     (VAR_11 == VAR_2 && FUNC_12(VAR_17) == VAR_1) ||
     (VAR_11 == VAR_5
      && FUNC_6 (&VAR_17->ih_key,
        FUNC_3(VAR_15,
          VAR_16))))
 {

  struct item_head VAR_21;


  FUNC_16(&VAR_21.ih_key, &VAR_17->ih_key, VAR_4);
  FUNC_19(&VAR_21, VAR_3);

  FUNC_18(&VAR_21,
    VAR_0 * VAR_14 + VAR_19);
  FUNC_17(&VAR_21, 0);

  if (VAR_11 == VAR_5) {

   if (VAR_13 < FUNC_4(VAR_17)) {
    FUNC_20(&VAR_21,
         FUNC_8(&(VAR_18[VAR_13])));

   } else {

    FUNC_20(&VAR_21, VAR_8);

   }
   FUNC_21(VAR_3, &(VAR_21.ih_key),
       VAR_7);
  }


  FUNC_13(VAR_9,
         (VAR_11 ==
          VAR_5) ? 0 : FUNC_1(VAR_15),
         &VAR_21, ((void*)0), 0);
 } else {

  FUNC_15(VAR_9,
         (VAR_11 ==
          VAR_2) ? (FUNC_1(VAR_15) -
       1) : 0, VAR_6,
         VAR_0 * VAR_14 + VAR_19,
         VAR_20, 0);
 }

 VAR_16 =
     (VAR_11 == VAR_2) ? (FUNC_1(VAR_15) - 1) : 0;

 FUNC_14(VAR_9, VAR_16,
      (VAR_11 ==
       VAR_2) ? FUNC_4(FUNC_2(VAR_15,
           VAR_16))
      : 0, VAR_14, VAR_18 + VAR_13, VAR_20,
      VAR_0 * VAR_14 + VAR_19);
}
