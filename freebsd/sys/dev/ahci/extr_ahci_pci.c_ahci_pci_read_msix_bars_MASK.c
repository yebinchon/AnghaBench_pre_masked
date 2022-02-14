
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, uint8_t *VAR_6, uint8_t *VAR_7)
{
 int VAR_8 = 0, VAR_9;
 uint32_t VAR_10;

 if ((VAR_6 == ((void*)0)) || (VAR_7 == ((void*)0)))
  return (VAR_0);

 VAR_9 = FUNC_1(VAR_5, VAR_4, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_0);

 VAR_10 = FUNC_2(VAR_5, VAR_8 + VAR_3, 4);
 *VAR_6 = FUNC_0(VAR_10 & VAR_1);

 VAR_10 = FUNC_2(VAR_5, VAR_8 + VAR_2, 4);
 *VAR_7 = FUNC_0(VAR_10 & VAR_1);

 return (0);
}
