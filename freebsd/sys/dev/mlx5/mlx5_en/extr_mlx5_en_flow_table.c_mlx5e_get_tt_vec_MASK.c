
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_eth_addr_info {int addr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_0 (int ) ;

__attribute__((used)) static u32
FUNC_1(struct mlx5e_eth_addr_info *VAR_7, int VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 switch (VAR_8) {
 case 131:
  VAR_9 = FUNC_0(VAR_7->addr);
  switch (VAR_9) {
  case 128:
   VAR_10 =
       (1 << VAR_2) |
       (1 << VAR_5) |
       (1 << VAR_3) |
       (1 << VAR_6) |
       (1 << VAR_1) |
       (1 << VAR_4) |
       (1 << VAR_0) |
       0;
   break;

  case 130:
   VAR_10 =
       (1 << VAR_3) |
       (1 << VAR_1) |
       0;
   break;

  case 129:
   VAR_10 =
       (1 << VAR_6) |
       (1 << VAR_4) |
       0;
   break;

  default:
   VAR_10 =
       (1 << VAR_0) |
       0;
   break;
  }
  break;

 case 132:
  VAR_10 =
      (1 << VAR_3) |
      (1 << VAR_6) |
      (1 << VAR_1) |
      (1 << VAR_4) |
      (1 << VAR_0) |
      0;
  break;

 default:
  VAR_10 =
      (1 << VAR_2) |
      (1 << VAR_5) |
      (1 << VAR_3) |
      (1 << VAR_6) |
      (1 << VAR_1) |
      (1 << VAR_4) |
      (1 << VAR_0) |
      0;
  break;
 }

 return (VAR_10);
}
