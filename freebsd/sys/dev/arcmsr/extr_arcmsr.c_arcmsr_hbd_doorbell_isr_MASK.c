
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct AdapterControlBlock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct AdapterControlBlock *VAR_6)
{
 u_int32_t VAR_7;
 VAR_7 = FUNC_0(VAR_4, 0, VAR_5) & VAR_0;
 if(VAR_7)
  FUNC_1(VAR_4, 0, VAR_5, VAR_7);
 while( VAR_7 & VAR_0 ) {
  if(VAR_7 & VAR_2) {
   FUNC_4(VAR_6);
  }
  if(VAR_7 & VAR_1) {
   FUNC_3(VAR_6);
  }
  if(VAR_7 & VAR_3) {
   FUNC_2(VAR_6);
  }
  VAR_7 = FUNC_0(VAR_4, 0, VAR_5) & VAR_0;
  if(VAR_7)
   FUNC_1(VAR_4, 0, VAR_5, VAR_7);
 }
}
