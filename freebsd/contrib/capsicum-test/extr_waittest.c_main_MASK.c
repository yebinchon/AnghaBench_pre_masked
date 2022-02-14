
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int*,int ) ;

int FUNC_6() {
  int VAR_3;
  int VAR_4 = FUNC_2(&VAR_3, 0);
  if (VAR_4 < 0) {
    FUNC_1(VAR_2, "pdfork() failed rc=%d errno=%d %s\n", VAR_4, VAR_1, FUNC_4(VAR_1));
    FUNC_0(1);
  }
  if (VAR_4 == 0) {
    FUNC_3(1);
    FUNC_0(123);
  }
  FUNC_1(VAR_2, "pdfork()ed child pid=%ld procfd=%d\n", (long)VAR_4, VAR_3);
  FUNC_3(2);
  pid_t VAR_5 = FUNC_5(-1, &VAR_4, VAR_0);
  if (VAR_5 == 0) {
    FUNC_1(VAR_2, "waitpid(): no completed child found\n");
  } else if (VAR_5 < 0) {
    FUNC_1(VAR_2, "waitpid(): failed errno=%d %s\n", VAR_1, FUNC_4(VAR_1));
  } else {
    FUNC_1(VAR_2, "waitpid(): found completed child %ld\n", (long)VAR_5);
  }
  return 0;
}
