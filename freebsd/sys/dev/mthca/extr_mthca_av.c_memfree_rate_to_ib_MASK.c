
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum ib_rate { ____Placeholder_ib_rate } ib_rate ;






 int FUNC_0 (int) ;

__attribute__((used)) static enum ib_rate FUNC_1(u8 VAR_0, u8 VAR_1)
{
 switch (VAR_0) {
 case 131:
  return FUNC_0(VAR_1 >> 3);
 case 128:
  return FUNC_0(VAR_1 >> 2);
 case 129:
  return FUNC_0(VAR_1 >> 1);
 case 130:
 default:
  return FUNC_0(VAR_1);
 }
}
