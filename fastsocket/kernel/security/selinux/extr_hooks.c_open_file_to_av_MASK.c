
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct file *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0);

 VAR_1 |= FUNC_1(VAR_0->f_path.dentry->d_inode);

 return VAR_1;
}
