
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mvs_channel {scalar_t__ numrslots; int pm_level; int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mvs_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 device_t VAR_5 = (device_t)VAR_4;
 struct mvs_channel *VAR_6 = FUNC_2(VAR_5);
 uint32_t VAR_7;

 if (VAR_6->numrslots != 0)
  return;

 VAR_7 = FUNC_0(VAR_6->r_mem, VAR_0);
 VAR_7 &= ~VAR_1;
 if (VAR_6->pm_level == 4)
  VAR_7 |= VAR_2;
 else
  VAR_7 |= VAR_3;
 FUNC_1(VAR_6->r_mem, VAR_0, VAR_7);
}
