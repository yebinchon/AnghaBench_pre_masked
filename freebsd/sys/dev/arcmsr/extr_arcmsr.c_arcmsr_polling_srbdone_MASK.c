
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CommandControlBlock {int dummy; } ;
struct AdapterControlBlock {int adapter_type; } ;







 int FUNC_0 (struct AdapterControlBlock*,struct CommandControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*,struct CommandControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*,struct CommandControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*,struct CommandControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*,struct CommandControlBlock*) ;

__attribute__((used)) static void FUNC_5(struct AdapterControlBlock *VAR_0, struct CommandControlBlock *VAR_1)
{
 switch (VAR_0->adapter_type) {
 case 132: {
   FUNC_0(VAR_0, VAR_1);
  }
  break;
 case 131: {
   FUNC_1(VAR_0, VAR_1);
  }
  break;
 case 130: {
   FUNC_2(VAR_0, VAR_1);
  }
  break;
 case 129: {
   FUNC_3(VAR_0, VAR_1);
  }
  break;
 case 128: {
   FUNC_4(VAR_0, VAR_1);
  }
  break;
 }
}
