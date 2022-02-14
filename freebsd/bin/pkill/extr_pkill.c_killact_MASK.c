
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {scalar_t__ ki_pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct kinfo_proc const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(const struct kinfo_proc *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_3) {



  FUNC_3("kill ");
  FUNC_4(VAR_6);
  FUNC_3("? ");
  FUNC_0(VAR_5);
  VAR_8 = VAR_7 = FUNC_1();
  while (VAR_7 != '\n' && VAR_7 != VAR_0)
   VAR_7 = FUNC_1();
  if (VAR_8 != 'y' && VAR_8 != 'Y')
   return (1);
 }
 if (FUNC_2(VAR_6->ki_pid, VAR_4) == -1) {





  if (VAR_2 != VAR_1)
   FUNC_5("signalling pid %d", (int)VAR_6->ki_pid);





  return (0);
 }
 return (1);
}
