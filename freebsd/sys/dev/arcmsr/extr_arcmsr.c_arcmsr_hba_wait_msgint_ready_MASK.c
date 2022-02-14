
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct AdapterControlBlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;

__attribute__((used)) static u_int8_t FUNC_3(struct AdapterControlBlock *VAR_5)
{
 u_int32_t VAR_6;
 u_int8_t VAR_7 = 0x00;

 do {
  for(VAR_6=0; VAR_6 < 100; VAR_6++) {
   if(FUNC_0(VAR_2, 0, VAR_4) & VAR_0) {
    FUNC_1(VAR_2, 0, VAR_4, VAR_0);
    return VAR_3;
   }
   FUNC_2(10000);
  }
 }while(VAR_7++ < 20);
 return (VAR_1);
}
