
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t in_buf; long fd_bytes_read; char* buf; void* begin_reached; int end_reached; } ;
typedef TYPE_1__ MY_OBJ ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 long FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,long) ;
 int FUNC_4 (TYPE_1__*,int) ;
 void* FUNC_5 (TYPE_1__*,long,long*) ;

__attribute__((used)) static void
FUNC_6(MY_OBJ * VAR_3, long VAR_4)
{
    int VAR_5;
    long VAR_6;
    long VAR_7;

    VAR_3->begin_reached = VAR_1;




    if (!VAR_3->end_reached) {


 if (VAR_3->in_buf == 0) {
     VAR_6 = FUNC_1(VAR_3);

     if (VAR_6 > VAR_3->fd_bytes_read) {






  if (VAR_6 < VAR_0 / 2 + VAR_3->fd_bytes_read) {

      FUNC_3(VAR_3, 0L);
      VAR_7 = VAR_6 - VAR_3->fd_bytes_read;
  } else {
      FUNC_2(VAR_3, -(VAR_0 / 2 + VAR_3->fd_bytes_read));
      VAR_7 = VAR_0 / 2;
  }
  FUNC_4(VAR_3, VAR_0);

  VAR_3->in_buf = FUNC_5(VAR_3, VAR_7, (long *) 0);

     } else {
  VAR_3->begin_reached = VAR_2;
  return;
     }
 }
 VAR_3->in_buf--;
 if (VAR_3->buf[VAR_3->in_buf] != '\n')

     FUNC_0("Internal error in back_lines().");
    }


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
 do {
     if (VAR_3->in_buf == 0) {
  VAR_6 = FUNC_1(VAR_3);

  if (VAR_6 > VAR_3->fd_bytes_read) {

      if (VAR_6 < VAR_0 / 2 + VAR_3->fd_bytes_read) {

   FUNC_3(VAR_3, 0L);
   VAR_7 = VAR_6 - VAR_3->fd_bytes_read;
      } else {
   FUNC_2(VAR_3, -(VAR_0 / 2 + VAR_3->fd_bytes_read));
   VAR_7 = VAR_0 / 2;
      }
      FUNC_4(VAR_3, VAR_0);

      VAR_3->in_buf = FUNC_5(VAR_3, VAR_7, (long *) 0);

  } else {
      VAR_3->begin_reached = VAR_2;
      return;
  }
     }
 } while (VAR_3->buf[--(VAR_3->in_buf)] != '\n');
    }
    VAR_3->in_buf++;
}
