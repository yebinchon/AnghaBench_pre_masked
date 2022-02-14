
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {TYPE_3__* ki_filp; } ;
struct inode {int i_alloc_sem; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct TYPE_6__ {TYPE_2__ f_path; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kiocb*,int,int ) ;
 int FUNC_2 (struct kiocb*) ;
 int FUNC_3 (struct kiocb*) ;
 int FUNC_4 (struct kiocb*) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct kiocb *VAR_0,
        loff_t VAR_1,
        ssize_t VAR_2,
        void *VAR_3,
        int VAR_4,
        bool VAR_5)
{
 struct inode *VAR_6 = VAR_0->ki_filp->f_path.dentry->d_inode;
 int VAR_7;


 FUNC_0(!FUNC_3(VAR_0));

 FUNC_2(VAR_0);

 VAR_7 = FUNC_4(VAR_0);
 if (!VAR_7)
  FUNC_6(&VAR_6->i_alloc_sem);
 FUNC_5(VAR_6, VAR_7);

 if (VAR_5)
  FUNC_1(VAR_0, VAR_4, 0);
}
