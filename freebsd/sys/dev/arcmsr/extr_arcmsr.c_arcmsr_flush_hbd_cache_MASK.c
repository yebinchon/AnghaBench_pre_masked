
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct AdapterControlBlock*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct AdapterControlBlock *VAR_3)
{
 int VAR_4 = 30;

 FUNC_0(VAR_1, 0, VAR_2, VAR_0);
 do {
  if(FUNC_1(VAR_3)) {
   break;
  } else {
   VAR_4--;
  }
 }while(VAR_4 != 0);
}
