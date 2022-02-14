
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* ops; } ;
struct page {scalar_t__ index; } ;
struct dentry {TYPE_2__* d_inode; } ;
typedef int loff_t ;
struct TYPE_4__ {int i_sb; int i_atime; } ;
struct TYPE_3__ {int (* read ) (TYPE_2__*,int,unsigned int,char*) ;} ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (char*,int ,int,int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 char* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,int ,int) ;
 struct smb_sb_info* FUNC_8 (struct dentry*) ;
 unsigned int FUNC_9 (struct smb_sb_info*) ;
 int FUNC_10 (struct dentry*,int ) ;
 int FUNC_11 (TYPE_2__*,int,unsigned int,char*) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int
FUNC_13(struct dentry *VAR_3, struct page *VAR_4)
{
 char *VAR_5 = FUNC_5(VAR_4);
 loff_t VAR_6 = (loff_t)VAR_4->index << VAR_0;
 struct smb_sb_info *VAR_7 = FUNC_8(VAR_3);
 unsigned int VAR_8 = FUNC_9(VAR_7);
 int VAR_9 = VAR_1;
 int VAR_10;

 FUNC_2("file %s/%s, count=%d@%Ld, rsize=%d\n",
  FUNC_0(VAR_3), VAR_9, VAR_6, VAR_8);

 VAR_10 = FUNC_10(VAR_3, VAR_2);
 if (VAR_10 < 0)
  goto io_error;

 do {
  if (VAR_9 < VAR_8)
   VAR_8 = VAR_9;

  VAR_10 = VAR_7->ops->read(VAR_3->d_inode,VAR_6,VAR_8,VAR_5);
  if (VAR_10 < 0)
   goto io_error;

  VAR_9 -= VAR_10;
  VAR_6 += VAR_10;
  VAR_5 += VAR_10;
  VAR_3->d_inode->i_atime =
   FUNC_3(VAR_3->d_inode->i_sb);
  if (VAR_10 < VAR_8)
   break;
 } while (VAR_9);

 FUNC_7(VAR_5, 0, VAR_9);
 FUNC_4(VAR_4);
 FUNC_1(VAR_4);
 VAR_10 = 0;

io_error:
 FUNC_6(VAR_4);
 FUNC_12(VAR_4);
 return VAR_10;
}
