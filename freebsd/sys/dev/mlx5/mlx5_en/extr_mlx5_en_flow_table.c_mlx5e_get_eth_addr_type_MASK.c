
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(const u8 * VAR_4)
{
 if (FUNC_0(VAR_4) == 0)
  return (VAR_3);

 if ((VAR_4[0] == 0x01) &&
     (VAR_4[1] == 0x00) &&
     (VAR_4[2] == 0x5e) &&
     !(VAR_4[3] & 0x80))
  return (VAR_0);

 if ((VAR_4[0] == 0x33) &&
     (VAR_4[1] == 0x33))
  return (VAR_1);

 return (VAR_2);
}
