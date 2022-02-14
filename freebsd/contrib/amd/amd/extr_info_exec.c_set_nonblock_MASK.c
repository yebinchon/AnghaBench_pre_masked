
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_4)
{
  int VAR_5;

  if (VAR_4 < 0)
     return 0;

  if ((VAR_5 = FUNC_0(VAR_4, VAR_0, 0)) < 0) {
    FUNC_1(VAR_3, "set_nonblock fcntl F_GETFL error: %m");
    return 0;
  }

  VAR_5 |= VAR_2;
  if (FUNC_0(VAR_4, VAR_1, VAR_5) < 0) {
    FUNC_1(VAR_3, "set_nonblock fcntl F_SETFL error: %m");
    return 0;
  }

  return 1;
}
