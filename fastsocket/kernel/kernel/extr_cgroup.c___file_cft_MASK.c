
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_2__* f_dentry; } ;
struct cftype {int dummy; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int * i_fop; } ;


 int VAR_0 ;
 struct cftype* FUNC_0 (int ) ;
 struct cftype* FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static inline struct cftype *FUNC_2(struct file *VAR_2)
{
 if (VAR_2->f_dentry->d_inode->i_fop != &VAR_1)
  return FUNC_0(-VAR_0);
 return FUNC_1(VAR_2->f_dentry);
}
