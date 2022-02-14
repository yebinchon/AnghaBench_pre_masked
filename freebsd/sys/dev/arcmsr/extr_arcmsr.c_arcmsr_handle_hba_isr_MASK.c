
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct AdapterControlBlock {int outbound_int_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5( struct AdapterControlBlock *VAR_5)
{
 u_int32_t VAR_6;





 VAR_6 = FUNC_0(VAR_3, 0, VAR_4) & VAR_5->outbound_int_enable;
 if(!VAR_6) {

  return;
 }
 FUNC_1(VAR_3, 0, VAR_4, VAR_6);

 if(VAR_6 & VAR_0) {
  FUNC_2(VAR_5);
 }

 if(VAR_6 & VAR_2) {
  FUNC_4(VAR_5);
 }
 if(VAR_6 & VAR_1) {
  FUNC_3(VAR_5);
 }
}
