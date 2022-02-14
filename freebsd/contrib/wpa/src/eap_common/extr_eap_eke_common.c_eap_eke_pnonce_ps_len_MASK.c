
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(u8 VAR_5)
{
 int VAR_6;

 if (VAR_5 == VAR_1)
  VAR_6 = VAR_3;
 else if (VAR_5 == VAR_2)
  VAR_6 = VAR_4;
 else
  return -1;

 return VAR_0 + 2 * 16 + VAR_6;
}
