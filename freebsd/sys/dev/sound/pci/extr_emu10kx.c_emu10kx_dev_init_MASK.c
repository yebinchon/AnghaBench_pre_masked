
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emu_sc_info {TYPE_1__* cdev; int dev; int emu10kx_lock; } ;
struct TYPE_2__ {struct emu_sc_info* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int *,int ,int ,int ,int,char*,int) ;
 int FUNC_4 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct emu_sc_info *VAR_4)
{
 int VAR_5;

 FUNC_4(&VAR_4->emu10kx_lock, FUNC_1(VAR_4->dev), "kxdevlock", 0);
 VAR_5 = FUNC_2(VAR_4->dev);

 VAR_4->cdev = FUNC_3(&VAR_3, FUNC_0(VAR_5), VAR_2, VAR_1, 0640, "emu10kx%d", VAR_5);
 if (VAR_4->cdev != ((void*)0)) {
  VAR_4->cdev->si_drv1 = VAR_4;
  return (0);
 }
 return (VAR_0);
}
