
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {int f_devdata; TYPE_1__* f_dev; scalar_t__ f_fsdata; } ;
struct ext2dinode {int dummy; } ;
struct file {int* f_blkno; int f_buf_blkno; scalar_t__ f_seekp; struct ext2dinode f_di; int f_bg; struct ext2fs* f_fs; } ;
struct ext2fs {size_t fs_bsize; } ;
typedef int ino_t ;
struct TYPE_2__ {int (* dv_strategy ) (int ,int ,int ,size_t,char*,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (struct ext2fs*,int ) ;
 int FUNC_2 (struct ext2fs*,int ,int ) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int ,int ,int ,size_t,char*,size_t*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(ino_t VAR_3, struct open_file *VAR_4)
{
 struct file *VAR_5 = (struct file *)VAR_4->f_fsdata;
 struct ext2fs *VAR_6 = VAR_5->f_fs;
 struct ext2dinode *VAR_7;
 char *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11 = 0;




 VAR_8 = FUNC_3(VAR_6->fs_bsize);
 FUNC_5(1);
 VAR_11 = (VAR_4->f_dev->dv_strategy)(VAR_4->f_devdata, VAR_2,
     FUNC_2(VAR_6, VAR_5->f_bg, VAR_3), VAR_6->fs_bsize, VAR_8, &VAR_9);
 if (VAR_11)
  goto out;
 if (VAR_9 != VAR_6->fs_bsize) {
  VAR_11 = VAR_0;
  goto out;
 }

 VAR_7 = (struct ext2dinode *)VAR_8;
 VAR_5->f_di = VAR_7[FUNC_1(VAR_6, VAR_3)];


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  VAR_5->f_blkno[VAR_10] = -1;
 VAR_5->f_buf_blkno = -1;
 VAR_5->f_seekp = 0;

out:
 FUNC_0(VAR_8);
 return (VAR_11);
}
