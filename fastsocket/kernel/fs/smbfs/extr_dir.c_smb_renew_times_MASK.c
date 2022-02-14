
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; struct dentry* d_parent; int d_time; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct dentry * VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->d_lock);
 for (;;) {
  struct dentry *VAR_2;

  VAR_1->d_time = VAR_0;
  if (FUNC_0(VAR_1))
   break;
  VAR_2 = VAR_1->d_parent;
  FUNC_1(VAR_2);
  FUNC_4(&VAR_1->d_lock);
  FUNC_2(VAR_1);
  VAR_1 = VAR_2;
  FUNC_3(&VAR_1->d_lock);
 }
 FUNC_4(&VAR_1->d_lock);
 FUNC_2(VAR_1);
}
