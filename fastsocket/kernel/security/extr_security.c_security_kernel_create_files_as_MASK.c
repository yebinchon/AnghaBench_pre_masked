
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int (* kernel_create_files_as ) (struct cred*,struct inode*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cred*,struct inode*) ;

int FUNC_1(struct cred *VAR_1, struct inode *VAR_2)
{
 return VAR_0->kernel_create_files_as(VAR_1, VAR_2);
}
