
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;
struct file {int f_flags; struct address_space* f_mapping; } ;
struct address_space {int * backing_dev_info; struct inode* host; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int * backing_dev_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 size_t FUNC_1 (struct address_space*,int,int,int) ;
 size_t FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 size_t FUNC_4 (struct kiocb*,struct iovec const*,unsigned long,int,int*,size_t,size_t) ;
 size_t FUNC_5 (struct kiocb*,struct iovec const*,unsigned long*,int,int*,size_t,size_t) ;
 size_t FUNC_6 (struct iovec const*,unsigned long*,size_t*,int ) ;
 size_t FUNC_7 (struct file*,int*,size_t*,int ) ;
 int FUNC_8 (struct address_space*,int,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;

ssize_t FUNC_12(struct kiocb *VAR_8, const struct iovec *VAR_9,
     unsigned long VAR_10, loff_t *VAR_11)
{
 struct file *VAR_12 = VAR_8->ki_filp;
 struct address_space * VAR_13 = VAR_12->f_mapping;
 size_t VAR_14;
 size_t VAR_15;
 struct inode *VAR_16 = VAR_13->host;
 loff_t VAR_17;
 ssize_t VAR_18;
 ssize_t VAR_19;

 VAR_14 = 0;
 VAR_19 = FUNC_6(VAR_9, &VAR_10, &VAR_14, VAR_6);
 if (VAR_19)
  return VAR_19;

 VAR_15 = VAR_14;
 VAR_17 = *VAR_11;

 if (!FUNC_9(VAR_16->i_sb))
  FUNC_11(VAR_16->i_sb, VAR_2);


 VAR_7->backing_dev_info = VAR_13->backing_dev_info;
 VAR_18 = 0;

 VAR_19 = FUNC_7(VAR_12, &VAR_17, &VAR_15, FUNC_0(VAR_16->i_mode));
 if (VAR_19)
  goto out;

 if (VAR_15 == 0)
  goto out;

 VAR_19 = FUNC_2(VAR_12);
 if (VAR_19)
  goto out;

 FUNC_3(VAR_12);


 if (FUNC_10(VAR_12->f_flags & VAR_0)) {
  loff_t VAR_20;
  ssize_t VAR_21;

  VAR_18 = FUNC_5(VAR_8, VAR_9, &VAR_10, VAR_17,
       VAR_11, VAR_15, VAR_14);
  if (VAR_18 < 0 || VAR_18 == VAR_15)
   goto out;




  VAR_17 += VAR_18;
  VAR_15 -= VAR_18;
  VAR_21 = FUNC_4(VAR_8, VAR_9,
      VAR_10, VAR_17, VAR_11, VAR_15,
      VAR_18);







  if (VAR_21 < 0) {
   VAR_19 = VAR_21;
   goto out;
  }






  VAR_20 = VAR_17 + VAR_21 - VAR_18 - 1;
  VAR_19 = FUNC_1(VAR_12->f_mapping, VAR_17, VAR_20,
         VAR_4|
         VAR_5|
         VAR_3);
  if (VAR_19 == 0) {
   VAR_18 = VAR_21;
   FUNC_8(VAR_13,
       VAR_17 >> VAR_1,
       VAR_20 >> VAR_1);
  } else {




  }
 } else {
  VAR_18 = FUNC_4(VAR_8, VAR_9, VAR_10,
    VAR_17, VAR_11, VAR_15, VAR_18);
 }
out:
 VAR_7->backing_dev_info = ((void*)0);
 return VAR_18 ? VAR_18 : VAR_19;
}
