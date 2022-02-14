
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {unsigned int ui_size; int ui_mutex; } ;
struct ubifs_info {int dirty_pg_cnt; } ;
struct page {int index; } ;
struct inode {unsigned int i_size; int i_ino; TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*,struct page*,struct ubifs_inode*,int) ;
 int FUNC_6 (char*,unsigned int,unsigned int,...) ;
 unsigned int FUNC_7 (struct page*) ;
 int FUNC_8 (struct inode*,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int ) ;
 struct ubifs_inode* FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct page*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_2, struct address_space *VAR_3,
      loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
      struct page *VAR_7, void *VAR_8)
{
 struct inode *VAR_9 = VAR_3->host;
 struct ubifs_inode *VAR_10 = FUNC_13(VAR_9);
 struct ubifs_info *VAR_11 = VAR_9->i_sb->s_fs_info;
 loff_t VAR_12 = VAR_4 + VAR_5;
 int VAR_13 = !!(VAR_12 > VAR_9->i_size);

 FUNC_6("ino %lu, pos %llu, pg %lu, len %u, copied %d, i_size %lld",
  VAR_9->i_ino, VAR_4, VAR_7->index, VAR_5, VAR_6, VAR_9->i_size);

 if (FUNC_14(VAR_6 < VAR_5 && VAR_5 == VAR_1)) {
  FUNC_6("copied %d instead of %d, read page and repeat",
   VAR_6, VAR_5);
  FUNC_5(VAR_11, VAR_7, VAR_10, VAR_13);





  VAR_6 = FUNC_7(VAR_7);
  goto out;
 }

 if (!FUNC_0(VAR_7)) {
  FUNC_1(VAR_7);
  FUNC_4(&VAR_11->dirty_pg_cnt);
  FUNC_3(VAR_7);
 }

 if (VAR_13) {
  FUNC_8(VAR_9, VAR_12);
  VAR_10->ui_size = VAR_12;





  FUNC_2(VAR_9, VAR_0);
  FUNC_12(FUNC_9(&VAR_10->ui_mutex));
  FUNC_10(&VAR_10->ui_mutex);
 }

out:
 FUNC_15(VAR_7);
 FUNC_11(VAR_7);
 return VAR_6;
}
