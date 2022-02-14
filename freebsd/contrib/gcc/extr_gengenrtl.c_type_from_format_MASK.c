
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static const char *
FUNC_1 (int VAR_0)
{
  switch (VAR_0)
    {
    case 'i':
      return "int ";

    case 'w':
      return "HOST_WIDE_INT ";

    case 's':
      return "const char *";

    case 'e': case 'u':
      return "rtx ";

    case 'E':
      return "rtvec ";
    case 'b':
      return "struct bitmap_head_def *";
    case 't':
      return "union tree_node *";
    case 'B':
      return "struct basic_block_def *";
    default:
      FUNC_0 ();
    }
}
