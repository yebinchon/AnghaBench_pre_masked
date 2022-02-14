
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct AdapterControlBlock {int acb_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*,int ) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_4(struct AdapterControlBlock *VAR_1)
{
 u_int32_t VAR_2;

 if(VAR_1 != ((void*)0)) {

  if(VAR_1->acb_flags & VAR_0) {
   VAR_2 = FUNC_0(VAR_1);
   FUNC_3(VAR_1);
   FUNC_2(VAR_1);
   FUNC_1(VAR_1, VAR_2);
  }
 }
}
