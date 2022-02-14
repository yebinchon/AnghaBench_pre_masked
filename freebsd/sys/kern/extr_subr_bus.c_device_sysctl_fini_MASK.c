
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {int * sysctl_tree; int sysctl_ctx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0)
{
 if (VAR_0->sysctl_tree == ((void*)0))
  return;
 FUNC_0(&VAR_0->sysctl_ctx);
 VAR_0->sysctl_tree = ((void*)0);
}
