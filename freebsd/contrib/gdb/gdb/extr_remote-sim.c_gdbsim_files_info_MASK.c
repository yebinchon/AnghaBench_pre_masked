
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4 (struct target_ops *VAR_3)
{
  char *VAR_4 = "nothing";

  if (VAR_0)
    VAR_4 = FUNC_0 (VAR_0);

  if (FUNC_3 ())
    FUNC_1 ("gdbsim_files_info: file \"%s\"\n", VAR_4);

  if (VAR_0)
    {
      FUNC_1 ("\tAttached to %s running program %s\n",
         VAR_2, VAR_4);
      FUNC_2 (VAR_1, 0);
    }
}
