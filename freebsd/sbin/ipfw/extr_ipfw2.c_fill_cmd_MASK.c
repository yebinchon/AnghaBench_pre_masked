
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int opcode; int len; int arg1; } ;
typedef TYPE_1__ ipfw_insn ;
typedef enum ipfw_opcodes { ____Placeholder_ipfw_opcodes } ipfw_opcodes ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(ipfw_insn *VAR_2, enum ipfw_opcodes VAR_3, int VAR_4, uint16_t VAR_5)
{
 VAR_2->opcode = VAR_3;
 VAR_2->len = ((VAR_2->len | VAR_4) & (VAR_0 | VAR_1)) | 1;
 VAR_2->arg1 = VAR_5;
}
