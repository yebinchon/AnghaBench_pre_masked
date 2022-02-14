
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_info {int dummy; } ;
struct cmd_list_element {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct gdbarch_info*) ;
 int FUNC_2 (struct gdbarch_info) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2,
     struct cmd_list_element *VAR_3)
{
  struct gdbarch_info VAR_4;
  FUNC_1 (&VAR_4);



  if (!FUNC_2 (VAR_4))
    {
      VAR_0 = 0;
      FUNC_0 ("32-bit compatibility mode not supported");
    }
}
