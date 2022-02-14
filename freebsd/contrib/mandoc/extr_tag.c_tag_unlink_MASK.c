
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {int tcpgid; scalar_t__ pager_pid; char* ofn; char* tfn; int ofd; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(void)
{
 pid_t VAR_1;

 if (VAR_0.tcpgid != -1) {
  VAR_1 = FUNC_1(VAR_0.ofd);
  if (VAR_1 == VAR_0.pager_pid ||
      VAR_1 == FUNC_0(0) ||
      FUNC_0(VAR_1) == -1)
   (void)FUNC_2(VAR_0.ofd, VAR_0.tcpgid);
 }
 if (*VAR_0.ofn != '\0')
  FUNC_3(VAR_0.ofn);
 if (*VAR_0.tfn != '\0')
  FUNC_3(VAR_0.tfn);
}
