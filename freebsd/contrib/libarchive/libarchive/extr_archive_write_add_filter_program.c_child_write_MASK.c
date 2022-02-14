
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_program_data {int child_stdin; int child_stdout; scalar_t__ child_buf_avail; scalar_t__ child_buf; scalar_t__ child_buf_len; } ;
struct archive_write_filter {int next_filter; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_6(struct archive_write_filter *VAR_6,
    struct archive_write_program_data *VAR_7, const char *VAR_8, size_t VAR_9)
{
 ssize_t VAR_10;

 if (VAR_7->child_stdin == -1)
  return (-1);

 if (VAR_9 == 0)
  return (-1);

 for (;;) {
  do {
   VAR_10 = FUNC_5(VAR_7->child_stdin, VAR_8, VAR_9);
  } while (VAR_10 == -1 && VAR_5 == VAR_2);

  if (VAR_10 > 0)
   return (VAR_10);
  if (VAR_10 == 0) {
   FUNC_2(VAR_7->child_stdin);
   VAR_7->child_stdin = -1;
   FUNC_3(VAR_7->child_stdout, VAR_4, 0);
   return (0);
  }
  if (VAR_10 == -1 && VAR_5 != VAR_1)
   return (-1);

  if (VAR_7->child_stdout == -1) {
   FUNC_3(VAR_7->child_stdin, VAR_4, 0);
   FUNC_0(VAR_7->child_stdin,
    VAR_7->child_stdout);
   continue;
  }

  do {
   VAR_10 = FUNC_4(VAR_7->child_stdout,
       VAR_7->child_buf + VAR_7->child_buf_avail,
       VAR_7->child_buf_len - VAR_7->child_buf_avail);
  } while (VAR_10 == -1 && VAR_5 == VAR_2);

  if (VAR_10 == 0 || (VAR_10 == -1 && VAR_5 == VAR_3)) {
   FUNC_2(VAR_7->child_stdout);
   VAR_7->child_stdout = -1;
   FUNC_3(VAR_7->child_stdin, VAR_4, 0);
   continue;
  }
  if (VAR_10 == -1 && VAR_5 == VAR_1) {
   FUNC_0(VAR_7->child_stdin,
    VAR_7->child_stdout);
   continue;
  }
  if (VAR_10 == -1)
   return (-1);

  VAR_7->child_buf_avail += VAR_10;

  VAR_10 = FUNC_1(VAR_6->next_filter,
      VAR_7->child_buf, VAR_7->child_buf_avail);
  if (VAR_10 != VAR_0)
   return (-1);
  VAR_7->child_buf_avail = 0;
 }
}
