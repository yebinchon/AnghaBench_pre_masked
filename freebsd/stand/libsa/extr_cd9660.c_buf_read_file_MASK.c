
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {int f_devdata; TYPE_1__* f_dev; scalar_t__ f_fsdata; } ;
struct file {size_t f_off; scalar_t__ f_bno; scalar_t__ f_buf_blkno; char* f_buf; size_t f_size; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {int (* dv_strategy ) (int ,int ,int ,size_t,char*,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ,int ,size_t,char*,size_t*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct open_file *VAR_3, char **VAR_4, size_t *VAR_5)
{
 struct file *VAR_6 = (struct file *)VAR_3->f_fsdata;
 daddr_t VAR_7, VAR_8;
 int VAR_9 = 0;
 size_t VAR_10;

 VAR_7 = VAR_6->f_off / VAR_2 + VAR_6->f_bno;
 VAR_8 = VAR_6->f_off % VAR_2;

 if (VAR_7 != VAR_6->f_buf_blkno) {
  if (VAR_6->f_buf == (char *)0)
   VAR_6->f_buf = FUNC_1(VAR_2);

  FUNC_3(16);
  VAR_9 = VAR_3->f_dev->dv_strategy(VAR_3->f_devdata, VAR_1,
      FUNC_0(VAR_7), VAR_2,
      VAR_6->f_buf, &VAR_10);
  if (VAR_9)
   return (VAR_9);
  if (VAR_10 != VAR_2)
   return (VAR_0);

  VAR_6->f_buf_blkno = VAR_7;
 }

 *VAR_4 = VAR_6->f_buf + VAR_8;
 *VAR_5 = VAR_2 - VAR_8;

 if (*VAR_5 > VAR_6->f_size - VAR_6->f_off)
  *VAR_5 = VAR_6->f_size - VAR_6->f_off;
 return (VAR_9);
}
