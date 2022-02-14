
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* ops; } ;
struct page {scalar_t__ index; } ;
struct inode {unsigned long i_size; int i_sb; int i_atime; int i_mtime; int i_ino; } ;
typedef unsigned long loff_t ;
struct TYPE_4__ {int flags; int fileid; } ;
struct TYPE_3__ {int (* write ) (struct inode*,unsigned long,unsigned int,char*) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,unsigned int,int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int ,int ,unsigned int,unsigned long,unsigned int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct smb_sb_info* FUNC_6 (struct inode*) ;
 unsigned int FUNC_7 (struct smb_sb_info*) ;
 int FUNC_8 (struct inode*,unsigned long,unsigned int,char*) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_2, struct page *VAR_3,
     unsigned long VAR_4, unsigned int VAR_5)
{
 loff_t VAR_6;
 char *VAR_7 = FUNC_4(VAR_3) + VAR_4;
 struct smb_sb_info *VAR_8 = FUNC_6(VAR_2);
 unsigned int VAR_9 = FUNC_7(VAR_8);
 int VAR_10 = 0;

 VAR_6 = ((loff_t)VAR_3->index << VAR_0) + VAR_4;
 FUNC_2("file ino=%ld, fileid=%d, count=%d@%Ld, wsize=%d\n",
  VAR_2->i_ino, FUNC_1(VAR_2)->fileid, VAR_5, VAR_6, VAR_9);

 do {
  int VAR_11;

  if (VAR_5 < VAR_9)
   VAR_9 = VAR_5;

  VAR_11 = VAR_8->ops->write(VAR_2, VAR_6, VAR_9, VAR_7);
  if (VAR_11 < 0) {
   FUNC_0("failed write, wsize=%d, write_ret=%d\n",
     VAR_9, VAR_11);
   VAR_10 = VAR_11;
   break;
  }






  VAR_7 += VAR_9;
  VAR_6 += VAR_9;
  VAR_5 -= VAR_9;



  VAR_2->i_mtime = VAR_2->i_atime = FUNC_3(VAR_2->i_sb);
  FUNC_1(VAR_2)->flags |= VAR_1;
  if (VAR_6 > VAR_2->i_size)
   VAR_2->i_size = VAR_6;
 } while (VAR_5);

 FUNC_5(VAR_3);
 return VAR_10;
}
