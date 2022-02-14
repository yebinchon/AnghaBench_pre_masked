
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static int
FUNC_2(unsigned VAR_0, u8 VAR_1, bool VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_0), VAR_4;

 VAR_4 = (VAR_2) ? (VAR_3|VAR_1) : (VAR_3 & ~VAR_1);


 FUNC_1(VAR_4, VAR_0);
 if (VAR_4 != VAR_3)
  return 1;

 return 0;
}
