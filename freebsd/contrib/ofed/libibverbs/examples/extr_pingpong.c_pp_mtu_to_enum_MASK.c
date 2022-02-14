
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ibv_mtu { ____Placeholder_ibv_mtu } ibv_mtu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

enum ibv_mtu FUNC_0(int VAR_5)
{
 switch (VAR_5) {
 case 256: return VAR_2;
 case 512: return VAR_4;
 case 1024: return VAR_0;
 case 2048: return VAR_1;
 case 4096: return VAR_3;
 default: return 0;
 }
}
