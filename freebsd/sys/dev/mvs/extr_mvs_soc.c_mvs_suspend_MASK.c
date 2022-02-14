
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvs_controller {int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct mvs_controller* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct mvs_controller *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);

 FUNC_0(VAR_2->r_mem, VAR_0, 0x00000000);
 return 0;
}
