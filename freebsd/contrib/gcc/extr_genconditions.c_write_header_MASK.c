
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 ("/* Generated automatically by the program `genconditions' from the target\n   machine description file.  */\n\n#include \"bconfig.h\"\n#include \"system.h\"\n\n/* It is necessary, but not entirely safe, to include the headers below\n   in a generator program.  As a defensive measure, don't do so when the\n   table isn't going to have anything in it.  */\n#if GCC_VERSION >= 3001\n\n/* Do not allow checking to confuse the issue.  */\n#undef ENABLE_CHECKING\n#undef ENABLE_TREE_CHECKING\n#undef ENABLE_RTL_CHECKING\n#undef ENABLE_RTL_FLAG_CHECKING\n#undef ENABLE_GC_CHECKING\n#undef ENABLE_GC_ALWAYS_COLLECT\n\n#include \"coretypes.h\"\n#include \"tm.h\"\n#include \"insn-constants.h\"\n#include \"rtl.h\"\n#include \"tm_p.h\"\n#include \"function.h\"\n\n/* Fake - insn-config.h doesn't exist yet.  */\n#define MAX_RECOG_OPERANDS 10\n#define MAX_DUP_OPERANDS 10\n#define MAX_INSNS_PER_SPLIT 5\n\n#include \"regs.h\"\n#include \"recog.h\"\n#include \"real.h\"\n#include \"output.h\"\n#include \"flags.h\"\n#include \"hard-reg-set.h\"\n#include \"resource.h\"\n#include \"toplev.h\"\n#include \"reload.h\"\n#include \"tm-constrs.h\"\n");
  if (VAR_0)
    FUNC_0 ("#define HAVE_eh_return 1");
  FUNC_0 ("#include \"except.h\"\n");

  FUNC_0 ("/* Dummy external declarations.  */\nextern rtx insn;\nextern rtx ins1;\nextern rtx operands[];\n\n#endif /* gcc >= 3.0.1 */\n");






}
