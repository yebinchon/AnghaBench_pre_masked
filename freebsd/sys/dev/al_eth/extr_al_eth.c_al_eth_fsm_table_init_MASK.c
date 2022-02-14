
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct al_eth_adapter {int hal_adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void
FUNC_2(struct al_eth_adapter *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  uint8_t VAR_9 = FUNC_0(VAR_8);
  switch (VAR_9) {
  case 132:
  case 131:
  case 129:
  case 128:
   VAR_7 = VAR_4 |
       VAR_2;
   break;
  case 130:
  case 133:
   VAR_7 = VAR_3 |
       VAR_2;
   break;
  default:
   VAR_7 = VAR_0 |
       VAR_1;
  }
  FUNC_1(&VAR_6->hal_adapter, VAR_8, VAR_7);
 }
}
