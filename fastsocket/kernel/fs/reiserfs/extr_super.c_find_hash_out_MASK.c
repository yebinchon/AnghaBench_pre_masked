
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {TYPE_1__* s_root; } ;
struct reiserfs_dir_entry {size_t de_entry_num; int * de_deh; int de_namelen; int de_name; } ;
struct inode {int dummy; } ;
struct cpu_key {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct super_block*,char*) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,char*,char*) ;
 int FUNC_10 (struct super_block*,struct cpu_key*,int *,struct reiserfs_dir_entry*) ;
 int FUNC_11 (struct reiserfs_dir_entry*) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static __u32 FUNC_13(struct super_block *VAR_10)
{
 int VAR_11;
 struct inode *VAR_12;
 struct cpu_key VAR_13;
 FUNC_1(VAR_9);
 struct reiserfs_dir_entry VAR_14;
 __u32 VAR_15 = VAR_0;

 VAR_12 = VAR_10->s_root->d_inode;

 do {
  u32 VAR_16, VAR_17, VAR_18;

  FUNC_4(&VAR_13, VAR_12, ~0, VAR_6, 3);
  VAR_11 = FUNC_10(VAR_10, &VAR_13, &VAR_9, &VAR_14);
  if (VAR_11 == VAR_2) {
   FUNC_5(&VAR_9);
   return VAR_7;
  }
  if (VAR_11 == VAR_3)
   VAR_14.de_entry_num--;
  FUNC_11(&VAR_14);
  if (FUNC_2(&(VAR_14.de_deh[VAR_14.de_entry_num])) == VAR_1) {

   if (FUNC_8(VAR_10)) {
    VAR_15 = VAR_8;
   }
   FUNC_7(VAR_10, "FS seems to be empty, autodetect "
      "is using the default hash\n");
   break;
  }
  VAR_17 = FUNC_0(FUNC_6(VAR_14.de_name, VAR_14.de_namelen));
  VAR_16 = FUNC_0(FUNC_3(VAR_14.de_name, VAR_14.de_namelen));
  VAR_18 = FUNC_0(FUNC_12(VAR_14.de_name, VAR_14.de_namelen));
  if (((VAR_16 == VAR_17)
       &&
       (FUNC_0(FUNC_2(&(VAR_14.de_deh[VAR_14.de_entry_num])))
        == VAR_17)) || ((VAR_16 == VAR_18)
          && (VAR_18 ==
       FUNC_0(FUNC_2
        (&
         (VAR_14.
          de_deh[VAR_14.
          de_entry_num])))))
      || ((VAR_17 == VAR_18)
   && (VAR_18 ==
       FUNC_0(FUNC_2
        (&(VAR_14.de_deh[VAR_14.de_entry_num])))))) {
   FUNC_9(VAR_10, "reiserfs-2506", "Unable to "
      "automatically detect hash function. "
      "Please mount with -o "
      "hash={tea,rupasov,r5}");
   VAR_15 = VAR_7;
   break;
  }
  if (FUNC_0(FUNC_2(&(VAR_14.de_deh[VAR_14.de_entry_num]))) ==
      VAR_18)
   VAR_15 = VAR_8;
  else if (FUNC_0
    (FUNC_2(&(VAR_14.de_deh[VAR_14.de_entry_num]))) == VAR_16)
   VAR_15 = VAR_5;
  else if (FUNC_0
    (FUNC_2(&(VAR_14.de_deh[VAR_14.de_entry_num]))) == VAR_17)
   VAR_15 = VAR_4;
  else {
   FUNC_9(VAR_10, "reiserfs-2506",
      "Unrecognised hash function");
   VAR_15 = VAR_7;
  }
 } while (0);

 FUNC_5(&VAR_9);
 return VAR_15;
}
