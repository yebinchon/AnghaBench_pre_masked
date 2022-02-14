
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct _s_x {int dummy; } ;
struct TYPE_3__ {int opcode; int len; int arg1; } ;
typedef TYPE_1__ ipfw_insn ;
typedef enum ipfw_opcodes { ____Placeholder_ipfw_opcodes } ipfw_opcodes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (struct _s_x*,char*,char**,int*,int*) ;

__attribute__((used)) static void
FUNC_2(ipfw_insn *VAR_3, enum ipfw_opcodes VAR_4,
 struct _s_x *VAR_5, char *VAR_6)
{
 char *VAR_7;
 uint32_t VAR_8 = 0, VAR_9 = 0;

 if (FUNC_1(VAR_5, VAR_6, &VAR_7, &VAR_8, &VAR_9) != 0)
  FUNC_0(VAR_0, "invalid flag %s", VAR_7);

 VAR_3->opcode = VAR_4;
 VAR_3->len = (VAR_3->len & (VAR_1 | VAR_2)) | 1;
 VAR_3->arg1 = (VAR_8 & 0xff) | ( (VAR_9 & 0xff) << 8);
}
