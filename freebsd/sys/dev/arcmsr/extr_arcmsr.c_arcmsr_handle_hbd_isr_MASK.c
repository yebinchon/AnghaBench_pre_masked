
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct AdapterControlBlock {int outbound_int_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4( struct AdapterControlBlock *VAR_8)
{
 u_int32_t VAR_9;
 u_int32_t VAR_10;





 VAR_9 = FUNC_0(VAR_5, 0, VAR_6) & VAR_8->outbound_int_enable;
 if(!(VAR_9 & VAR_3)) {

  return;
 }

 VAR_10 = FUNC_0(VAR_5, 0, VAR_7) ;
 FUNC_1(VAR_5, 0, VAR_7, VAR_0);

 if(VAR_9 & VAR_2) {
  FUNC_2(VAR_8);
 }

 if(VAR_9 & VAR_4) {
  FUNC_3(VAR_8);
 }

 FUNC_1(VAR_5, 0, VAR_7, VAR_10 | VAR_1);

}
