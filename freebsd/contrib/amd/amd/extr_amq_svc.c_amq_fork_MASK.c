
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigset_t ;
typedef int pid_t ;
typedef scalar_t__ opaque_t ;
struct TYPE_3__ {int* am_fd; } ;
typedef TYPE_1__ am_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_3 (char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int*,int*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(opaque_t VAR_7)
{



  int VAR_8;

  am_node *VAR_9;
  pid_t VAR_10;

  VAR_9 = FUNC_3(*(char **) VAR_7);
  if (VAR_9 == ((void*)0)) {
    VAR_6 = 0;
    return -1;
  }

  if (FUNC_4(VAR_9->am_fd) == -1) {
    VAR_9->am_fd[0] = -1;
    VAR_9->am_fd[1] = -1;
    return -1;
  }
  VAR_8 =
      FUNC_8(VAR_1) |
      FUNC_8(VAR_2) |
      FUNC_8(VAR_3) |
      FUNC_8(VAR_0);
  VAR_8 = FUNC_6(VAR_8);


  switch ((VAR_10 = FUNC_0())) {
  case -1:
    FUNC_2("amq_fork failed");
    return -1;

  case 0:
    FUNC_1(VAR_9->am_fd[1]);
    VAR_9->am_fd[1] = -1;
    return 0;

  default:
    FUNC_1(VAR_9->am_fd[0]);
    VAR_9->am_fd[0] = -1;




    FUNC_10(VAR_8);

    return VAR_10;
  }
}
