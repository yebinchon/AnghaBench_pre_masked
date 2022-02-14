
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* outf_p ;


 size_t VAR_0 ;
 void** VAR_1 ;
 void* FUNC_0 (char*,char*) ;
 void* VAR_2 ;
 char** VAR_3 ;
 int FUNC_1 (void*,char*,char const* const) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  size_t VAR_4;

  VAR_2 = FUNC_0 ("GCC", "gtype-desc.h");

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    VAR_1[VAR_4] = FUNC_0 (VAR_3[VAR_4],
     FUNC_2 ("gtype-%s.h", VAR_3[VAR_4]));


  {

    static const char *const VAR_5 [] = {
      "config.h", "system.h", "coretypes.h", "tm.h", "varray.h",
      "hashtab.h", "splay-tree.h", "obstack.h", "bitmap.h", "input.h",
      "tree.h", "rtl.h", "function.h", "insn-config.h", "expr.h",
      "hard-reg-set.h", "basic-block.h", "cselib.h", "insn-addr.h",
      "optabs.h", "libfuncs.h", "debug.h", "ggc.h", "cgraph.h",
      "tree-flow.h", "reload.h", "cpp-id-data.h", "tree-chrec.h",
      "except.h", "output.h", ((void*)0)
    };
    const char *const *VAR_6;
    outf_p VAR_7;

    VAR_7 = FUNC_0 ("GCC", "gtype-desc.c");
    for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
      FUNC_1 (VAR_7, "#include \"%s\"\n", *VAR_6);
  }
}
