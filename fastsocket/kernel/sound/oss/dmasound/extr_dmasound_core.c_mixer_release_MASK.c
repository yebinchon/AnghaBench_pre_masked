
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_6__ {TYPE_1__ mach; } ;
struct TYPE_5__ {scalar_t__ busy; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 FUNC_0();
 VAR_1.busy = 0;
 FUNC_1(VAR_0.mach.owner);
 FUNC_2();
 return 0;
}
