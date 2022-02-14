
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct AdapterControlBlock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3( struct AdapterControlBlock *VAR_4)
{
 u_int32_t VAR_5;





 VAR_5 = FUNC_0(VAR_2, 0, VAR_3) &
  (VAR_1 |
  VAR_0);
 if(!VAR_5) {

  return;
 }
 do {

  if(VAR_5 & VAR_0) {
   FUNC_1(VAR_4);
  }

  if(VAR_5 & VAR_1) {
   FUNC_2(VAR_4);
  }
  VAR_5 = FUNC_0(VAR_2, 0, VAR_3);
 } while (VAR_5 & (VAR_1 | VAR_0));
}
