
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct open_file {int f_devdata; TYPE_2__* f_dev; scalar_t__ f_fsdata; } ;
struct TYPE_3__ {size_t* di_db; size_t* di_ib; } ;
struct file {size_t* f_nindir; size_t* f_blkno; char** f_blk; scalar_t__* f_blksize; struct ext2fs* f_fs; TYPE_1__ f_di; } ;
struct ext2fs {scalar_t__ fs_bsize; } ;
typedef size_t int32_t ;
typedef size_t daddr_t ;
struct TYPE_4__ {int (* dv_strategy ) (int ,int ,int ,scalar_t__,char*,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ext2fs*,size_t) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,char*,scalar_t__*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct open_file *VAR_5, daddr_t VAR_6, daddr_t *VAR_7)
{
 struct file *VAR_8 = (struct file *)VAR_5->f_fsdata;
 struct ext2fs *VAR_9 = VAR_8->f_fs;
 daddr_t VAR_10;
 int32_t *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 if (VAR_6 < VAR_2) {

  *VAR_7 = VAR_8->f_di.di_db[VAR_6];
  return (0);
 }

 VAR_6 -= VAR_2;







 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  if (VAR_6 < VAR_8->f_nindir[VAR_13])
   break;
  VAR_6 -= VAR_8->f_nindir[VAR_13];
 }
 if (VAR_13 == VAR_3) {

  return (VAR_0);
 }

 VAR_10 = VAR_8->f_di.di_ib[VAR_13];

 for (; VAR_13 >= 0; VAR_13--) {
  if (VAR_10 == 0) {
   *VAR_7 = 0;
   return (0);
  }

  if (VAR_8->f_blkno[VAR_13] != VAR_10) {
   if (VAR_8->f_blk[VAR_13] == (char *)0)
    VAR_8->f_blk[VAR_13] =
     FUNC_1(VAR_9->fs_bsize);
   FUNC_3(1);
   VAR_14 = (VAR_5->f_dev->dv_strategy)(VAR_5->f_devdata, VAR_4,
       FUNC_0(VAR_8->f_fs, VAR_10), VAR_9->fs_bsize,
       VAR_8->f_blk[VAR_13], &VAR_8->f_blksize[VAR_13]);
   if (VAR_14)
    return (VAR_14);
   if (VAR_8->f_blksize[VAR_13] != VAR_9->fs_bsize)
    return (VAR_1);
   VAR_8->f_blkno[VAR_13] = VAR_10;
  }

  VAR_11 = (int32_t *)VAR_8->f_blk[VAR_13];

  if (VAR_13 > 0) {
   VAR_12 = VAR_6 / VAR_8->f_nindir[VAR_13 - 1];
   VAR_6 %= VAR_8->f_nindir[VAR_13 - 1];
  } else {
   VAR_12 = VAR_6;
  }
  VAR_10 = VAR_11[VAR_12];
 }

 *VAR_7 = VAR_10;

 return (0);
}
