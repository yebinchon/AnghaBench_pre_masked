
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct reiserfs_key {int dummy; } ;
struct reiserfs_dir_entry {int de_entry_num; int de_item_num; struct item_head* de_ih; struct buffer_head* de_bh; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {struct reiserfs_key const ih_key; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {char* b_data; int b_size; } ;
typedef void* off_t ;
typedef void* loff_t ;
typedef int ino_t ;
typedef scalar_t__ (* filldir_t ) (void*,char*,int,void*,int ,int ) ;
struct TYPE_14__ {int reada; } ;
struct TYPE_13__ {int s_blocksize; } ;


 struct reiserfs_de_head* FUNC_0 (struct buffer_head*,struct item_head*) ;
 char* FUNC_1 (struct buffer_head*,struct item_head*,struct reiserfs_de_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct reiserfs_key const*,struct cpu_key*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__) ;
 int VAR_5 ;
 int FUNC_5 (struct item_head*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*,...) ;
 int VAR_10 ;
 int FUNC_8 (struct reiserfs_key const*,int *) ;
 void* FUNC_9 (struct cpu_key*) ;
 int FUNC_10 (struct reiserfs_de_head*) ;
 int FUNC_11 (struct reiserfs_de_head*) ;
 void* FUNC_12 (struct reiserfs_de_head*) ;
 int FUNC_13 (struct buffer_head*,struct item_head*,int) ;
 struct reiserfs_key* FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_15 (struct dentry*,struct reiserfs_de_head*) ;
 scalar_t__ FUNC_16 (struct item_head*,TYPE_2__*) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (int,int ) ;
 void* FUNC_19 (int ,struct reiserfs_key const*) ;
 int FUNC_20 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int FUNC_21 (char*,char*,int) ;
 TYPE_2__ VAR_11 ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_1__*,char*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*) ;
 int FUNC_27 (TYPE_1__*,struct cpu_key*,TYPE_2__*,struct reiserfs_dir_entry*) ;
 int FUNC_28 (struct cpu_key*,void*) ;
 int FUNC_29 (struct item_head*,struct item_head*) ;
 int FUNC_30 (char*) ;

int FUNC_31(struct dentry *VAR_12, void *VAR_13,
      filldir_t VAR_14, loff_t *VAR_15)
{
 struct inode *VAR_16 = VAR_12->d_inode;
 struct cpu_key VAR_17;
 FUNC_4(VAR_11);
 struct buffer_head *VAR_18;
 int VAR_19, VAR_20;
 const struct reiserfs_key *VAR_21;
 struct item_head *VAR_22, VAR_23;
 int VAR_24;
 char *VAR_25;
 loff_t VAR_26;
 char VAR_27[32];
 struct reiserfs_dir_entry VAR_28;
 int VAR_29 = 0;

 FUNC_25(VAR_16->i_sb);

 FUNC_23(VAR_16->i_sb, "readdir");



 FUNC_20(&VAR_17, VAR_16, *VAR_15 ?: VAR_0, VAR_10, 3);
 VAR_26 = FUNC_9(&VAR_17);

 VAR_11.reada = VAR_8;
 while (1) {
       research:

  VAR_24 =
      FUNC_27(VAR_16->i_sb, &VAR_17, &VAR_11,
     &VAR_28);
  if (VAR_24 == VAR_5) {


   VAR_29 = -VAR_2;
   goto out;
  }
  VAR_20 = VAR_28.de_entry_num;
  VAR_18 = VAR_28.de_bh;
  VAR_19 = VAR_28.de_item_num;
  VAR_22 = VAR_28.de_ih;
  FUNC_29(&VAR_23, VAR_22);


  FUNC_7(FUNC_3(&(VAR_22->ih_key), &VAR_17),
         "vs-9000: found item %h does not match to dir we readdir %K",
         VAR_22, &VAR_17);
  FUNC_7(VAR_19 > FUNC_2(VAR_18) - 1,
         "vs-9005 item_num == %d, item amount == %d",
         VAR_19, FUNC_2(VAR_18));


  FUNC_7(FUNC_5(VAR_22) < VAR_20,
         "vs-9010: entry number is too big %d (%d)",
         VAR_20, FUNC_5(VAR_22));

  if (VAR_24 == VAR_9
      || VAR_20 < FUNC_5(VAR_22)) {

   struct reiserfs_de_head *VAR_30 =
       FUNC_0(VAR_18, VAR_22) + VAR_20;

   for (; VAR_20 < FUNC_5(VAR_22);
        VAR_20++, VAR_30++) {
    int VAR_31;
    char *VAR_32;
    off_t VAR_33;
    ino_t VAR_34;

    if (!FUNC_10(VAR_30))

     continue;
    VAR_31 = FUNC_13(VAR_18, VAR_22, VAR_20);
    VAR_32 = FUNC_1(VAR_18, VAR_22, VAR_30);

    if (VAR_31 <= 0 ||
        VAR_32 + VAR_31 > VAR_18->b_data + VAR_18->b_size) {


     FUNC_22(&VAR_11);
     VAR_29 = -VAR_2;
     goto out;
    }

    if (!VAR_32[VAR_31 - 1])
     VAR_31 = FUNC_30(VAR_32);

    if (VAR_31 >
        FUNC_6(VAR_16->i_sb->
            s_blocksize)) {

     continue;
    }


    if (FUNC_15(VAR_12, VAR_30))
     continue;

    VAR_33 = FUNC_12(VAR_30);
    *VAR_15 = VAR_33;
    VAR_34 = FUNC_11(VAR_30);
    if (VAR_31 <= 32) {
     VAR_25 = VAR_27;
    } else {
     VAR_25 = FUNC_18(VAR_31,
           VAR_4);
     if (!VAR_25) {
      FUNC_22(&VAR_11);
      VAR_29 = -VAR_3;
      goto out;
     }
     if (FUNC_16(&VAR_23, &VAR_11)) {
      FUNC_17(VAR_25);
      goto research;
     }
    }




    FUNC_21(VAR_25, VAR_32, VAR_31);
    if (VAR_14
        (VAR_13, VAR_25, VAR_31, VAR_33, VAR_34,
         VAR_1) < 0) {
     if (VAR_25 != VAR_27) {
      FUNC_17(VAR_25);
     }
     goto end;
    }
    if (VAR_25 != VAR_27) {
     FUNC_17(VAR_25);
    }

    VAR_26 = FUNC_12(VAR_30) + 1;

    if (FUNC_16(&VAR_23, &VAR_11)) {
     goto research;
    }
   }
  }

  if (VAR_19 != FUNC_2(VAR_18) - 1)

   goto end;



  VAR_21 = FUNC_14(&VAR_11, VAR_16->i_sb);
  if (!FUNC_8(VAR_21, &VAR_7)) {


   FUNC_28(&VAR_17, VAR_26);
   continue;
  }

  if (FUNC_3(VAR_21, &VAR_17)) {

   goto end;
  }


  FUNC_28(&VAR_17,
         FUNC_19(VAR_6, VAR_21));

 }

end:
 *VAR_15 = VAR_26;
 FUNC_22(&VAR_11);
 FUNC_24(&VAR_11);
out:
 FUNC_26(VAR_16->i_sb);
 return VAR_29;
}
