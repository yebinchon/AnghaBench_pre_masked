
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 device_t VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_4);


 if (FUNC_0(VAR_4))
  return (0);


 VAR_6 = FUNC_2(VAR_5, VAR_0, 4);
 VAR_7 = FUNC_2(VAR_5, VAR_1, 4);


 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_2;
 FUNC_3(VAR_5, VAR_0, VAR_6, 4);


 VAR_7 |= (VAR_2|VAR_3);
 FUNC_3(VAR_5, VAR_1, VAR_7, 4);

 return (0);
}
