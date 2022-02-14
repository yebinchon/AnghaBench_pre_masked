
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdev {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {int cdp_inode; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct cdev*) ;

dev_t
FUNC_1(struct cdev *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_1)->cdp_inode);
}
