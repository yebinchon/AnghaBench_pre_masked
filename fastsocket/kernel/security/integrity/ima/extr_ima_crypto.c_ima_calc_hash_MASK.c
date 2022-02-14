
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct hash_desc {int tfm; } ;
struct file {TYPE_1__* f_dentry; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hash_desc*,char*) ;
 int FUNC_2 (struct hash_desc*,struct scatterlist*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct hash_desc*) ;
 int FUNC_5 (struct file*,scalar_t__,char*,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct scatterlist*,char*,int) ;

int FUNC_9(struct file *VAR_3, char *VAR_4)
{
 struct hash_desc VAR_5;
 struct scatterlist VAR_6[1];
 loff_t VAR_7, VAR_8 = 0;
 char *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(&VAR_5);
 if (VAR_10 != 0)
  return VAR_10;

 VAR_9 = FUNC_7(VAR_2, VAR_1);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_7 = FUNC_3(VAR_3->f_dentry->d_inode);
 while (VAR_8 < VAR_7) {
  int VAR_11;

  VAR_11 = FUNC_5(VAR_3, VAR_8, VAR_9, VAR_2);
  if (VAR_11 < 0) {
   VAR_10 = VAR_11;
   break;
  }
  if (VAR_11 == 0)
   break;
  VAR_8 += VAR_11;
  FUNC_8(VAR_6, VAR_9, VAR_11);

  VAR_10 = FUNC_2(&VAR_5, VAR_6, VAR_11);
  if (VAR_10)
   break;
 }
 FUNC_6(VAR_9);
 if (!VAR_10)
  VAR_10 = FUNC_1(&VAR_5, VAR_4);
out:
 FUNC_0(VAR_5.tfm);
 return VAR_10;
}
