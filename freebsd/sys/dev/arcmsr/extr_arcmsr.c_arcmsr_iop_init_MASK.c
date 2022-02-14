
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct AdapterControlBlock {int acb_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*,int ) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (struct AdapterControlBlock*) ;
 int FUNC_6 (struct AdapterControlBlock*) ;
 int FUNC_7 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_8(struct AdapterControlBlock *VAR_1)
{
 u_int32_t VAR_2;


 VAR_2 = FUNC_1(VAR_1);
 FUNC_7(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);

 FUNC_6(VAR_1);

 FUNC_0(VAR_1);
 FUNC_3(VAR_1);

 FUNC_2(VAR_1, VAR_2);
 VAR_1->acb_flags |= VAR_0;
}
