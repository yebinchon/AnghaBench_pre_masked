
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(KBDC VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = (VAR_3 >> 6) & 0x03;
 if (FUNC_0(VAR_2, VAR_4) != VAR_4)
  return (VAR_0);
 VAR_4 = (VAR_3 >> 4) & 0x03;
 if (FUNC_0(VAR_2, VAR_4) != VAR_4)
  return (VAR_0);
 VAR_4 = (VAR_3 >> 2) & 0x03;
 if (FUNC_0(VAR_2, VAR_4) != VAR_4)
  return (VAR_0);
 VAR_4 = (VAR_3 >> 0) & 0x03;
 if (FUNC_0(VAR_2, VAR_4) != VAR_4)
  return (VAR_0);
 return (VAR_1);
}
