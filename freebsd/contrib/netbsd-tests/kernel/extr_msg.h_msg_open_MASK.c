
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_fds {int * pfd; int * cfd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct msg_fds *VAR_0)
{
 if (FUNC_1(VAR_0->pfd) == -1)
  return -1;
 if (FUNC_1(VAR_0->cfd) == -1) {
  FUNC_0(VAR_0->pfd[0]);
  FUNC_0(VAR_0->pfd[1]);
  return -1;
 }
 return 0;
}
