
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(int VAR_2, char* VAR_3[]) {
  if (VAR_2 == 2 && !FUNC_4(VAR_3[1], "--pass")) {
    FUNC_0(VAR_1,"[%d] %s immediately returning 0\n", FUNC_2(), VAR_3[0]);
    return 0;
  }

  if (VAR_2 == 2 && !FUNC_4(VAR_3[1], "--fail")) {
    FUNC_0(VAR_1,"[%d] %s immediately returning 1\n", FUNC_2(), VAR_3[0]);
    return 1;
  }

  if (VAR_2 == 2 && !FUNC_4(VAR_3[1], "--checkroot")) {
    int VAR_4 = (FUNC_1() == 0);
    FUNC_0(VAR_1,"[uid:%d] %s immediately returning (geteuid() == 0) = %d\n", FUNC_1(), VAR_3[0], VAR_4);
    return VAR_4;
  }

  if (VAR_2 == 2 && !FUNC_4(VAR_3[1], "--capmode")) {

    int VAR_5 = 0;

    int VAR_6 = FUNC_3("/etc/passwd", VAR_0);
    if (VAR_6 > 0) {
      FUNC_0(VAR_1,"[%d] %s unexpectedly able to open file\n", FUNC_2(), VAR_3[0]);
      VAR_5 = 1;
    }
    FUNC_0(VAR_1,"[%d] %s --capmode returning %d\n", FUNC_2(), VAR_3[0], VAR_5);
    return VAR_5;
  }

  return -1;
}
