
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {long tab_len; } ;
struct TYPE_6__ {scalar_t__ tab_correct; } ;
struct TYPE_5__ {int fd_bytes_read; long bytes_read; long buffer_len; char* buf; void* buffer_first; int fd; } ;
typedef TYPE_1__ MY_OBJ ;


 void* VAR_0 ;
 char VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,size_t) ;
 void* FUNC_3 (size_t) ;

__attribute__((used)) static void
FUNC_4(MY_OBJ * VAR_4, size_t VAR_5)
{
    char *VAR_6, VAR_7;
    int VAR_8 = 0, VAR_9, VAR_10, VAR_11;
    long VAR_12;


    VAR_6 = FUNC_3(VAR_5 + 1);

    if ((VAR_4->fd_bytes_read = FUNC_2(VAR_4->fd, VAR_6, VAR_5)) != -1) {

 VAR_6[VAR_4->fd_bytes_read] = '\0';

 if (VAR_3.tab_correct) {


     VAR_4->bytes_read = VAR_12 = 0;
     for (VAR_9 = 0; VAR_9 < VAR_4->fd_bytes_read; VAR_9++)
  if (VAR_6[VAR_9] == VAR_1)
      VAR_4->bytes_read += VAR_2.tab_len
   - ((VAR_4->bytes_read - VAR_12)
      % VAR_2.tab_len);
  else if (VAR_6[VAR_9] == '\n') {
      VAR_4->bytes_read++;
      VAR_12 = VAR_4->bytes_read;
  } else
      VAR_4->bytes_read++;

     if (VAR_4->bytes_read > VAR_4->buffer_len) {
  if (VAR_4->buffer_first)
      VAR_4->buffer_first = VAR_0;
  else {
      FUNC_1(VAR_4->buf);
  }

  VAR_4->buffer_len = VAR_4->bytes_read;


  VAR_4->buf = FUNC_3((size_t) VAR_4->buffer_len + 1);
     }

 } else {
     if (VAR_4->buffer_first) {
  VAR_4->buffer_first = VAR_0;


  VAR_4->buf = FUNC_3(VAR_5 + 1);
     }

     VAR_4->bytes_read = VAR_4->fd_bytes_read;
 }

 VAR_9 = 0;
 VAR_12 = 0;
 while (VAR_9 < VAR_4->fd_bytes_read)
     if (((VAR_7 = VAR_6[VAR_9++]) == VAR_1) && (VAR_3.tab_correct != 0)) {
  VAR_11 = (VAR_2.tab_len
     - ((int) ((long) VAR_8 - VAR_12) % VAR_2.tab_len));
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
      VAR_4->buf[VAR_8++] = ' ';
     } else {
  if (VAR_7 == '\n')
      VAR_12 = VAR_8 + 1;
  VAR_4->buf[VAR_8++] = VAR_7;
     }

 VAR_4->buf[VAR_8] = '\0';

    }
    if (VAR_4->bytes_read == -1)
 FUNC_0("Error reading file");
    FUNC_1(VAR_6);
}
