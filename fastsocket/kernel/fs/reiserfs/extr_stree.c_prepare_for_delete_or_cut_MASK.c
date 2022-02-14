
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct super_block {int s_blocksize; } ;
struct reiserfs_transaction_handle {int t_trans_id; } ;
struct item_head {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int pos_in_item ;
typedef scalar_t__ __u32 ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer_head*,struct item_head*) ;
 int VAR_0 ;
 int FUNC_2 (struct item_head*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 struct item_head* FUNC_3 (struct treepath*) ;
 struct buffer_head* FUNC_4 (struct treepath*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int,char*) ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (struct item_head*,struct item_head*) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (struct item_head*) ;
 scalar_t__ FUNC_10 (struct item_head*) ;
 scalar_t__ FUNC_11 (struct item_head*) ;
 scalar_t__ FUNC_12 (struct item_head*) ;
 scalar_t__ FUNC_13 (struct item_head*,struct treepath*) ;
 int FUNC_14 (struct reiserfs_transaction_handle*,struct super_block*,struct buffer_head*) ;
 int FUNC_15 (struct item_head*) ;
 unsigned long long FUNC_16 (struct inode*) ;
 char FUNC_17 (struct treepath*,struct item_head*,struct inode*,unsigned long long,int*) ;
 char FUNC_18 (struct treepath*,struct item_head*,struct inode*,unsigned long long,int*) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (struct reiserfs_transaction_handle*,struct inode*,scalar_t__,int) ;
 int FUNC_21 (struct super_block*,struct buffer_head*,int) ;
 int FUNC_22 (struct super_block*,struct buffer_head*) ;
 scalar_t__ FUNC_23 (struct reiserfs_transaction_handle*) ;
 scalar_t__ FUNC_24 (struct super_block*,struct cpu_key const*,struct treepath*) ;

__attribute__((used)) static char FUNC_25(struct reiserfs_transaction_handle *VAR_7, struct inode *VAR_8, struct treepath *VAR_9, const struct cpu_key *VAR_10, int *VAR_11,

          int *VAR_12, unsigned long long VAR_13
    )
{
 struct super_block *VAR_14 = VAR_8->i_sb;
 struct item_head *VAR_15 = FUNC_3(VAR_9);
 struct buffer_head *VAR_16 = FUNC_4(VAR_9);

 FUNC_0(!VAR_7->t_trans_id);


 if (FUNC_12(VAR_15)) {

  FUNC_5(VAR_13 != FUNC_16(VAR_8),
         "PAP-5210: mode must be M_DELETE");

  *VAR_12 = -(VAR_0 + FUNC_9(VAR_15));
  return VAR_4;
 }


 if (FUNC_11(VAR_15))
  return FUNC_18(VAR_9, VAR_15, VAR_8,
       VAR_13,
       VAR_12);


 if (FUNC_10(VAR_15))
  return FUNC_17(VAR_9, VAR_15, VAR_8,
            VAR_13, VAR_12);


 {
     int VAR_17 = VAR_14->s_blocksize;
     struct item_head VAR_18;
     int VAR_19;
     int VAR_20 = 0;
     int VAR_21 = VAR_3;
     int VAR_22 = 0;

     if ( VAR_13 == FUNC_16 (VAR_8) ) {


  VAR_13 = 0;
  VAR_20 = 1;
     }

     do {
  VAR_19 = 0;
  *VAR_12 = 0;
  VAR_16 = FUNC_4(VAR_9);
  FUNC_7(&VAR_18, FUNC_3(VAR_9));
  VAR_22 = FUNC_2(&VAR_18);

  while (FUNC_15 (&VAR_18) + (VAR_22 - 1) * VAR_17 > VAR_13) {
      __le32 *VAR_23;
      __u32 VAR_24;




      if (!VAR_20 && (*VAR_12) != 0 &&
   FUNC_23(VAR_7) < VAR_1)
   break;

      VAR_23 = (__le32 *)FUNC_1(VAR_16, &VAR_18) + VAR_22 - 1;
      VAR_24 = FUNC_8(VAR_23, 0);

      if (VAR_24 != 0) {
   FUNC_21(VAR_14, VAR_16, 1);
   FUNC_19(VAR_23, 0, 0);
   FUNC_14(VAR_7, VAR_14, VAR_16);
   FUNC_20(VAR_7, VAR_8, VAR_24, 1);
      }

      FUNC_6();

      if (FUNC_13 (&VAR_18, VAR_9)) {
   VAR_19 = 1;
   break;
      }

      VAR_22 --;
      (*VAR_11)++;
      (*VAR_12) -= VAR_6;

      if (VAR_22 == 0) {
   (*VAR_12) -= VAR_0;
   VAR_21 = VAR_4;
   break;
      }
  }



  FUNC_22(VAR_14, VAR_16);
     } while (VAR_19 &&
       FUNC_24(VAR_14, VAR_10, VAR_9) == VAR_5);
     pos_in_item(VAR_25) = VAR_22 * VAR_6;

     if (*VAR_12 == 0) {


  VAR_21 = VAR_2;
     }
     return VAR_21;
 }
}
