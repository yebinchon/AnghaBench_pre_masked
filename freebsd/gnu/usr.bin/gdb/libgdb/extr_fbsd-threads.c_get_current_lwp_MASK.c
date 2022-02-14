
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_lwpinfo {scalar_t__ pl_lwpid; } ;
typedef int pl ;
typedef long lwpid_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static long
FUNC_3 (int VAR_4)
{
  struct ptrace_lwpinfo VAR_5;
  lwpid_t VAR_6;

  if (!VAR_3)
    {
      VAR_6 = 0;
      FUNC_0 (VAR_1, VAR_2, &VAR_6);
      return VAR_6;
    }
  if (FUNC_2 (VAR_0, VAR_4, (caddr_t)&VAR_5, sizeof(VAR_5)))
    FUNC_1("PT_LWPINFO");

  return (long)VAR_5.pl_lwpid;
}
