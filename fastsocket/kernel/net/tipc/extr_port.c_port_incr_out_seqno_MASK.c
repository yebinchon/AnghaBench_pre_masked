
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct TYPE_2__ {struct tipc_msg phdr; } ;
struct port {TYPE_1__ publ; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;

__attribute__((used)) static void FUNC_4(struct port *VAR_0)
{
 struct tipc_msg *VAR_1 = &VAR_0->publ.phdr;

 if (FUNC_0(!FUNC_1(VAR_1)))
  return;
 FUNC_2(VAR_1, (FUNC_3(VAR_1) + 1));
}
