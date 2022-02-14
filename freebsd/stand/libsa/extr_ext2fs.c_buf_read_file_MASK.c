
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct open_file {int f_devdata; TYPE_1__* f_dev; scalar_t__ f_fsdata; } ;
struct TYPE_4__ {size_t di_size; } ;
struct file {size_t f_seekp; scalar_t__ f_buf_blkno; char* f_buf; size_t f_buf_size; TYPE_2__ f_di; struct ext2fs* f_fs; } ;
struct ext2fs {int fs_bsize; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_3__ {int (* dv_strategy ) (int ,int ,int ,size_t,char*,size_t*) ;} ;


 int VAR_0 ;
 long FUNC_0 (struct ext2fs*,size_t) ;
 int FUNC_1 (struct open_file*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (char*,size_t) ;
 size_t FUNC_3 (struct ext2fs*,TYPE_2__*,scalar_t__) ;
 int FUNC_4 (struct ext2fs*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ext2fs*,size_t) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,size_t,char*,size_t*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct open_file *VAR_1, char **VAR_2, size_t *VAR_3)
{
 struct file *VAR_4 = (struct file *)VAR_1->f_fsdata;
 struct ext2fs *VAR_5 = VAR_4->f_fs;
 long VAR_6;
 daddr_t VAR_7;
 daddr_t VAR_8;
 size_t VAR_9;
 int VAR_10 = 0;

 VAR_6 = FUNC_0(VAR_5, VAR_4->f_seekp);
 VAR_7 = FUNC_5(VAR_5, VAR_4->f_seekp);
 VAR_9 = FUNC_3(VAR_5, &VAR_4->f_di, VAR_7);

 if (VAR_7 != VAR_4->f_buf_blkno) {
  VAR_10 = FUNC_1(VAR_1, VAR_7, &VAR_8);
  if (VAR_10)
   goto done;

  if (VAR_4->f_buf == (char *)0)
   VAR_4->f_buf = FUNC_6(VAR_5->fs_bsize);

  if (VAR_8 == 0) {
   FUNC_2(VAR_4->f_buf, VAR_9);
   VAR_4->f_buf_size = VAR_9;
  } else {
   FUNC_8(4);
   VAR_10 = (VAR_1->f_dev->dv_strategy)(VAR_1->f_devdata, VAR_0,
       FUNC_4(VAR_5, VAR_8), VAR_9,
       VAR_4->f_buf, &VAR_4->f_buf_size);
   if (VAR_10)
    goto done;
  }
  VAR_4->f_buf_blkno = VAR_7;
 }






 *VAR_2 = VAR_4->f_buf + VAR_6;
 *VAR_3 = VAR_9 - VAR_6;




 if (*VAR_3 > VAR_4->f_di.di_size - VAR_4->f_seekp)
  *VAR_3 = VAR_4->f_di.di_size - VAR_4->f_seekp;
done:
 return (VAR_10);
}
