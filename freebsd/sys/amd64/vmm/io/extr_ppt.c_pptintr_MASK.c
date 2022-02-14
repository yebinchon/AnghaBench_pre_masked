
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pptintr_arg {int msg_data; int addr; struct pptdev* pptdev; } ;
struct TYPE_2__ {scalar_t__ startrid; } ;
struct pptdev {TYPE_1__ msi; int * vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2)
{
 struct pptdev *VAR_3;
 struct pptintr_arg *VAR_4;

 VAR_4 = VAR_2;
 VAR_3 = VAR_4->pptdev;

 if (VAR_3->vm != ((void*)0))
  FUNC_0(VAR_3->vm, VAR_4->addr, VAR_4->msg_data);
 else {




 }





 if (VAR_3->msi.startrid == 0)
  return (VAR_1);
 else
  return (VAR_0);
}
