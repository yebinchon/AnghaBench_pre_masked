
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_fds {int * cfd; int * pfd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct msg_fds *VAR_0)
{
 FUNC_0(VAR_0->pfd[0]);
 FUNC_0(VAR_0->pfd[1]);
 FUNC_0(VAR_0->cfd[0]);
 FUNC_0(VAR_0->cfd[1]);
}
