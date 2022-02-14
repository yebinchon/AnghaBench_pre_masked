
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_8__ {scalar_t__ tab_correct; } ;
struct TYPE_7__ {long in_buf; long fd_bytes_read; int file_size; int buf; } ;
typedef TYPE_1__ MY_OBJ ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_0 (int *,long,long,long,int ,int ,int ,int ,scalar_t__,int ,int ) ;
 long FUNC_1 (TYPE_1__*,int ,long) ;
 long FUNC_2 (TYPE_1__*) ;
 long FUNC_3 (TYPE_1__*,long,long*) ;

__attribute__((used)) static void
FUNC_4(MY_OBJ * VAR_4, WINDOW *VAR_5, int VAR_6, int VAR_7)
{
    long VAR_8;
    long VAR_9;
    long VAR_10 = -1;

    VAR_8 = FUNC_2(VAR_4);
    if (VAR_3.tab_correct)
 VAR_9 = FUNC_3(VAR_4, VAR_4->in_buf, &VAR_10);
    else
 VAR_10 = FUNC_1(VAR_4, VAR_4->buf, VAR_9 = VAR_4->in_buf);

    FUNC_0(VAR_5,
         VAR_10,
         VAR_8 - VAR_4->fd_bytes_read + VAR_9,
         VAR_8 - VAR_4->fd_bytes_read + VAR_9,
         VAR_4->file_size,
         0, VAR_1,
         0, VAR_0 + 1,
         VAR_2,
         VAR_2);
}
