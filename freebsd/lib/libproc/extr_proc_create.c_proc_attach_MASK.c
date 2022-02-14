
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_handle {int status; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct proc_handle*) ;
 int FUNC_6 (struct proc_handle*) ;
 int FUNC_7 (struct proc_handle*) ;
 int FUNC_8 (scalar_t__,int,int ,struct proc_handle**) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,int*,int ) ;

int
FUNC_11(pid_t VAR_11, int VAR_12, struct proc_handle **VAR_13)
{
 struct proc_handle *VAR_14;
 int VAR_15, VAR_16;

 if (VAR_11 == 0 || (VAR_11 == FUNC_4() && (VAR_12 & VAR_5) == 0))
  return (VAR_0);
 if (FUNC_3(VAR_2) == VAR_3)
  return (VAR_1);





 VAR_15 = FUNC_8(VAR_11, VAR_12, VAR_6, &VAR_14);
 if (VAR_15 != 0)
  goto out;

 if ((VAR_12 & VAR_5) == 0) {
  if (FUNC_9(VAR_8, FUNC_7(VAR_14), 0, 0) != 0) {
   VAR_15 = VAR_10;
   FUNC_0("ERROR: cannot ptrace child process %d", VAR_11);
   goto out;
  }


  if (FUNC_10(VAR_11, &VAR_16, VAR_9) == -1) {
   VAR_15 = VAR_10;
   FUNC_0("ERROR: child process %d didn't stop as expected", VAR_11);
   goto out;
  }


  if (!FUNC_2(VAR_16))
   FUNC_1("ERROR: child process %d status 0x%x", VAR_11, VAR_16);
  else
   VAR_14->status = VAR_7;

  if ((VAR_12 & VAR_4) != 0)
   FUNC_5(VAR_14);
 }

out:
 if (VAR_15 != 0 && VAR_14 != ((void*)0)) {
  FUNC_6(VAR_14);
  VAR_14 = ((void*)0);
 }
 *VAR_13 = VAR_14;
 return (VAR_15);
}
