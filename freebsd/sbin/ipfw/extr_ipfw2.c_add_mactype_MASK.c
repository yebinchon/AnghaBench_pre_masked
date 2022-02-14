
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ipfw_insn_u16 ;
struct TYPE_4__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static ipfw_insn *
FUNC_3(ipfw_insn *VAR_3, char *VAR_4, int VAR_5)
{
 if (!VAR_4)
  FUNC_0(VAR_0, "missing MAC type");
 if (FUNC_2(VAR_4, "any") != 0) {
  FUNC_1((ipfw_insn_u16 *)VAR_3, VAR_4, VAR_1,
      VAR_5);
  VAR_3->opcode = VAR_2;
  return VAR_3;
 } else
  return ((void*)0);
}
