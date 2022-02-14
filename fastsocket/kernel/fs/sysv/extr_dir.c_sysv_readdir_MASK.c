
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysv_dir_entry {char* name; int inode; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {unsigned long i_size; struct super_block* i_sb; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {unsigned long f_pos; TYPE_2__ f_path; } ;
typedef unsigned long loff_t ;
typedef int (* filldir_t ) (void*,char*,int ,unsigned long,int ,int ) ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct super_block*) ;
 struct page* FUNC_2 (struct inode*,unsigned long) ;
 unsigned long FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct file * VAR_6, void * VAR_7, filldir_t VAR_8)
{
 unsigned long VAR_9 = VAR_6->f_pos;
 struct inode *VAR_10 = VAR_6->f_path.dentry->d_inode;
 struct super_block *VAR_11 = VAR_10->i_sb;
 unsigned VAR_12 = VAR_9 & ~VAR_1;
 unsigned long VAR_13 = VAR_9 >> VAR_2;
 unsigned long VAR_14 = FUNC_3(VAR_10);

 VAR_9 = (VAR_9 + VAR_4-1) & ~(VAR_4-1);
 if (VAR_9 >= VAR_10->i_size)
  goto done;

 for ( ; VAR_13 < VAR_14; VAR_13++, VAR_12 = 0) {
  char *VAR_15, *VAR_16;
  struct sysv_dir_entry *VAR_17;
  struct page *VAR_18 = FUNC_2(VAR_10, VAR_13);

  if (FUNC_0(VAR_18))
   continue;
  VAR_15 = (char *)FUNC_6(VAR_18);
  VAR_17 = (struct sysv_dir_entry *)(VAR_15+VAR_12);
  VAR_16 = VAR_15 + VAR_3 - VAR_4;
  for ( ;(char*)VAR_17 <= VAR_16; VAR_17++) {
   char *VAR_19 = VAR_17->name;
   int VAR_20;

   if (!VAR_17->inode)
    continue;

   VAR_12 = (char *)VAR_17 - VAR_15;

   VAR_20 = VAR_8(VAR_7, VAR_19, FUNC_7(VAR_19,VAR_5),
     ((loff_t)VAR_13<<VAR_2) | VAR_12,
     FUNC_5(FUNC_1(VAR_11), VAR_17->inode),
     VAR_0);
   if (VAR_20) {
    FUNC_4(VAR_18);
    goto done;
   }
  }
  FUNC_4(VAR_18);
 }

done:
 VAR_6->f_pos = ((loff_t)VAR_13 << VAR_2) | VAR_12;
 return 0;
}
