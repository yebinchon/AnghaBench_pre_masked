
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct item_head {int dummy; } ;
struct inode {scalar_t__ i_size; TYPE_1__* i_sb; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ sector_t ;
typedef int loff_t ;
typedef scalar_t__ b_blocknr_t ;
typedef int __le32 ;
struct TYPE_14__ {int pos_in_item; } ;
struct TYPE_13__ {int s_blocksize; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct buffer_head*,struct item_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct item_head*,struct item_head*) ;
 int FUNC_8 (struct cpu_key*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_1__*) ;
 struct item_head* FUNC_13 (TYPE_2__*) ;
 struct buffer_head* FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct item_head*) ;
 int FUNC_16 (struct item_head*) ;
 scalar_t__ FUNC_17 (struct item_head*) ;
 scalar_t__ FUNC_18 (struct item_head*,TYPE_2__*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct item_head*) ;
 int FUNC_22 (struct cpu_key*,struct inode*,int,int ,int) ;
 int FUNC_23 (struct buffer_head*,TYPE_1__*,scalar_t__) ;
 int FUNC_24 (char*,scalar_t__,int) ;
 int FUNC_25 (char*,int ,int) ;
 TYPE_2__ VAR_9 ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_1__*,struct cpu_key*,TYPE_2__*) ;
 int FUNC_28 (struct buffer_head*) ;
 int FUNC_29 (struct buffer_head*) ;
 int FUNC_30 (struct cpu_key*,int) ;

__attribute__((used)) static int FUNC_31(struct inode *VAR_10, sector_t VAR_11,
          struct buffer_head *VAR_12, int VAR_13)
{
 FUNC_3(VAR_9);
 struct cpu_key VAR_14;
 struct buffer_head *VAR_15;
 struct item_head *VAR_16, VAR_17;
 int VAR_18;
 b_blocknr_t VAR_19;
 char *VAR_20 = ((void*)0);
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24 = 0;
 unsigned long VAR_25;


 FUNC_22(&VAR_14, VAR_10,
       (loff_t) VAR_11 * VAR_10->i_sb->s_blocksize + 1, VAR_7,
       3);

      research:
 VAR_23 = FUNC_27(VAR_10->i_sb, &VAR_14, &VAR_9);
 if (VAR_23 != VAR_6) {
  FUNC_26(&VAR_9);
  if (VAR_20)
   FUNC_20(VAR_12->b_page);
  if (VAR_23 == VAR_4)
   return -VAR_0;


  if ((VAR_13 & VAR_2)
      && !FUNC_5(VAR_12->b_page)) {
   return -VAR_1;
  }
  return 0;
 }

 VAR_15 = FUNC_14(&VAR_9);
 VAR_16 = FUNC_13(&VAR_9);
 if (FUNC_17(VAR_16)) {
  __le32 *VAR_26 = (__le32 *) FUNC_1(VAR_15, VAR_16);




  VAR_19 = FUNC_11(VAR_26, VAR_9.pos_in_item);
  VAR_22 = 0;
  if (VAR_19) {
   FUNC_23(VAR_12, VAR_10->i_sb, VAR_19);
   if (VAR_9.pos_in_item ==
       ((FUNC_15(VAR_16) / VAR_8) - 1)) {
    FUNC_28(VAR_12);
   }
  } else


  if ((VAR_13 & VAR_2)
       && !FUNC_5(VAR_12->b_page)) {
   VAR_22 = -VAR_1;
  }

  FUNC_26(&VAR_9);
  if (VAR_20)
   FUNC_20(VAR_12->b_page);
  return VAR_22;
 }

 if (!(VAR_13 & VAR_3)) {


  FUNC_26(&VAR_9);
  if (VAR_20)
   FUNC_20(VAR_12->b_page);
  return -VAR_1;
 }





 if (FUNC_6(VAR_12)) {
  goto finished;
 } else






 if (!VAR_12->b_page || FUNC_5(VAR_12->b_page)) {
  FUNC_29(VAR_12);
  goto finished;
 }

 VAR_25 = (FUNC_8(&VAR_14) - 1) & (VAR_5 - 1);
 VAR_18 = FUNC_12(VAR_10->i_sb);
 FUNC_7(&VAR_17, VAR_16);






 if (!VAR_20) {
  VAR_20 = (char *)FUNC_19(VAR_12->b_page);
  if (FUNC_10(VAR_18, VAR_10->i_sb)
      && FUNC_18(&VAR_17, &VAR_9)) {
   goto research;
  }
 }
 VAR_20 += VAR_25;
 FUNC_25(VAR_20, 0, VAR_10->i_sb->s_blocksize);
 do {
  if (!FUNC_16(VAR_16)) {
   FUNC_0();
  }





  if ((FUNC_21(VAR_16) + VAR_9.pos_in_item) > VAR_10->i_size)
   break;
  if ((FUNC_21(VAR_16) - 1 + FUNC_15(VAR_16)) > VAR_10->i_size) {
   VAR_21 =
       VAR_10->i_size - (FUNC_21(VAR_16) - 1) -
       VAR_9.pos_in_item;
   VAR_24 = 1;
  } else {
   VAR_21 = FUNC_15(VAR_16) - VAR_9.pos_in_item;
  }
  FUNC_24(VAR_20, FUNC_1(VAR_15, VAR_16) + VAR_9.pos_in_item, VAR_21);

  if (VAR_24)
   break;

  VAR_20 += VAR_21;

  if (FUNC_4(&VAR_9) != (FUNC_2(VAR_15) - 1))




   break;


  FUNC_30(&VAR_14, FUNC_8(&VAR_14) + VAR_21);
  VAR_23 = FUNC_27(VAR_10->i_sb, &VAR_14, &VAR_9);
  if (VAR_23 != VAR_6)

   break;
  VAR_15 = FUNC_14(&VAR_9);
  VAR_16 = FUNC_13(&VAR_9);
 } while (1);

 FUNC_9(VAR_12->b_page);
 FUNC_20(VAR_12->b_page);

      finished:
 FUNC_26(&VAR_9);

 if (VAR_23 == VAR_4)
  return -VAR_0;




 FUNC_23(VAR_12, VAR_10->i_sb, 0);
 FUNC_29(VAR_12);
 return 0;
}
