
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_program_data {scalar_t__ child; int child_stdin; int child_stdout; int program_name; scalar_t__ child_buf_avail; scalar_t__ child_buf; scalar_t__ child_buf_len; } ;
struct archive_write_filter {int next_filter; int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,char*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,int*,int ) ;

int
FUNC_8(struct archive_write_filter *VAR_7,
    struct archive_write_program_data *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 ssize_t VAR_12;

 if (VAR_8->child == 0)
  return FUNC_1(VAR_7->next_filter);

 VAR_9 = 0;
 FUNC_4(VAR_8->child_stdin);
 VAR_8->child_stdin = -1;
 FUNC_5(VAR_8->child_stdout, VAR_5, 0);

 for (;;) {
  do {
   VAR_12 = FUNC_6(VAR_8->child_stdout,
       VAR_8->child_buf + VAR_8->child_buf_avail,
       VAR_8->child_buf_len - VAR_8->child_buf_avail);
  } while (VAR_12 == -1 && VAR_6 == VAR_2);

  if (VAR_12 == 0 || (VAR_12 == -1 && VAR_6 == VAR_4))
   break;

  if (VAR_12 == -1) {
   FUNC_3(VAR_7->archive, VAR_6,
       "Error reading from program: %s", VAR_8->program_name);
   VAR_9 = VAR_0;
   goto cleanup;
  }
  VAR_8->child_buf_avail += VAR_12;

  VAR_9 = FUNC_2(VAR_7->next_filter,
      VAR_8->child_buf, VAR_8->child_buf_avail);
  if (VAR_9 != VAR_1) {
   VAR_9 = VAR_0;
   goto cleanup;
  }
  VAR_8->child_buf_avail = 0;
 }

cleanup:

 if (VAR_8->child_stdin != -1)
  FUNC_4(VAR_8->child_stdin);
 if (VAR_8->child_stdout != -1)
  FUNC_4(VAR_8->child_stdout);
 while (FUNC_7(VAR_8->child, &VAR_11, 0) == -1 && VAR_6 == VAR_2)
  continue;



 VAR_8->child = 0;

 if (VAR_11 != 0) {
  FUNC_3(VAR_7->archive, VAR_3,
      "Error closing program: %s", VAR_8->program_name);
  VAR_9 = VAR_0;
 }
 VAR_10 = FUNC_1(VAR_7->next_filter);
 return (VAR_10 < VAR_9 ? VAR_10 : VAR_9);
}
