
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siis_controller {int gctl; int r_gmem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct siis_controller* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct siis_controller *VAR_4 = FUNC_3(VAR_3);


 if (FUNC_4(VAR_3) < 1024)
  FUNC_5(VAR_3, 1024);

 VAR_4->gctl |= VAR_1;
 FUNC_0(VAR_4->r_gmem, VAR_0, VAR_4->gctl);
 FUNC_1(10000);

 VAR_4->gctl &= ~(VAR_1 | VAR_2);
 VAR_4->gctl |= 0x0000000f;
 FUNC_0(VAR_4->r_gmem, VAR_0, VAR_4->gctl);
 return (FUNC_2(VAR_3));
}
