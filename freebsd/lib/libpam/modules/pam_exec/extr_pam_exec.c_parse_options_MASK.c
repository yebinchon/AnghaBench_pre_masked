
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pe_opts {int capture_stdout; int capture_stderr; int return_prog_exit_status; int expose_authtok; int use_first_pass; } ;


 int VAR_0 ;
 int FUNC_0 (struct pe_opts*,int ,int) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, int *VAR_2, const char **VAR_3[],
    struct pe_opts *VAR_4)
{
 int VAR_5;
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 for (VAR_5 = 0; VAR_5 < *VAR_2; ++VAR_5) {
  if (FUNC_2((*VAR_3)[VAR_5], "debug") == 0 ||
      FUNC_2((*VAR_3)[VAR_5], "no_warn") == 0) {

  } else if (FUNC_2((*VAR_3)[VAR_5], "capture_stdout") == 0) {
   VAR_4->capture_stdout = 1;
  } else if (FUNC_2((*VAR_3)[VAR_5], "capture_stderr") == 0) {
   VAR_4->capture_stderr = 1;
  } else if (FUNC_2((*VAR_3)[VAR_5], "return_prog_exit_status") == 0) {
   VAR_4->return_prog_exit_status = 1;
  } else if (FUNC_2((*VAR_3)[VAR_5], "expose_authtok") == 0) {
   VAR_4->expose_authtok = 1;
  } else if (FUNC_2((*VAR_3)[VAR_5], "use_first_pass") == 0) {
   VAR_4->use_first_pass = 1;
  } else {
   if (FUNC_2((*VAR_3)[VAR_5], "--") == 0) {
    (*VAR_2)--;
    (*VAR_3)++;
   }
   break;
  }
  FUNC_1(VAR_0, "%s: option \"%s\" enabled",
      VAR_1, (*VAR_3)[VAR_5]);
 }

 (*VAR_2) -= VAR_5;
 (*VAR_3) += VAR_5;

 return (0);
}
