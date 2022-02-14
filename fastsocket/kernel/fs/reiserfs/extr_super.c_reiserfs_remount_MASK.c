
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; scalar_t__ s_dirt; } ;
struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_super_block {int dummy; } ;
struct reiserfs_journal {unsigned int j_max_commit_age; unsigned int j_max_trans_age; unsigned int j_default_max_commit_age; int j_errno; int j_must_wait; } ;
typedef int qf_names ;
struct TYPE_2__ {unsigned long s_mount_opt; char** s_qf_names; scalar_t__ s_mount_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_2 (struct super_block*) ;
 struct reiserfs_journal* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,unsigned long) ;
 int FUNC_7 (struct super_block*,unsigned long) ;
 int FUNC_8 (struct super_block*,char**,unsigned int*) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_10 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (char**,char**,int) ;
 int FUNC_16 (struct super_block*) ;
 scalar_t__ FUNC_17 (struct reiserfs_journal*) ;
 int FUNC_18 (struct super_block*,char*,unsigned long*,unsigned long*,int *,unsigned int*,char**,unsigned int*) ;
 int FUNC_19 (struct super_block*,int ,int) ;
 int FUNC_20 (struct super_block*,unsigned long) ;
 int FUNC_21 (struct super_block*,int) ;
 int FUNC_22 (struct super_block*,char*) ;
 scalar_t__ FUNC_23 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_24 (struct reiserfs_super_block*) ;
 int FUNC_25 (struct reiserfs_super_block*,scalar_t__) ;
 int FUNC_26 (struct reiserfs_super_block*,scalar_t__) ;
 int FUNC_27 () ;

__attribute__((used)) static int FUNC_28(struct super_block *VAR_22, int *VAR_23, char *VAR_24)
{
 struct reiserfs_super_block *VAR_25;
 struct reiserfs_transaction_handle VAR_26;
 unsigned long VAR_27;
 unsigned long VAR_28 = FUNC_0(VAR_22)->s_mount_opt;
 unsigned long VAR_29 = 0;
 unsigned int VAR_30 = (unsigned int)-1;
 struct reiserfs_journal *VAR_31 = FUNC_3(VAR_22);
 char *VAR_32 = FUNC_13(VAR_24, VAR_1);
 int VAR_33;
 char *VAR_34[VAR_3];
 unsigned int VAR_35 = 0;






 FUNC_14();
 VAR_25 = FUNC_2(VAR_22);

 if (!FUNC_18
     (VAR_22, VAR_24, &VAR_28, &VAR_27, ((void*)0), &VAR_30,
     VAR_34, &VAR_35)) {





  VAR_33 = -VAR_0;
  goto out_err;
 }




 FUNC_5(VAR_22);


 VAR_29 |= 1 << VAR_18;
 VAR_29 |= 1 << VAR_13;
 VAR_29 |= 1 << VAR_14;
 VAR_29 |= 1 << VAR_15;
 VAR_29 |= 1 << VAR_12;
 VAR_29 |= 1 << VAR_19;
 VAR_29 |= 1 << VAR_5;
 VAR_29 |= 1 << VAR_21;
 VAR_29 |= 1 << VAR_16;
 VAR_29 |= 1 << VAR_6;
 VAR_29 |= 1 << VAR_7;
 VAR_29 |= 1 << VAR_11;
 VAR_29 |= 1 << VAR_8;
 VAR_29 |= 1 << VAR_10;
 VAR_29 |= 1 << VAR_17;



 FUNC_0(VAR_22)->s_mount_opt =
     (FUNC_0(VAR_22)->
      s_mount_opt & ~VAR_29) | (VAR_28 & VAR_29);

 if (VAR_30 != 0 && VAR_30 != (unsigned int)-1) {
  VAR_31->j_max_commit_age = VAR_30;
  VAR_31->j_max_trans_age = VAR_30;
 } else if (VAR_30 == 0) {

  VAR_31->j_max_commit_age = VAR_31->j_default_max_commit_age;
  VAR_31->j_max_trans_age = VAR_2;
 }

 if (VAR_27) {
  VAR_33 = FUNC_20(VAR_22, VAR_27);
  if (VAR_33 != 0)
   goto out_err;
 }

 if (*VAR_23 & VAR_4) {
  FUNC_21(VAR_22, *VAR_23);

  if (VAR_22->s_flags & VAR_4)

   goto out_ok;

  if (FUNC_24(VAR_25) == VAR_20
      || FUNC_0(VAR_22)->s_mount_state != VAR_20) {
   goto out_ok;
  }

  VAR_33 = FUNC_9(&VAR_26, VAR_22, 10);
  if (VAR_33)
   goto out_err;


  FUNC_19(VAR_22, FUNC_1(VAR_22), 1);
  FUNC_26(VAR_25, FUNC_0(VAR_22)->s_mount_state);
  FUNC_11(&VAR_26, VAR_22, FUNC_1(VAR_22));
 } else {

  if (!(VAR_22->s_flags & VAR_4)) {
   FUNC_21(VAR_22, *VAR_23);
   goto out_ok;
  }

  if (FUNC_17(VAR_31)) {
   VAR_33 = VAR_31->j_errno;
   goto out_err;
  }

  FUNC_7(VAR_22, VAR_28);
  FUNC_6(VAR_22, VAR_28);
  FUNC_0(VAR_22)->s_mount_state = FUNC_24(VAR_25);
  VAR_22->s_flags &= ~VAR_4;
  VAR_33 = FUNC_9(&VAR_26, VAR_22, 10);
  if (VAR_33)
   goto out_err;


  FUNC_19(VAR_22, FUNC_1(VAR_22), 1);
  FUNC_0(VAR_22)->s_mount_state = FUNC_24(VAR_25);
  VAR_22->s_flags &= ~VAR_4;
  FUNC_26(VAR_25, VAR_9);
  if (!FUNC_16(VAR_22))
   FUNC_25(VAR_25, FUNC_23(VAR_25) + 1);

  FUNC_11(&VAR_26, VAR_22, FUNC_1(VAR_22));
  FUNC_0(VAR_22)->s_mount_state = VAR_20;
 }

 FUNC_3(VAR_22)->j_must_wait = 1;
 VAR_33 = FUNC_10(&VAR_26, VAR_22, 10);
 if (VAR_33)
  goto out_err;
 VAR_22->s_dirt = 0;

 if (!(*VAR_23 & VAR_4)) {
  FUNC_4(VAR_22);
  FUNC_21(VAR_22, *VAR_23);
 }

out_ok:
 FUNC_22(VAR_22, VAR_32);
 FUNC_27();
 return 0;

out_err:
 FUNC_12(VAR_32);
 FUNC_27();
 return VAR_33;
}
