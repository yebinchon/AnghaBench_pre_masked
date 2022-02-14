
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ unichar ;
typedef scalar_t__ rc_uint_type ;
typedef int mc_node_lang ;
typedef int FILE ;


 char* FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_1, const unichar *VAR_2, rc_uint_type VAR_3, const unichar *VAR_4, mc_node_lang *VAR_5)
{
  char *VAR_6;
  char *VAR_7 = ((void*)0);

  if (!VAR_2 || VAR_2[0] == 0)
    {
      if (VAR_5 != ((void*)0))
 {
   if (VAR_0)
     FUNC_1 (VAR_1, "//\n// MessageId: 0x%lu\n//\n", (unsigned long) VAR_3);
   else
     FUNC_1 (VAR_1, "//\n// MessageId: 0x%lx\n//\n", (unsigned long) VAR_3);
 }
      return;
    }
  VAR_6 = FUNC_0 (VAR_2);
  if (VAR_4 && VAR_4[0] != 0)
    VAR_7 = FUNC_0 (VAR_4);
  FUNC_1 (VAR_1, "//\n// MessageId: %s\n//\n", VAR_6);
  if (! VAR_0)
    FUNC_1 (VAR_1, "#define %s %s%s%s 0x%lx\n\n", VAR_6,
      (VAR_7 ? "(" : ""), (VAR_7 ? VAR_7 : ""), (VAR_7 ? ")" : ""),
    (unsigned long) VAR_3);
  else
    FUNC_1 (VAR_1, "#define %s %s%s%s 0x%lu\n\n", VAR_6,
      (VAR_7 ? "(" : ""), (VAR_7 ? VAR_7 : ""), (VAR_7 ? ")" : ""),
    (unsigned long) VAR_3);
}
