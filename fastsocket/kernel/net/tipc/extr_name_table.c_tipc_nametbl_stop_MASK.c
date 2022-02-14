
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int * types; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 u32 VAR_3;

 if (!VAR_0.types)
  return;



 FUNC_3(&VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (!FUNC_1(&VAR_0.types[VAR_3]))
   FUNC_0("tipc_nametbl_stop(): hash chain %u is non-null\n", VAR_3);
 }
 FUNC_2(VAR_0.types);
 VAR_0.types = ((void*)0);
 FUNC_4(&VAR_1);
}
