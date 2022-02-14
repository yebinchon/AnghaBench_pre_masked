
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int commit_sem; int space_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ubifs_info*,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct ubifs_info*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct ubifs_info *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0;

again:
 FUNC_5(&VAR_2->commit_sem);
 VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return 0;
 FUNC_13(&VAR_2->commit_sem);

 if (VAR_5 == -VAR_1) {






  if (VAR_7++ < 2) {
   FUNC_4("no space, retry");
   VAR_5 = -VAR_0;
  }







 }

 if (VAR_5 != -VAR_0)
  goto out;





 if (VAR_6 > 128) {




  FUNC_10("stuck in space allocation");
  VAR_5 = -VAR_1;
  goto out;
 } else if (VAR_6 > 32)
  FUNC_12("too many space allocation re-tries (%d)",
      VAR_6);

 FUNC_4("-EAGAIN, commit and retry (retried %d times)",
  VAR_6);
 VAR_6 += 1;

 VAR_5 = FUNC_11(VAR_2);
 if (VAR_5)
  return VAR_5;
 goto again;

out:
 FUNC_10("cannot reserve %d bytes in jhead %d, error %d",
    VAR_4, VAR_3, VAR_5);
 if (VAR_5 == -VAR_1) {

  FUNC_6(&VAR_2->commit_sem);
  FUNC_8(&VAR_2->space_lock);
  FUNC_3();
  FUNC_1(VAR_2);
  FUNC_9(&VAR_2->space_lock);
  FUNC_2(VAR_2);
  VAR_6 = FUNC_0(VAR_2);
  FUNC_14(&VAR_2->commit_sem);
 }
 return VAR_5;
}
