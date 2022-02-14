
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lvb; } ;
struct user_lock_res {scalar_t__ l_level; int l_lock; TYPE_1__ l_lksb; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct user_lock_res ip_lockres; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_2,
         char *VAR_3,
         unsigned int VAR_4)
{
 struct user_lock_res *VAR_5 = &FUNC_1(VAR_2)->ip_lockres;
 char *VAR_6 = VAR_5->l_lksb.lvb;

 FUNC_0(VAR_4 > VAR_0);

 FUNC_3(&VAR_5->l_lock);

 FUNC_0(VAR_5->l_level < VAR_1);
 FUNC_2(VAR_3, VAR_6, VAR_4);

 FUNC_4(&VAR_5->l_lock);
}
