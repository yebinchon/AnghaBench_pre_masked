
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int emu10kx_lock; int * cdev; scalar_t__ emu10kx_isopen; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct emu_sc_info *VAR_1)
{
 FUNC_2(&VAR_1->emu10kx_lock);
 if (VAR_1->emu10kx_isopen) {
  FUNC_3(&VAR_1->emu10kx_lock);
  return (VAR_0);
 }
 if (VAR_1->cdev)
  FUNC_0(VAR_1->cdev);
 VAR_1->cdev = ((void*)0);

 FUNC_1(&VAR_1->emu10kx_lock);
 return (0);
}
