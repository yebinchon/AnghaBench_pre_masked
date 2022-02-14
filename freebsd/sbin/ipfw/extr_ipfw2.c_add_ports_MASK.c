
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ipfw_insn_u16 ;
struct TYPE_4__ {int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static ipfw_insn *
FUNC_2(ipfw_insn *VAR_1, char *VAR_2, u_char VAR_3, int VAR_4, int VAR_5)
{

 if (FUNC_1(VAR_0, VAR_2) != -1)
  return (((void*)0));

 if (FUNC_0((ipfw_insn_u16 *)VAR_1, VAR_2, VAR_3, VAR_5)) {

  VAR_1->opcode = VAR_4;
  return VAR_1;
 }
 return ((void*)0);
}
