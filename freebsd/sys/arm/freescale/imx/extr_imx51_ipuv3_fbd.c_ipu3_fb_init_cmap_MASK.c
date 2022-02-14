
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_1(uint32_t *VAR_1, int VAR_2)
{

 switch (VAR_2) {
 case 8:
  return (FUNC_0(VAR_1, VAR_0,
      0x7, 5, 0x7, 2, 0x3, 0));
 case 15:
  return (FUNC_0(VAR_1, VAR_0,
      0x1f, 10, 0x1f, 5, 0x1f, 0));
 case 16:
  return (FUNC_0(VAR_1, VAR_0,
      0x1f, 11, 0x3f, 5, 0x1f, 0));
 case 24:
 case 32:
  return (FUNC_0(VAR_1, VAR_0,
      0xff, 0, 0xff, 8, 0xff, 16));
 default:
  return (1);
 }
}
