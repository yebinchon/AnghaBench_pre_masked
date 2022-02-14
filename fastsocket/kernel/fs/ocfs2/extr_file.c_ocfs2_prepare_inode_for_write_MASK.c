
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int ip_dyn_features; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,scalar_t__,size_t) ;
 int FUNC_5 (struct inode*,scalar_t__,size_t) ;
 int FUNC_6 (struct inode*,int *,int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*,scalar_t__,size_t,int*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct dentry*) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_1,
      loff_t *VAR_2,
      size_t VAR_3,
      int VAR_4,
      int *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 struct inode *VAR_8 = VAR_1->d_inode;
 loff_t VAR_9, VAR_10;





 for(;;) {
  VAR_6 = FUNC_6(VAR_8, ((void*)0), VAR_7);
  if (VAR_6 < 0) {
   VAR_7 = -1;
   FUNC_3(VAR_6);
   goto out;
  }
  if (FUNC_10(VAR_1)) {
   if (VAR_7 == 0) {
    FUNC_7(VAR_8, VAR_7);
    VAR_7 = 1;
    continue;
   }

   VAR_6 = FUNC_9(VAR_8);
   if (VAR_6 < 0) {
    FUNC_3(VAR_6);
    goto out_unlock;
   }
  }



  if (VAR_4) {
   VAR_9 = FUNC_1(VAR_8);
   FUNC_2(0, "O_APPEND: inode->i_size=%llu\n", VAR_9);
  } else {
   VAR_9 = *VAR_2;
  }

  VAR_10 = VAR_9 + VAR_3;

  VAR_6 = FUNC_5(VAR_8, VAR_9, VAR_3);
  if (VAR_6 == 1) {
   FUNC_7(VAR_8, VAR_7);
   VAR_7 = -1;

   VAR_6 = FUNC_8(VAR_8,
              VAR_9,
              VAR_3,
              &VAR_7);
  }

  if (VAR_6 < 0) {
   FUNC_3(VAR_6);
   goto out_unlock;
  }





  if (!VAR_5 || !(*VAR_5))
   break;





  if (FUNC_0(VAR_8)->ip_dyn_features & VAR_0) {
   *VAR_5 = 0;
   break;
  }







  if (VAR_10 > FUNC_1(VAR_8)) {
   *VAR_5 = 0;
   break;
  }







  VAR_6 = FUNC_4(VAR_8, VAR_9, VAR_3);
  if (VAR_6 == 1) {
   *VAR_5 = 0;
   VAR_6 = 0;
  } else if (VAR_6 < 0)
   FUNC_3(VAR_6);
  break;
 }

 if (VAR_4)
  *VAR_2 = VAR_9;

out_unlock:
 if (VAR_7 >= 0)
  FUNC_7(VAR_8, VAR_7);

out:
 return VAR_6;
}
