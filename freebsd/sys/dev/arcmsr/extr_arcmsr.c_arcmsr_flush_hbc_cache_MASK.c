
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct AdapterControlBlock*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct AdapterControlBlock *VAR_5)
{
 int VAR_6 = 30;

 FUNC_0(VAR_2, 0, VAR_4, VAR_1);
 FUNC_0(VAR_2, 0, VAR_3, VAR_0);
 do {
  if(FUNC_1(VAR_5)) {
   break;
  } else {
   VAR_6--;
  }
 }while(VAR_6 != 0);
}
