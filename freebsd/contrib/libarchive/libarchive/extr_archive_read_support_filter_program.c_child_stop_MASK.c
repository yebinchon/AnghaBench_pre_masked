
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct program_filter {int child_stdin; int child_stdout; scalar_t__ child; int waitpid_return; int exit_status; } ;
struct archive_read_filter {TYPE_1__* archive; } ;
struct TYPE_2__ {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*,...) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (scalar_t__,int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct archive_read_filter *VAR_6, struct program_filter *VAR_7)
{

 if (VAR_7->child_stdin != -1) {
  FUNC_6(VAR_7->child_stdin);
  VAR_7->child_stdin = -1;
 }
 if (VAR_7->child_stdout != -1) {
  FUNC_6(VAR_7->child_stdout);
  VAR_7->child_stdout = -1;
 }

 if (VAR_7->child != 0) {

  do {
   VAR_7->waitpid_return
       = FUNC_7(VAR_7->child, &VAR_7->exit_status, 0);
  } while (VAR_7->waitpid_return == -1 && VAR_5 == VAR_3);



  VAR_7->child = 0;
 }

 if (VAR_7->waitpid_return < 0) {

  FUNC_5(&VAR_6->archive->archive, VAR_0,
      "Child process exited badly");
  return (VAR_2);
 }


 if (FUNC_3(VAR_7->exit_status)) {
  FUNC_5(&VAR_6->archive->archive, VAR_0,
      "Child process exited with signal %d",
      FUNC_4(VAR_7->exit_status));
  return (VAR_2);
 }


 if (FUNC_2(VAR_7->exit_status)) {
  if (FUNC_1(VAR_7->exit_status) == 0)
   return (VAR_1);

  FUNC_5(&VAR_6->archive->archive,
      VAR_0,
      "Child process exited with status %d",
      FUNC_1(VAR_7->exit_status));
  return (VAR_2);
 }

 return (VAR_2);
}
