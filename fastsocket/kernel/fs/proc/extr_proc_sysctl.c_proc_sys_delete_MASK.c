
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int d_inode; } ;
struct TYPE_4__ {TYPE_1__* sysctl; } ;
struct TYPE_3__ {int unregistering; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_0)
{
 return !!FUNC_0(VAR_0->d_inode)->sysctl->unregistering;
}
