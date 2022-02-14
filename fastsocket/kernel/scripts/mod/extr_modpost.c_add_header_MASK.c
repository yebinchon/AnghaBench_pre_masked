
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {scalar_t__ has_cleanup; scalar_t__ has_init; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct buffer *VAR_0, struct module *VAR_1)
{
 FUNC_0(VAR_0, "#include <linux/module.h>\n");
 FUNC_0(VAR_0, "#include <linux/vermagic.h>\n");
 FUNC_0(VAR_0, "#include <linux/compiler.h>\n");
 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, "MODULE_INFO(vermagic, VERMAGIC_STRING);\n");
 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, "struct module __this_module\n");
 FUNC_0(VAR_0, "__attribute__((section(\".gnu.linkonce.this_module\"))) = {\n");
 FUNC_0(VAR_0, " .name = KBUILD_MODNAME,\n");
 if (VAR_1->has_init)
  FUNC_0(VAR_0, " .init = init_module,\n");
 if (VAR_1->has_cleanup)
  FUNC_0(VAR_0, "#ifdef CONFIG_MODULE_UNLOAD\n"
         " .exit = cleanup_module,\n"
         "#endif\n");
 FUNC_0(VAR_0, " .arch = MODULE_ARCH_INIT,\n");
 FUNC_0(VAR_0, "};\n");
}
