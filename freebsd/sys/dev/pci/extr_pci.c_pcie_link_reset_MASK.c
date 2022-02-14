
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;

int
FUNC_4(device_t VAR_6, int VAR_7)
{
 uint16_t VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_7 + VAR_4, 2);
 VAR_8 |= VAR_1;
 FUNC_3(VAR_6, VAR_7 + VAR_4, VAR_8, 2);
 FUNC_1("pcier1", FUNC_0(20), 0, 0);
 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_2;
 FUNC_3(VAR_6, VAR_7 + VAR_4, VAR_8, 2);
 FUNC_1("pcier2", FUNC_0(100), 0, 0);
 VAR_8 = FUNC_2(VAR_6, VAR_7 + VAR_5, 2);
 return ((VAR_8 & VAR_3) != 0 ? VAR_0 : 0);
}
