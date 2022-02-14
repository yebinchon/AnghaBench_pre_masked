
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysv_dir_entry {scalar_t__ inode; int name; } ;
struct page {int mapping; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; int i_sb; } ;
struct TYPE_4__ {char* name; int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int,int,int ,struct page**,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct page*,int,int) ;
 struct page* FUNC_7 (struct inode*,unsigned long) ;
 unsigned long FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ,char const*,int) ;
 int FUNC_13 (int ,int ,int) ;
 scalar_t__ FUNC_14 (int,int ,char const*,int ) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;

int FUNC_18(struct dentry *VAR_7, struct inode *VAR_8)
{
 struct inode *VAR_9 = VAR_7->d_parent->d_inode;
 const char * VAR_10 = VAR_7->d_name.name;
 int VAR_11 = VAR_7->d_name.len;
 struct page *VAR_12 = ((void*)0);
 struct sysv_dir_entry * VAR_13;
 unsigned long VAR_14 = FUNC_8(VAR_9);
 unsigned long VAR_15;
 char *VAR_16;
 loff_t VAR_17;
 int VAR_18;


 for (VAR_15 = 0; VAR_15 <= VAR_14; VAR_15++) {
  VAR_12 = FUNC_7(VAR_9, VAR_15);
  VAR_18 = FUNC_2(VAR_12);
  if (FUNC_1(VAR_12))
   goto out;
  VAR_16 = (char*)FUNC_15(VAR_12);
  VAR_13 = (struct sysv_dir_entry *)VAR_16;
  VAR_16 += VAR_4 - VAR_5;
  while ((char *)VAR_13 <= VAR_16) {
   if (!VAR_13->inode)
    goto got_it;
   VAR_18 = -VAR_2;
   if (FUNC_14(VAR_11, VAR_6, VAR_10, VAR_13->name))
    goto out_page;
   VAR_13++;
  }
  FUNC_9(VAR_12);
 }
 FUNC_0();
 return -VAR_3;

got_it:
 VAR_17 = FUNC_16(VAR_12) +
   (char*)VAR_13 - (char*)FUNC_15(VAR_12);
 FUNC_10(VAR_12);
 VAR_18 = FUNC_4(((void*)0), VAR_12->mapping, VAR_17, VAR_5,
    VAR_0, &VAR_12, ((void*)0));
 if (VAR_18)
  goto out_unlock;
 FUNC_12 (VAR_13->name, VAR_10, VAR_11);
 FUNC_13 (VAR_13->name + VAR_11, 0, VAR_5 - VAR_11 - 2);
 VAR_13->inode = FUNC_5(FUNC_3(VAR_8->i_sb), VAR_8->i_ino);
 VAR_18 = FUNC_6(VAR_12, VAR_17, VAR_5);
 VAR_9->i_mtime = VAR_9->i_ctime = VAR_1;
 FUNC_11(VAR_9);
out_page:
 FUNC_9(VAR_12);
out:
 return VAR_18;
out_unlock:
 FUNC_17(VAR_12);
 goto out_page;
}
