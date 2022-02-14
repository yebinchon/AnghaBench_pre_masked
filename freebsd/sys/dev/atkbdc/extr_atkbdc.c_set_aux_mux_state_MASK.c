
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(KBDC VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (FUNC_1(VAR_1, VAR_0) == 0 ||
     FUNC_2(VAR_1, 0xF0) == 0 ||
     FUNC_0(VAR_1) != 0xF0)
  return (-1);

 if (FUNC_1(VAR_1, VAR_0) == 0 ||
     FUNC_2(VAR_1, 0x56) == 0 ||
     FUNC_0(VAR_1) != 0x56)
  return (-1);

 VAR_3 = VAR_2 ? 0xa4 : 0xa5;
 if (FUNC_1(VAR_1, VAR_0) == 0 ||
     FUNC_2(VAR_1, VAR_3) == 0 ||
     (VAR_4 = FUNC_0(VAR_1)) == VAR_3)
  return (-1);

 return (VAR_4);
}
