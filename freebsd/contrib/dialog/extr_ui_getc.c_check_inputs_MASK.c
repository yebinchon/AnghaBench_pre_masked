
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
struct TYPE_4__ {TYPE_1__* getc_callbacks; } ;
struct TYPE_3__ {scalar_t__ input; int input_ready; struct TYPE_3__* next; } ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_5(void)
{
    DIALOG_CALLBACK *VAR_4;
    fd_set VAR_5;
    struct timeval VAR_6;
    int VAR_7 = -1;
    int VAR_8;
    int VAR_9;
    int VAR_10 = -1;

    if ((VAR_4 = VAR_3.getc_callbacks) != 0) {
 FUNC_2(&VAR_5);

 while (VAR_4 != 0) {
     VAR_4->input_ready = VAR_0;
     if (VAR_4->input != 0 && (VAR_8 = FUNC_3(VAR_4->input)) >= 0) {
  FUNC_1(VAR_8, &VAR_5);
  if (VAR_7 < VAR_8)
      VAR_7 = VAR_8;
     }
     VAR_4 = VAR_4->next;
 }

 VAR_6.tv_sec = 0;
 VAR_6.tv_usec = VAR_2 * 1000;
 VAR_9 = FUNC_4(VAR_7 + 1, &VAR_5,
         (fd_set *) 0,
         (fd_set *) 0,
         &VAR_6);

 if (VAR_9 > 0) {
     for (VAR_4 = VAR_3.getc_callbacks; VAR_4 != 0; VAR_4 = VAR_4->next) {
  if (VAR_4->input != 0
      && (VAR_8 = FUNC_3(VAR_4->input)) >= 0
      && FUNC_0(VAR_8, &VAR_5)) {
      VAR_4->input_ready = VAR_1;
      VAR_10 = VAR_8;
  }
     }
 }
    }

    return VAR_10;
}
