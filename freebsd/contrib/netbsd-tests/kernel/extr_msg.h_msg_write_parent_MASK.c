
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_fds {int * pfd; int * cfd; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int ,void*,size_t) ;
 scalar_t__ FUNC_3 (int ,void*,size_t) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, struct msg_fds *VAR_1, void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 FUNC_0(VAR_1->pfd[1]);
 FUNC_0(VAR_1->cfd[0]);

 FUNC_1("Send %s\n", VAR_0);
 VAR_4 = FUNC_3(VAR_1->cfd[1], VAR_2, VAR_3);
 if (VAR_4 != (ssize_t)VAR_3)
  return 1;

 VAR_4 = FUNC_2(VAR_1->pfd[0], VAR_2, VAR_3);
 if (VAR_4 != (ssize_t)VAR_3)
  return 1;
 return 0;
}
