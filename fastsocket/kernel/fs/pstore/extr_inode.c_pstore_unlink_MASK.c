
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pstore_private {TYPE_2__* psi; int count; int id; int type; } ;
struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int (* erase ) (int ,int ,int ,int ,TYPE_2__*) ;} ;
struct TYPE_3__ {int i_ctime; struct pstore_private* i_private; } ;


 int FUNC_0 (struct inode*,struct dentry*) ;
 int FUNC_1 (int ,int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct pstore_private *VAR_2 = VAR_1->d_inode->i_private;

 if (VAR_2->psi->erase)
  VAR_2->psi->erase(VAR_2->type, VAR_2->id, VAR_2->count,
         VAR_1->d_inode->i_ctime, VAR_2->psi);

 return FUNC_0(VAR_0, VAR_1);
}
