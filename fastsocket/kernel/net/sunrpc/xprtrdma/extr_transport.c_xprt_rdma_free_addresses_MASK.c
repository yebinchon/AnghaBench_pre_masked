
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int * address_strings; } ;


 unsigned int VAR_0 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct rpc_xprt *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  switch (VAR_2) {
  case 128:
  case 129:
   continue;
  default:
   FUNC_0(VAR_1->address_strings[VAR_2]);
  }
}
