
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 if (VAR_1) {
  FUNC_2(VAR_0,((void*)0));
 } else {
  FUNC_1(VAR_2, "%s\n%s\n%s\n",
 "usage: ypxfr [-f] [-c] [-d target domain] [-h source host]",
 "             [-s source domain] [-p path]",
 "             [-C taskid program-number ipaddr port] mapname");
  FUNC_0(1);
 }
}
