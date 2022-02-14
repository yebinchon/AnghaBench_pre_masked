
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum ib_mtu
FUNC_0(u16 VAR_5)
{
 enum ib_mtu VAR_6;

 switch (VAR_5) {
 case 256:
  VAR_6 = VAR_2;
  break;

 case 512:
  VAR_6 = VAR_4;
  break;

 case 1024:
  VAR_6 = VAR_0;
  break;

 case 2048:
  VAR_6 = VAR_1;
  break;

 case 4096:
  VAR_6 = VAR_3;
  break;

 default:
  VAR_6 = VAR_0;
  break;
 }
 return (VAR_6);
}
