
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef TYPE_2__* devclass_t ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {scalar_t__ nameunit; int * sysctl_tree; TYPE_2__* devclass; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0)
{
 devclass_t VAR_1 = VAR_0->devclass;

 if (VAR_0->sysctl_tree == ((void*)0))
  return;
 FUNC_1(VAR_0->sysctl_tree, VAR_0->nameunit + FUNC_0(VAR_1->name));
}
