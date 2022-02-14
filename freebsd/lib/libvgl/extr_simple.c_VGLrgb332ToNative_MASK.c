
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
typedef int byte ;


 int FUNC_0 (int,int,int) ;

u_long
FUNC_1(byte VAR_0)
{
  uint16_t VAR_1, VAR_2, VAR_3;


  VAR_1 = ((VAR_0 & 0xe0) >> 5) * 0xffff / 7;
  VAR_2 = ((VAR_0 & 0x1c) >> 2) * 0xffff / 7;
  VAR_3 = ((VAR_0 & 0x03) >> 0) * 0xffff / 3;

  return FUNC_0(VAR_1, VAR_2, VAR_3);
}
