
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 VAR_7 = FUNC_1(VAR_4, VAR_2, 4) |
     FUNC_1(VAR_4, VAR_3, 4);

 VAR_7 |= VAR_5;
 VAR_7 &= ~VAR_6;


 VAR_8 = FUNC_1(VAR_4, VAR_1, 4);
 VAR_9 = FUNC_1(VAR_4, VAR_0, 4);

 FUNC_2(VAR_4, VAR_2, VAR_7 & VAR_8, 4);
 FUNC_2(VAR_4, VAR_3, VAR_7 & VAR_9, 4);

 FUNC_0(VAR_4, "Port routing mask set to 0x%08x\n", VAR_7);

 return (0);
}
