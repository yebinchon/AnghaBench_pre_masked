
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(uint16_t VAR_1, uint8_t* VAR_2, size_t VAR_3)
{
 uint16_t VAR_4;
 if(VAR_1 != VAR_0)
  return 0;
 if(VAR_3 < 2)
  return 0;
 FUNC_0(&VAR_4, VAR_2, 2);
 VAR_4 = FUNC_1(VAR_4);
 return (int)VAR_4;
}
