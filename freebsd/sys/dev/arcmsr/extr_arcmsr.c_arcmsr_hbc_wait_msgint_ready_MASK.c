
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct AdapterControlBlock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u_int8_t FUNC_3(struct AdapterControlBlock *VAR_7)
{
 u_int32_t VAR_8;
 u_int8_t VAR_9 = 0x00;

 do {
  for(VAR_8=0; VAR_8 < 100; VAR_8++) {
   if(FUNC_0(VAR_3, 0, VAR_5) & VAR_0) {
    FUNC_1(VAR_3, 0, VAR_6, VAR_1);
    return VAR_4;
   }
   FUNC_2(10000);
  }
 }while(VAR_9++ < 20);
 return (VAR_2);
}
