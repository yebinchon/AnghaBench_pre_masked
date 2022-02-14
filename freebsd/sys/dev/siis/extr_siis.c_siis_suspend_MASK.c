
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siis_controller {int gctl; int r_gmem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct siis_controller* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct siis_controller *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 VAR_3->gctl |= VAR_1;
 FUNC_0(VAR_3->r_gmem, VAR_0, VAR_3->gctl);
 return 0;
}
