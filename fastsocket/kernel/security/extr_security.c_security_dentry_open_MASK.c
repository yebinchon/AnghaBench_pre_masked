
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int (* dentry_open ) (struct file*,struct cred const*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct file*,struct cred const*) ;

int FUNC_1(struct file *VAR_1, const struct cred *VAR_2)
{
 return VAR_0->dentry_open(VAR_1, VAR_2);
}
