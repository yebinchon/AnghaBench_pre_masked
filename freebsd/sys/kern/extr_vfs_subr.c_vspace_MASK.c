
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_7;

 VAR_2 = FUNC_0(VAR_0 - VAR_6, 100);
 VAR_4 = VAR_2 / 11;
 VAR_5 = VAR_4 / 2;
 if (VAR_3 > VAR_0)
  return (0);
 VAR_7 = VAR_0 - VAR_3;
 if (VAR_1 > VAR_6)
  VAR_7 += VAR_1 - VAR_6;
 return (VAR_7);
}
